#include "LogViewer.h"

#include <QMessageBox>
#include "Events.h"

LogViewer::LogViewer(QWidget *parent):
    QPlainTextEdit(parent)
{
    this->setReadOnly(true);
}

bool LogViewer::event(DeviceMessage* e)
{
    if (e->type() == DeviceMessage::ET) {
 //       this->appendPlainText(e->getPayload()->constData());
        return true;
    }
    return false;
}

void LogViewer::logMessage(QString msg)
{
    this->appendPlainText(msg);
//    this->appendPlainText("\n");
}

void LogViewer::clearButtonClick(void)
{
    QMessageBox::StandardButton result = QMessageBox::question(this,
            "Erase current logs",
            "Irreversibly! Ain't it a great thing to do?",
            QMessageBox::Yes | QMessageBox::No);

    if (result == QMessageBox::Yes)
    {
        this->clear();

    }
}
void LogViewer::copyAllButtonClick(void)
{
    this->selectAll();
    this->copy();
    QTextCursor cur = this->textCursor();
    cur.movePosition(cur.End);
    this->setTextCursor(cur);
}

//void LogViewer::