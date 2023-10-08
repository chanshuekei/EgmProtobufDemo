/********************************************************************************
** Form generated from reading UI file 'egmprotodemo.ui'
**
** Created by: Qt User Interface Compiler version 5.15.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_EGMPROTODEMO_H
#define UI_EGMPROTODEMO_H

#include <QtCore/QVariant>
#include <QtWidgets/QApplication>
#include <QtWidgets/QFrame>
#include <QtWidgets/QGroupBox>
#include <QtWidgets/QHBoxLayout>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPlainTextEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpacerItem>
#include <QtWidgets/QVBoxLayout>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_EgmProtoDemo
{
public:
    QHBoxLayout *horizontalLayout;
    QGroupBox *groupBox;
    QVBoxLayout *verticalLayout_2;
    QHBoxLayout *horizontalLayout_7;
    QLabel *label;
    QLineEdit *leUdpPort1;
    QPushButton *btnUdpUnbind1;
    QPushButton *btnUdpBind1;
    QHBoxLayout *horizontalLayout_8;
    QLabel *label_2;
    QLineEdit *leRemoteIP1;
    QLabel *label_3;
    QLineEdit *leRemotePort1;
    QPlainTextEdit *UdpSendData1;
    QHBoxLayout *horizontalLayout_2;
    QSpacerItem *horizontalSpacer;
    QPushButton *btnSendUdp1EgmData;
    QPushButton *btnSendUdp1;
    QFrame *line;
    QPlainTextEdit *UdpLog1;
    QGroupBox *groupBox_2;
    QVBoxLayout *verticalLayout;
    QHBoxLayout *horizontalLayout_4;
    QLabel *label_9;
    QLineEdit *leUdpPort2;
    QPushButton *btnUdpUnbind2;
    QPushButton *btnUdpBind2;
    QHBoxLayout *horizontalLayout_5;
    QLabel *label_7;
    QLineEdit *leRemoteIP2;
    QLabel *label_8;
    QLineEdit *leRemotePort2;
    QPlainTextEdit *UdpSendData2;
    QHBoxLayout *horizontalLayout_3;
    QSpacerItem *horizontalSpacer_2;
    QPushButton *btnSendUdp2EgmData;
    QPushButton *btnSendUdp2;
    QFrame *line_3;
    QPlainTextEdit *UdpLog2;

    void setupUi(QWidget *EgmProtoDemo)
    {
        if (EgmProtoDemo->objectName().isEmpty())
            EgmProtoDemo->setObjectName(QString::fromUtf8("EgmProtoDemo"));
        EgmProtoDemo->resize(1024, 720);
        QFont font;
        font.setFamily(QString::fromUtf8("\351\273\221\344\275\223"));
        font.setPointSize(12);
        EgmProtoDemo->setFont(font);
        horizontalLayout = new QHBoxLayout(EgmProtoDemo);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        horizontalLayout->setContentsMargins(5, 5, 5, 5);
        groupBox = new QGroupBox(EgmProtoDemo);
        groupBox->setObjectName(QString::fromUtf8("groupBox"));
        groupBox->setFont(font);
        verticalLayout_2 = new QVBoxLayout(groupBox);
        verticalLayout_2->setSpacing(3);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        verticalLayout_2->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_7 = new QHBoxLayout();
        horizontalLayout_7->setObjectName(QString::fromUtf8("horizontalLayout_7"));
        label = new QLabel(groupBox);
        label->setObjectName(QString::fromUtf8("label"));

        horizontalLayout_7->addWidget(label);

        leUdpPort1 = new QLineEdit(groupBox);
        leUdpPort1->setObjectName(QString::fromUtf8("leUdpPort1"));
        leUdpPort1->setMinimumSize(QSize(0, 35));

        horizontalLayout_7->addWidget(leUdpPort1);

        btnUdpUnbind1 = new QPushButton(groupBox);
        btnUdpUnbind1->setObjectName(QString::fromUtf8("btnUdpUnbind1"));
        btnUdpUnbind1->setMinimumSize(QSize(120, 40));

        horizontalLayout_7->addWidget(btnUdpUnbind1);

        btnUdpBind1 = new QPushButton(groupBox);
        btnUdpBind1->setObjectName(QString::fromUtf8("btnUdpBind1"));
        btnUdpBind1->setMinimumSize(QSize(120, 40));

        horizontalLayout_7->addWidget(btnUdpBind1);


        verticalLayout_2->addLayout(horizontalLayout_7);

        horizontalLayout_8 = new QHBoxLayout();
        horizontalLayout_8->setObjectName(QString::fromUtf8("horizontalLayout_8"));
        label_2 = new QLabel(groupBox);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        horizontalLayout_8->addWidget(label_2);

        leRemoteIP1 = new QLineEdit(groupBox);
        leRemoteIP1->setObjectName(QString::fromUtf8("leRemoteIP1"));
        leRemoteIP1->setMinimumSize(QSize(0, 35));

        horizontalLayout_8->addWidget(leRemoteIP1);

        label_3 = new QLabel(groupBox);
        label_3->setObjectName(QString::fromUtf8("label_3"));

        horizontalLayout_8->addWidget(label_3);

        leRemotePort1 = new QLineEdit(groupBox);
        leRemotePort1->setObjectName(QString::fromUtf8("leRemotePort1"));

        horizontalLayout_8->addWidget(leRemotePort1);

        horizontalLayout_8->setStretch(1, 2);
        horizontalLayout_8->setStretch(3, 1);

        verticalLayout_2->addLayout(horizontalLayout_8);

        UdpSendData1 = new QPlainTextEdit(groupBox);
        UdpSendData1->setObjectName(QString::fromUtf8("UdpSendData1"));
        UdpSendData1->setReadOnly(true);

        verticalLayout_2->addWidget(UdpSendData1);

        horizontalLayout_2 = new QHBoxLayout();
        horizontalLayout_2->setObjectName(QString::fromUtf8("horizontalLayout_2"));
        horizontalSpacer = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_2->addItem(horizontalSpacer);

        btnSendUdp1EgmData = new QPushButton(groupBox);
        btnSendUdp1EgmData->setObjectName(QString::fromUtf8("btnSendUdp1EgmData"));
        btnSendUdp1EgmData->setMinimumSize(QSize(120, 40));

        horizontalLayout_2->addWidget(btnSendUdp1EgmData);

        btnSendUdp1 = new QPushButton(groupBox);
        btnSendUdp1->setObjectName(QString::fromUtf8("btnSendUdp1"));
        btnSendUdp1->setMinimumSize(QSize(120, 40));

        horizontalLayout_2->addWidget(btnSendUdp1);


        verticalLayout_2->addLayout(horizontalLayout_2);

        line = new QFrame(groupBox);
        line->setObjectName(QString::fromUtf8("line"));
        line->setFrameShape(QFrame::HLine);
        line->setFrameShadow(QFrame::Sunken);

        verticalLayout_2->addWidget(line);

        UdpLog1 = new QPlainTextEdit(groupBox);
        UdpLog1->setObjectName(QString::fromUtf8("UdpLog1"));
        UdpLog1->setReadOnly(true);

        verticalLayout_2->addWidget(UdpLog1);

        verticalLayout_2->setStretch(5, 1);

        horizontalLayout->addWidget(groupBox);

        groupBox_2 = new QGroupBox(EgmProtoDemo);
        groupBox_2->setObjectName(QString::fromUtf8("groupBox_2"));
        groupBox_2->setFont(font);
        verticalLayout = new QVBoxLayout(groupBox_2);
        verticalLayout->setSpacing(3);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setContentsMargins(5, 5, 5, 5);
        horizontalLayout_4 = new QHBoxLayout();
        horizontalLayout_4->setObjectName(QString::fromUtf8("horizontalLayout_4"));
        label_9 = new QLabel(groupBox_2);
        label_9->setObjectName(QString::fromUtf8("label_9"));

        horizontalLayout_4->addWidget(label_9);

        leUdpPort2 = new QLineEdit(groupBox_2);
        leUdpPort2->setObjectName(QString::fromUtf8("leUdpPort2"));
        leUdpPort2->setMinimumSize(QSize(0, 35));

        horizontalLayout_4->addWidget(leUdpPort2);

        btnUdpUnbind2 = new QPushButton(groupBox_2);
        btnUdpUnbind2->setObjectName(QString::fromUtf8("btnUdpUnbind2"));
        btnUdpUnbind2->setMinimumSize(QSize(120, 40));

        horizontalLayout_4->addWidget(btnUdpUnbind2);

        btnUdpBind2 = new QPushButton(groupBox_2);
        btnUdpBind2->setObjectName(QString::fromUtf8("btnUdpBind2"));
        btnUdpBind2->setMinimumSize(QSize(120, 40));

        horizontalLayout_4->addWidget(btnUdpBind2);


        verticalLayout->addLayout(horizontalLayout_4);

        horizontalLayout_5 = new QHBoxLayout();
        horizontalLayout_5->setObjectName(QString::fromUtf8("horizontalLayout_5"));
        label_7 = new QLabel(groupBox_2);
        label_7->setObjectName(QString::fromUtf8("label_7"));

        horizontalLayout_5->addWidget(label_7);

        leRemoteIP2 = new QLineEdit(groupBox_2);
        leRemoteIP2->setObjectName(QString::fromUtf8("leRemoteIP2"));
        leRemoteIP2->setMinimumSize(QSize(0, 35));

        horizontalLayout_5->addWidget(leRemoteIP2);

        label_8 = new QLabel(groupBox_2);
        label_8->setObjectName(QString::fromUtf8("label_8"));

        horizontalLayout_5->addWidget(label_8);

        leRemotePort2 = new QLineEdit(groupBox_2);
        leRemotePort2->setObjectName(QString::fromUtf8("leRemotePort2"));
        leRemotePort2->setMinimumSize(QSize(0, 35));

        horizontalLayout_5->addWidget(leRemotePort2);

        horizontalLayout_5->setStretch(1, 2);
        horizontalLayout_5->setStretch(3, 1);

        verticalLayout->addLayout(horizontalLayout_5);

        UdpSendData2 = new QPlainTextEdit(groupBox_2);
        UdpSendData2->setObjectName(QString::fromUtf8("UdpSendData2"));
        UdpSendData2->setReadOnly(true);

        verticalLayout->addWidget(UdpSendData2);

        horizontalLayout_3 = new QHBoxLayout();
        horizontalLayout_3->setObjectName(QString::fromUtf8("horizontalLayout_3"));
        horizontalSpacer_2 = new QSpacerItem(40, 20, QSizePolicy::Expanding, QSizePolicy::Minimum);

        horizontalLayout_3->addItem(horizontalSpacer_2);

        btnSendUdp2EgmData = new QPushButton(groupBox_2);
        btnSendUdp2EgmData->setObjectName(QString::fromUtf8("btnSendUdp2EgmData"));
        btnSendUdp2EgmData->setMinimumSize(QSize(120, 40));

        horizontalLayout_3->addWidget(btnSendUdp2EgmData);

        btnSendUdp2 = new QPushButton(groupBox_2);
        btnSendUdp2->setObjectName(QString::fromUtf8("btnSendUdp2"));
        btnSendUdp2->setMinimumSize(QSize(120, 40));

        horizontalLayout_3->addWidget(btnSendUdp2);


        verticalLayout->addLayout(horizontalLayout_3);

        line_3 = new QFrame(groupBox_2);
        line_3->setObjectName(QString::fromUtf8("line_3"));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);

        verticalLayout->addWidget(line_3);

        UdpLog2 = new QPlainTextEdit(groupBox_2);
        UdpLog2->setObjectName(QString::fromUtf8("UdpLog2"));
        UdpLog2->setReadOnly(true);

        verticalLayout->addWidget(UdpLog2);

        verticalLayout->setStretch(5, 1);

        horizontalLayout->addWidget(groupBox_2);

        horizontalLayout->setStretch(0, 1);
        horizontalLayout->setStretch(1, 1);

        retranslateUi(EgmProtoDemo);

        QMetaObject::connectSlotsByName(EgmProtoDemo);
    } // setupUi

    void retranslateUi(QWidget *EgmProtoDemo)
    {
        EgmProtoDemo->setWindowTitle(QCoreApplication::translate("EgmProtoDemo", "EgmProtoDemo", nullptr));
        groupBox->setTitle(QCoreApplication::translate("EgmProtoDemo", "UDP1", nullptr));
        label->setText(QCoreApplication::translate("EgmProtoDemo", "\346\234\254\345\234\260\347\253\257\345\217\243:", nullptr));
        leUdpPort1->setText(QCoreApplication::translate("EgmProtoDemo", "31414", nullptr));
        btnUdpUnbind1->setText(QCoreApplication::translate("EgmProtoDemo", "\347\273\221\345\256\232\347\253\257\345\217\243", nullptr));
        btnUdpBind1->setText(QCoreApplication::translate("EgmProtoDemo", "\347\273\221\345\256\232\347\253\257\345\217\243", nullptr));
        label_2->setText(QCoreApplication::translate("EgmProtoDemo", "\350\277\234\347\250\213IP:", nullptr));
        leRemoteIP1->setText(QCoreApplication::translate("EgmProtoDemo", "127.0.0.1", nullptr));
        label_3->setText(QCoreApplication::translate("EgmProtoDemo", "\350\277\234\347\250\213\347\253\257\345\217\243", nullptr));
        leRemotePort1->setText(QCoreApplication::translate("EgmProtoDemo", "31415", nullptr));
        UdpSendData1->setPlainText(QCoreApplication::translate("EgmProtoDemo", "0a09080010e990fb6e1803124512430a1b099a9999999999f13f119a99999999990140196666666666660a40122409000000000000f03f110000000000000040190000000000000840210000000000001040", nullptr));
        UdpSendData1->setPlaceholderText(QCoreApplication::translate("EgmProtoDemo", "\345\217\221\351\200\201\346\225\260\346\215\256(HEX):", nullptr));
        btnSendUdp1EgmData->setText(QCoreApplication::translate("EgmProtoDemo", "\345\217\221\351\200\201EgmSensor\346\225\260\346\215\256", nullptr));
        btnSendUdp1->setText(QCoreApplication::translate("EgmProtoDemo", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
        groupBox_2->setTitle(QCoreApplication::translate("EgmProtoDemo", "UDP2", nullptr));
        label_9->setText(QCoreApplication::translate("EgmProtoDemo", "\346\234\254\345\234\260\347\253\257\345\217\243:", nullptr));
        leUdpPort2->setText(QCoreApplication::translate("EgmProtoDemo", "31415", nullptr));
        btnUdpUnbind2->setText(QCoreApplication::translate("EgmProtoDemo", "\350\247\243\347\273\221\347\253\257\345\217\243", nullptr));
        btnUdpBind2->setText(QCoreApplication::translate("EgmProtoDemo", "\347\273\221\345\256\232\347\253\257\345\217\243", nullptr));
        label_7->setText(QCoreApplication::translate("EgmProtoDemo", "\350\277\234\347\250\213IP", nullptr));
        leRemoteIP2->setText(QCoreApplication::translate("EgmProtoDemo", "127.0.0.1", nullptr));
        label_8->setText(QCoreApplication::translate("EgmProtoDemo", "\350\277\234\347\250\213\347\253\257\345\217\243:", nullptr));
        leRemotePort2->setText(QCoreApplication::translate("EgmProtoDemo", "31414", nullptr));
        UdpSendData2->setPlainText(QCoreApplication::translate("EgmProtoDemo", "0a0908011083dcfb6e1800124512430a1b09000000000000f83f110000000000000440190000000000000c40122409000000000000f83f110000000000000440190000000000000c402100000000000012401a4512430a1b09000000000000f83f110000000000000440190000000000000c40122409000000000000f83f110000000000000440190000000000000c40210000000000001240", nullptr));
        UdpSendData2->setPlaceholderText(QCoreApplication::translate("EgmProtoDemo", "\345\217\221\351\200\201\346\225\260\346\215\256(HEX):", nullptr));
        btnSendUdp2EgmData->setText(QCoreApplication::translate("EgmProtoDemo", "\345\217\221\351\200\201EgmRobot\346\225\260\346\215\256", nullptr));
        btnSendUdp2->setText(QCoreApplication::translate("EgmProtoDemo", "\345\217\221\351\200\201\346\225\260\346\215\256", nullptr));
    } // retranslateUi

};

namespace Ui {
    class EgmProtoDemo: public Ui_EgmProtoDemo {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_EGMPROTODEMO_H
