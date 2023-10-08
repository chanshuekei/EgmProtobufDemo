#include "egmprotodemo.h"

#include <QApplication>
#include <QTextCodec>
#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // ���ñ���
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForLocale(codec);
    // ���ó���Ĭ������
    a.setFont(QFont("����", 12));
    EgmProtoDemo w;
    w.show();
    return a.exec();
}
