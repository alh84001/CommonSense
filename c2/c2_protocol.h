/*
 *
 * Copyright (C) 2016 DMA <dma@ya.ru>
 *
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation. 
*/

#pragma once

#include <stdint.h>
/*
 * The data block for the control channel is 64 bytes, both up and down.
 * Packet format is [command byte][application-specific].
 * MESSAGES MUST BE EXACTLY 64 BYTES IN LENGTH, otherwise host will drop them.
 * If your message is longer - it is _your_ problem, you should handle it at both sides.
 * Use the IN_type_t and OUT_type_t for communication. 
 * Directions are defined in USB spec sense - so IN is TO HOST, OUT is TO DEVICE.
 * Preferred method of handling messages at the host is to install event handler to TODO
 * On firmware side we should conserver resources,
 * so use case statement in dispatch_command. Do not use USB_EP_INBOX_EP_ISR_ExitCallback!
 * Messages that are NOT picked up will be DROPPED at firmware side or PRINTED at the host side.
 * They will be printed in full, first byte included.
 * This kind of restricts number of available commands to 32.
 * Should be enough for everyone!
 *
*/

enum c2command {
    C2CMD_EWO = 0x00,
    C2CMD_GET_STATUS,
    C2CMD_GET_CONFIG,
    C2CMD_SEND_CONFIG,
    C2CMD_SAVE_CONFIG,
    C2CMD_GET_MATRIX_STATE,
    C2CMD_ENTER_BOOTLOADER
};

enum c2response {
    C2RESPONSE_STATUS = 0x00,
    C2RESPONSE_CONFIG,
    C2RESPONSE_MATRIX_STATUS
};

enum deviceStatus {
    C2DEVSTASTUS_EMERGENCY = 0,
    C2DEVSTASTUS_MATRIXOUTPUT = 1,
};

typedef union {
    struct {
        uint8_t status;
        uint8_t versionMajor;
        uint8_t versionMinor;
        uint8_t dieTemp;
    };
    uint8_t raw[4];
} __attribute__ ((packed)) device_status_t;

typedef union {
    struct {
        unsigned char response_type;
        unsigned char payload[63];
    };
    uint8_t raw[64];
} __attribute__ ((packed)) IN_c2packet_t;

typedef union {
    struct {
        unsigned char command;
        unsigned char payload[63];
    };
    uint8_t raw[64];
} __attribute__ ((packed)) OUT_c2packet_t;
