/***************************************************************************//**
* \file USB_descr.c
* \version 3.0
*
* \brief
*  This file contains the USB descriptors and storage.
*
********************************************************************************
* \copyright
* Copyright 2008-2015, Cypress Semiconductor Corporation.  All rights reserved.
* You may use this file only in accordance with the license, terms, conditions,
* disclaimers, and limitations in the end user license agreement accompanying
* the software package with which this file was provided.
*******************************************************************************/

#include "USB_pvt.h"


/*****************************************************************************
*  User supplied descriptors.  If you want to specify your own descriptors,
*  define USER_SUPPLIED_DESCRIPTORS below and add your descriptors.
*****************************************************************************/
/* `#START USER_DESCRIPTORS_DECLARATIONS` Place your declaration here */

/* `#END` */


/***************************************
*  USB Customizer Generated Descriptors
***************************************/

#if !defined(USER_SUPPLIED_DESCRIPTORS)
/*********************************************************************
* Device Descriptors
*********************************************************************/
const uint8 CYCODE USB_DEVICE0_DESCR[18u] = {
/* Descriptor Length                       */ 0x12u,
/* DescriptorType: DEVICE                  */ 0x01u,
/* bcdUSB (ver 2.0)                        */ 0x00u, 0x02u,
/* bDeviceClass                            */ 0x00u,
/* bDeviceSubClass                         */ 0x00u,
/* bDeviceProtocol                         */ 0x00u,
/* bMaxPacketSize0                         */ 0x08u,
/* idVendor                                */ 0xEDu, 0xFEu,
/* idProduct                               */ 0x88u, 0x14u,
/* bcdDevice                               */ 0x01u, 0x00u,
/* iManufacturer                           */ 0x02u,
/* iProduct                                */ 0x05u,
/* iSerialNumber                           */ 0x80u,
/* bNumConfigurations                      */ 0x01u
};
/*********************************************************************
* Config Descriptor  
*********************************************************************/
const uint8 CYCODE USB_DEVICE0_CONFIGURATION0_DESCR[98u] = {
/*  Config Descriptor Length               */ 0x09u,
/*  DescriptorType: CONFIG                 */ 0x02u,
/*  wTotalLength                           */ 0x62u, 0x00u,
/*  bNumInterfaces                         */ 0x03u,
/*  bConfigurationValue                    */ 0x01u,
/*  iConfiguration                         */ 0x00u,
/*  bmAttributes                           */ 0x80u,
/*  bMaxPower                              */ 0x64u,
/*********************************************************************
* Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x00u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x02u,
/*  bInterfaceClass                        */ 0x03u,
/*  bInterfaceSubClass                     */ 0x01u,
/*  bInterfaceProtocol                     */ 0x01u,
/*  iInterface                             */ 0x06u,
/*********************************************************************
* HID Class Descriptor
*********************************************************************/
/*  HID Class Descriptor Length            */ 0x09u,
/*  DescriptorType: HID_CLASS              */ 0x21u,
/*  bcdHID                                 */ 0x11u, 0x01u,
/*  bCountryCode                           */ 0x00u,
/*  bNumDescriptors                        */ 0x01u,
/*  bDescriptorType                        */ 0x22u,
/*  wDescriptorLength (LSB)                */ USB_HID_RPT_1_SIZE_LSB,
/*  wDescriptorLength (MSB)                */ USB_HID_RPT_1_SIZE_MSB,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x81u,
/*  bmAttributes                           */ 0x03u,
/*  wMaxPacketSize                         */ 0x08u, 0x00u,
/*  bInterval                              */ 0x0Au,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x08u,
/*  bmAttributes                           */ 0x03u,
/*  wMaxPacketSize                         */ 0x08u, 0x00u,
/*  bInterval                              */ 0x0Au,
/*********************************************************************
* Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x01u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x02u,
/*  bInterfaceClass                        */ 0x03u,
/*  bInterfaceSubClass                     */ 0x00u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x04u,
/*********************************************************************
* HID Class Descriptor
*********************************************************************/
/*  HID Class Descriptor Length            */ 0x09u,
/*  DescriptorType: HID_CLASS              */ 0x21u,
/*  bcdHID                                 */ 0x11u, 0x01u,
/*  bCountryCode                           */ 0x00u,
/*  bNumDescriptors                        */ 0x01u,
/*  bDescriptorType                        */ 0x22u,
/*  wDescriptorLength (LSB)                */ USB_HID_RPT_3_SIZE_LSB,
/*  wDescriptorLength (MSB)                */ USB_HID_RPT_3_SIZE_MSB,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x82u,
/*  bmAttributes                           */ 0x03u,
/*  wMaxPacketSize                         */ 0x40u, 0x00u,
/*  bInterval                              */ 0x0Au,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x08u,
/*  bmAttributes                           */ 0x03u,
/*  wMaxPacketSize                         */ 0x40u, 0x00u,
/*  bInterval                              */ 0x0Au,
/*********************************************************************
* Interface Descriptor
*********************************************************************/
/*  Interface Descriptor Length            */ 0x09u,
/*  DescriptorType: INTERFACE              */ 0x04u,
/*  bInterfaceNumber                       */ 0x02u,
/*  bAlternateSetting                      */ 0x00u,
/*  bNumEndpoints                          */ 0x01u,
/*  bInterfaceClass                        */ 0x03u,
/*  bInterfaceSubClass                     */ 0x00u,
/*  bInterfaceProtocol                     */ 0x00u,
/*  iInterface                             */ 0x03u,
/*********************************************************************
* HID Class Descriptor
*********************************************************************/
/*  HID Class Descriptor Length            */ 0x09u,
/*  DescriptorType: HID_CLASS              */ 0x21u,
/*  bcdHID                                 */ 0x11u, 0x01u,
/*  bCountryCode                           */ 0x00u,
/*  bNumDescriptors                        */ 0x01u,
/*  bDescriptorType                        */ 0x22u,
/*  wDescriptorLength (LSB)                */ USB_HID_RPT_2_SIZE_LSB,
/*  wDescriptorLength (MSB)                */ USB_HID_RPT_2_SIZE_MSB,
/*********************************************************************
* Endpoint Descriptor
*********************************************************************/
/*  Endpoint Descriptor Length             */ 0x07u,
/*  DescriptorType: ENDPOINT               */ 0x05u,
/*  bEndpointAddress                       */ 0x83u,
/*  bmAttributes                           */ 0x03u,
/*  wMaxPacketSize                         */ 0x02u, 0x00u,
/*  bInterval                              */ 0x0Au
};

/*********************************************************************
* String Descriptor Table
*********************************************************************/
const uint8 CYCODE USB_STRING_DESCRIPTORS[169u] = {
/*********************************************************************
* Language ID Descriptor
*********************************************************************/
/* Descriptor Length                       */ 0x04u,
/* DescriptorType: STRING                  */ 0x03u,
/* Language Id                             */ 0x09u, 0x04u,
/*********************************************************************
* String Descriptor: "Test USB keyboard"
*********************************************************************/
/* Descriptor Length                       */ 0x24u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'T', 0u,(uint8)'e', 0u,(uint8)'s', 0u,(uint8)'t', 0u,(uint8)' ', 0u,
 (uint8)'U', 0u,(uint8)'S', 0u,(uint8)'B', 0u,(uint8)' ', 0u,(uint8)'k', 0u,
 (uint8)'e', 0u,(uint8)'y', 0u,(uint8)'b', 0u,(uint8)'o', 0u,(uint8)'a', 0u,
 (uint8)'r', 0u,(uint8)'d', 0u,
/*********************************************************************
* String Descriptor: "DMA Labs"
*********************************************************************/
/* Descriptor Length                       */ 0x12u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'D', 0u,(uint8)'M', 0u,(uint8)'A', 0u,(uint8)' ', 0u,(uint8)'L', 0u,
 (uint8)'a', 0u,(uint8)'b', 0u,(uint8)'s', 0u,
/*********************************************************************
* String Descriptor: "Extra Keys"
*********************************************************************/
/* Descriptor Length                       */ 0x16u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'E', 0u,(uint8)'x', 0u,(uint8)'t', 0u,(uint8)'r', 0u,(uint8)'a', 0u,
 (uint8)' ', 0u,(uint8)'K', 0u,(uint8)'e', 0u,(uint8)'y', 0u,(uint8)'s', 0u,
/*********************************************************************
* String Descriptor: "Console"
*********************************************************************/
/* Descriptor Length                       */ 0x10u,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'C', 0u,(uint8)'o', 0u,(uint8)'n', 0u,(uint8)'s', 0u,(uint8)'o', 0u,
 (uint8)'l', 0u,(uint8)'e', 0u,
/*********************************************************************
* String Descriptor: "CommonSense prototype"
*********************************************************************/
/* Descriptor Length                       */ 0x2Cu,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'C', 0u,(uint8)'o', 0u,(uint8)'m', 0u,(uint8)'m', 0u,(uint8)'o', 0u,
 (uint8)'n', 0u,(uint8)'S', 0u,(uint8)'e', 0u,(uint8)'n', 0u,(uint8)'s', 0u,
 (uint8)'e', 0u,(uint8)' ', 0u,(uint8)'p', 0u,(uint8)'r', 0u,(uint8)'o', 0u,
 (uint8)'t', 0u,(uint8)'o', 0u,(uint8)'t', 0u,(uint8)'y', 0u,(uint8)'p', 0u,
 (uint8)'e', 0u,
/*********************************************************************
* String Descriptor: "Boot keyboard"
*********************************************************************/
/* Descriptor Length                       */ 0x1Cu,
/* DescriptorType: STRING                  */ 0x03u,
 (uint8)'B', 0u,(uint8)'o', 0u,(uint8)'o', 0u,(uint8)'t', 0u,(uint8)' ', 0u,
 (uint8)'k', 0u,(uint8)'e', 0u,(uint8)'y', 0u,(uint8)'b', 0u,(uint8)'o', 0u,
 (uint8)'a', 0u,(uint8)'r', 0u,(uint8)'d', 0u,
/*********************************************************************/
/* Marks the end of the list.              */ 0x00u};
/*********************************************************************/

/*********************************************************************
* Serial Number String Descriptor
*********************************************************************/
const uint8 CYCODE USB_SN_STRING_DESCRIPTOR[4] = {
/* Descriptor Length                       */ 0x04u,
/* DescriptorType: STRING                  */ 0x03u,
(uint8)'1', 0u
};

/*********************************************************************
* HID Report Descriptor: 6KRO keyboard w/leds
*********************************************************************/
const uint8 CYCODE USB_HIDREPORT_DESCRIPTOR1[69u] = {
/*  Descriptor Size (Not part of descriptor)*/ USB_HID_RPT_1_SIZE_LSB,
USB_HID_RPT_1_SIZE_MSB,
/* USAGE_PAGE                              */ 0x05u, 0x01u, 
/* USAGE                                   */ 0x09u, 0x06u, 
/* COLLECTION                              */ 0xA1u, 0x01u, 
/* REPORT_SIZE                             */ 0x75u, 0x01u, 
/* REPORT_COUNT                            */ 0x95u, 0x08u, 
/* USAGE_PAGE                              */ 0x05u, 0x07u, 
/* USAGE_MINIMUM                           */ 0x19u, 0xE0u, 
/* USAGE_MAXIMUM                           */ 0x29u, 0xE7u, 
/* LOGICAL_MINIMUM                         */ 0x15u, 0x00u, 
/* LOGICAL_MAXIMUM                         */ 0x25u, 0x01u, 
/* INPUT                                   */ 0x81u, 0x02u, 
/* REPORT_COUNT                            */ 0x95u, 0x01u, 
/* REPORT_SIZE                             */ 0x75u, 0x08u, 
/* INPUT                                   */ 0x81u, 0x01u, 
/* REPORT_COUNT                            */ 0x95u, 0x05u, 
/* REPORT_SIZE                             */ 0x75u, 0x01u, 
/* USAGE_PAGE                              */ 0x05u, 0x08u, 
/* USAGE_MINIMUM                           */ 0x19u, 0x01u, 
/* USAGE_MAXIMUM                           */ 0x29u, 0x05u, 
/* OUTPUT                                  */ 0x91u, 0x02u, 
/* REPORT_COUNT                            */ 0x95u, 0x01u, 
/* REPORT_SIZE                             */ 0x75u, 0x03u, 
/* OUTPUT                                  */ 0x91u, 0x01u, 
/* REPORT_COUNT                            */ 0x95u, 0x06u, 
/* REPORT_SIZE                             */ 0x75u, 0x08u, 
/* USAGE_PAGE                              */ 0x05u, 0x07u, 
/* LOGICAL_MINIMUM                         */ 0x15u, 0x00u, 
/* LOGICAL_MAXIMUM                         */ 0x26u, 0xFFu, 0x00u, 
/* USAGE_MINIMUM                           */ 0x19u, 0x00u, 
/* USAGE_MAXIMUM                           */ 0x2Au, 0xFFu, 0x00u, 
/* INPUT                                   */ 0x81u, 0x00u, 
/* END_COLLECTION                          */ 0xC0u, 
/*********************************************************************/
/* End of the HID Report Descriptor        */ 0x00u, 0x00u};
/*********************************************************************/
/*********************************************************************
* HID Report Descriptor: ExtraKeys
*********************************************************************/
const uint8 CYCODE USB_HIDREPORT_DESCRIPTOR2[48u] = {
/*  Descriptor Size (Not part of descriptor)*/ USB_HID_RPT_2_SIZE_LSB,
USB_HID_RPT_2_SIZE_MSB,
/* USAGE_PAGE                              */ 0x05u, 0x01u, 
/* USAGE                                   */ 0x09u, 0x80u, 
/* COLLECTION                              */ 0xA1u, 0x01u, 
/* REPORT_ID                               */ 0x85u, 0x02u, 
/* LOGICAL_MINIMUM                         */ 0x15u, 0x01u, 
/* LOGICAL_MAXIMUM                         */ 0x25u, 0xB7u, 
/* USAGE_MINIMUM                           */ 0x19u, 0x01u, 
/* USAGE_MAXIMUM                           */ 0x29u, 0xA9u, 
/* REPORT_SIZE                             */ 0x75u, 0x10u, 
/* REPORT_COUNT                            */ 0x95u, 0x01u, 
/* INPUT                                   */ 0x81u, 0x00u, 
/* END_COLLECTION                          */ 0xC0u, 
/* COLLECTION                              */ 0xA1u, 0x01u, 
/* REPORT_ID                               */ 0x85u, 0x03u, 
/* LOGICAL_MINIMUM                         */ 0x15u, 0x01u, 
/* LOGICAL_MAXIMUM                         */ 0x26u, 0x9Cu, 0x02u, 
/* USAGE_MINIMUM                           */ 0x19u, 0x01u, 
/* USAGE_MAXIMUM                           */ 0x2Au, 0x9Cu, 0x02u, 
/* REPORT_SIZE                             */ 0x75u, 0x10u, 
/* REPORT_COUNT                            */ 0x95u, 0x01u, 
/* INPUT                                   */ 0x81u, 0x00u, 
/* END_COLLECTION                          */ 0xC0u, 
/*********************************************************************/
/* End of the HID Report Descriptor        */ 0x00u, 0x00u};
/*********************************************************************/
/*********************************************************************
* HID Report Descriptor: Console
*********************************************************************/
const uint8 CYCODE USB_HIDREPORT_DESCRIPTOR3[38u] = {
/*  Descriptor Size (Not part of descriptor)*/ USB_HID_RPT_3_SIZE_LSB,
USB_HID_RPT_3_SIZE_MSB,
/* USAGE_PAGE                              */ 0x06u, 0x31u, 0xFFu, 
/* USAGE                                   */ 0x09u, 0x74u, 
/* COLLECTION                              */ 0xA1u, 0x53u, 
/* REPORT_SIZE                             */ 0x75u, 0x08u, 
/* LOGICAL_MINIMUM                         */ 0x15u, 0x00u, 
/* LOGICAL_MAXIMUM                         */ 0x26u, 0xFFu, 0x00u, 
/* REPORT_COUNT                            */ 0x95u, 0x40u, 
/* USAGE                                   */ 0x09u, 0x75u, 
/* INPUT                                   */ 0x81u, 0x02u, 
/* REPORT_COUNT                            */ 0x95u, 0x40u, 
/* REPORT_SIZE                             */ 0x75u, 0x08u, 
/* LOGICAL_MINIMUM                         */ 0x15u, 0x00u, 
/* LOGICAL_MAXIMUM                         */ 0x26u, 0xFFu, 0x00u, 
/* USAGE                                   */ 0x09u, 0x75u, 
/* OUTPUT                                  */ 0x91u, 0x02u, 
/* END_COLLECTION                          */ 0xC0u, 
/*********************************************************************/
/* End of the HID Report Descriptor        */ 0x00u, 0x00u};
/*********************************************************************/

#if !defined(USER_DEFINE_USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_HID_RPT_STORAGE)
/*********************************************************************
* HID Input Report Storage
*********************************************************************/
T_USB_XFER_STATUS_BLOCK USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_IN_RPT_SCB;
uint8 USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_IN_BUF[
            USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_IN_BUF_SIZE];

/*********************************************************************
* HID Input Report TD Table
*********************************************************************/
const T_USB_TD CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_IN_RPT_TABLE[1u] = {
    {USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_IN_BUF_SIZE,
    &USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_IN_BUF[0u],
    &USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_IN_RPT_SCB},
};
/*********************************************************************
* HID Output Report Storage
*********************************************************************/
T_USB_XFER_STATUS_BLOCK USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_OUT_RPT_SCB;
uint8 USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_OUT_BUF[
            USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_OUT_BUF_SIZE];

/*********************************************************************
* HID Output Report TD Table
*********************************************************************/
const T_USB_TD CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_OUT_RPT_TABLE[1u] = {
    {USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_OUT_BUF_SIZE,
    &USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_OUT_BUF[0u],
    &USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_OUT_RPT_SCB},
};
/*********************************************************************
* HID Report Look Up Table         This table has four entries:
*                                        IN Report Table
*                                        OUT Report Table
*                                        Feature Report Table
*                                        HID Report Descriptor
*                                        HID Class Descriptor
*********************************************************************/
const T_USB_LUT CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_TABLE[5u] = {
    {0x00u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_IN_RPT_TABLE},
    {0x00u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_OUT_RPT_TABLE},
    {0x00u,    NULL},
    {0x01u,     (const void *)&USB_HIDREPORT_DESCRIPTOR1[0]},
    {0x01u,     (const void *)&USB_DEVICE0_CONFIGURATION0_DESCR[18]}
};
#endif /* USER_DEFINE_USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_HID_RPT_STORAGE */
#if !defined(USER_DEFINE_USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_HID_RPT_STORAGE)
/*********************************************************************
* HID Input Report Storage
*********************************************************************/
T_USB_XFER_STATUS_BLOCK USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_IN_RPT_SCB;
uint8 USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_IN_BUF[
            USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_IN_BUF_SIZE];

/*********************************************************************
* HID Input Report TD Table
*********************************************************************/
const T_USB_TD CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_IN_RPT_TABLE[1u] = {
    {USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_IN_BUF_SIZE,
    &USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_IN_BUF[0u],
    &USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_IN_RPT_SCB},
};
/*********************************************************************
* HID Output Report Storage
*********************************************************************/
T_USB_XFER_STATUS_BLOCK USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_OUT_RPT_SCB;
uint8 USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_OUT_BUF[
            USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_OUT_BUF_SIZE];

/*********************************************************************
* HID Output Report TD Table
*********************************************************************/
const T_USB_TD CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_OUT_RPT_TABLE[1u] = {
    {USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_OUT_BUF_SIZE,
    &USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_OUT_BUF[0u],
    &USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_OUT_RPT_SCB},
};
/*********************************************************************
* HID Report Look Up Table         This table has four entries:
*                                        IN Report Table
*                                        OUT Report Table
*                                        Feature Report Table
*                                        HID Report Descriptor
*                                        HID Class Descriptor
*********************************************************************/
const T_USB_LUT CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_TABLE[5u] = {
    {0x00u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_IN_RPT_TABLE},
    {0x00u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_OUT_RPT_TABLE},
    {0x00u,    NULL},
    {0x01u,     (const void *)&USB_HIDREPORT_DESCRIPTOR3[0]},
    {0x01u,     (const void *)&USB_DEVICE0_CONFIGURATION0_DESCR[50]}
};
#endif /* USER_DEFINE_USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_HID_RPT_STORAGE */
#if !defined(USER_DEFINE_USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_HID_RPT_STORAGE)
/*********************************************************************
* HID Input Report Storage
*********************************************************************/
T_USB_XFER_STATUS_BLOCK USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_RPT_SCB_ID2;
uint8 USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_BUF_ID2[
            USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_BUF_SIZE_ID2];

T_USB_XFER_STATUS_BLOCK USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_RPT_SCB_ID3;
uint8 USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_BUF_ID3[
            USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_BUF_SIZE_ID3];

/*********************************************************************
* HID Input Report TD Table
*********************************************************************/
const T_USB_TD CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_RPT_TABLE[4u] = {
    {0x00u,
    NULL,
    NULL},
    {0x00u,
    NULL,
    NULL},
    {USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_BUF_SIZE_ID2,
    &USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_BUF_ID2[0u],
    &USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_RPT_SCB_ID2},
    {USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_BUF_SIZE_ID3,
    &USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_BUF_ID3[0u],
    &USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_RPT_SCB_ID3},
};
/*********************************************************************
* HID Report Look Up Table         This table has four entries:
*                                        IN Report Table
*                                        OUT Report Table
*                                        Feature Report Table
*                                        HID Report Descriptor
*                                        HID Class Descriptor
*********************************************************************/
const T_USB_LUT CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_TABLE[5u] = {
    {0x03u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_IN_RPT_TABLE},
    {0x00u,    NULL},
    {0x00u,    NULL},
    {0x01u,     (const void *)&USB_HIDREPORT_DESCRIPTOR2[0]},
    {0x01u,     (const void *)&USB_DEVICE0_CONFIGURATION0_DESCR[82]}
};
#endif /* USER_DEFINE_USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_HID_RPT_STORAGE */

/*********************************************************************
* Interface Dispatch Table -- Points to the Class Dispatch Tables
*********************************************************************/
const T_USB_LUT CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE0_TABLE[1u] = {
    {USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_COUNT, 
    &USB_DEVICE0_CONFIGURATION0_INTERFACE0_ALTERNATE0_HID_TABLE}
};
/*********************************************************************
* Interface Dispatch Table -- Points to the Class Dispatch Tables
*********************************************************************/
const T_USB_LUT CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE1_TABLE[1u] = {
    {USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_COUNT, 
    &USB_DEVICE0_CONFIGURATION0_INTERFACE1_ALTERNATE0_HID_TABLE}
};
/*********************************************************************
* Interface Dispatch Table -- Points to the Class Dispatch Tables
*********************************************************************/
const T_USB_LUT CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE2_TABLE[1u] = {
    {USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_COUNT, 
    &USB_DEVICE0_CONFIGURATION0_INTERFACE2_ALTERNATE0_HID_TABLE}
};
/*********************************************************************
* Endpoint Setting Table -- This table contain the endpoint setting
*                           for each endpoint in the configuration. It
*                           contains the necessary information to
*                           configure the endpoint hardware for each
*                           interface and alternate setting.
*********************************************************************/
const T_USB_EP_SETTINGS_BLOCK CYCODE USB_DEVICE0_CONFIGURATION0_EP_SETTINGS_TABLE[5u] = {
/* IFC  ALT    EPAddr bmAttr MaxPktSize Class ********************/
{0x00u, 0x00u, 0x81u, 0x03u, 0x0008u,   0x03u},
{0x00u, 0x00u, 0x08u, 0x03u, 0x0008u,   0x03u},
{0x01u, 0x00u, 0x82u, 0x03u, 0x0040u,   0x03u},
{0x01u, 0x00u, 0x08u, 0x03u, 0x0040u,   0x03u},
{0x02u, 0x00u, 0x83u, 0x03u, 0x0002u,   0x03u}
};
const uint8 CYCODE USB_DEVICE0_CONFIGURATION0_INTERFACE_CLASS[3u] = {
0x03u, 0x03u, 0x03u
};
/*********************************************************************
* Config Dispatch Table -- Points to the Config Descriptor and each of
*                          and endpoint setup table and to each
*                          interface table if it specifies a USB Class
*********************************************************************/
const T_USB_LUT CYCODE USB_DEVICE0_CONFIGURATION0_TABLE[6u] = {
    {0x01u,     &USB_DEVICE0_CONFIGURATION0_DESCR},
    {0x05u,     &USB_DEVICE0_CONFIGURATION0_EP_SETTINGS_TABLE},
    {0x01u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE0_TABLE},
    {0x01u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE1_TABLE},
    {0x01u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE2_TABLE},
    {0x00u,     &USB_DEVICE0_CONFIGURATION0_INTERFACE_CLASS}
};
/*********************************************************************
* Device Dispatch Table -- Points to the Device Descriptor and each of
*                          and Configuration Tables for this Device 
*********************************************************************/
const T_USB_LUT CYCODE USB_DEVICE0_TABLE[3u] = {
    {0x01u,     &USB_DEVICE0_DESCR},
    {0x00u,    NULL},
    {0x01u,     &USB_DEVICE0_CONFIGURATION0_TABLE}
};
/*********************************************************************
* Device Table -- Indexed by the device number.
*********************************************************************/
const T_USB_LUT CYCODE USB_TABLE[1u] = {
    {0x01u,     &USB_DEVICE0_TABLE}
};

#endif /* USER_SUPPLIED_DESCRIPTORS */

#if defined(USB_ENABLE_MSOS_STRING)

    /******************************************************************************
    *  USB Microsoft OS String Descriptor
    *  "MSFT" identifies a Microsoft host
    *  "100" specifies version 1.00
    *  USB_GET_EXTENDED_CONFIG_DESCRIPTOR becomes the bRequest value
    *  in a host vendor device/class request
    ******************************************************************************/

    const uint8 CYCODE USB_MSOS_DESCRIPTOR[USB_MSOS_DESCRIPTOR_LENGTH] = {
    /* Descriptor Length                       */   0x12u,
    /* DescriptorType: STRING                  */   0x03u,
    /* qwSignature - "MSFT100"                 */   (uint8)'M', 0u, (uint8)'S', 0u, (uint8)'F', 0u, (uint8)'T', 0u,
                                                    (uint8)'1', 0u, (uint8)'0', 0u, (uint8)'0', 0u,
    /* bMS_VendorCode:                         */   USB_GET_EXTENDED_CONFIG_DESCRIPTOR,
    /* bPad                                    */   0x00u
    };

    /* Extended Configuration Descriptor */

    const uint8 CYCODE USB_MSOS_CONFIGURATION_DESCR[USB_MSOS_CONF_DESCR_LENGTH] = {
    /*  Length of the descriptor 4 bytes       */   0x28u, 0x00u, 0x00u, 0x00u,
    /*  Version of the descriptor 2 bytes      */   0x00u, 0x01u,
    /*  wIndex - Fixed:INDEX_CONFIG_DESCRIPTOR */   0x04u, 0x00u,
    /*  bCount - Count of device functions.    */   0x01u,
    /*  Reserved : 7 bytes                     */   0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u,
    /*  bFirstInterfaceNumber                  */   0x00u,
    /*  Reserved                               */   0x01u,
    /*  compatibleID    - "CYUSB\0\0"          */   (uint8)'C', (uint8)'Y', (uint8)'U', (uint8)'S', (uint8)'B',
                                                    0x00u, 0x00u, 0x00u,
    /*  subcompatibleID - "00001\0\0"          */   (uint8)'0', (uint8)'0', (uint8)'0', (uint8)'0', (uint8)'1',
                                                    0x00u, 0x00u, 0x00u,
    /*  Reserved : 6 bytes                     */   0x00u, 0x00u, 0x00u, 0x00u, 0x00u, 0x00u
    };

#endif /* USB_ENABLE_MSOS_STRING */

/* DIE ID string descriptor for 8 bytes ID */
#if defined(USB_ENABLE_IDSN_STRING)
    uint8 USB_idSerialNumberStringDescriptor[USB_IDSN_DESCR_LENGTH];
#endif /* USB_ENABLE_IDSN_STRING */


/* [] END OF FILE */
