#include "egmprotodemo.h"

#include <QApplication>
#include <QTextCodec>
#pragma execution_character_set("utf-8")

int main(int argc, char *argv[])
{
    QApplication a(argc, argv);
    // 设置编码
    QTextCodec *codec = QTextCodec::codecForName("utf-8");
    QTextCodec::setCodecForLocale(codec);
    // 设置程序默认字体
    a.setFont(QFont("黑体", 12));
    EgmProtoDemo w;
    w.show();
    return a.exec();
}
