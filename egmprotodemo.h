#ifndef EGMPROTODEMO_H
#define EGMPROTODEMO_H

#include <QWidget>
#include <QUdpSocket>

#include "egm.pb.h"
using namespace abb::egm;
#pragma comment(lib, "Ws2_32.lib")      // socket lib

#ifdef QT_DEBUG
    #pragma comment(lib, "./protobuf/lib/libprotobufd.lib") // protobuf lib
#else
    #pragma comment(lib, "./protobuf/lib/libprotobuf.lib") // protobuf lib
#endif
QT_BEGIN_NAMESPACE
namespace Ui { class EgmProtoDemo; }
QT_END_NAMESPACE

class EgmProtoDemo : public QWidget
{
    Q_OBJECT

public:
    EgmProtoDemo(QWidget *parent = nullptr);
    ~EgmProtoDemo();
signals:
    void appendUdpLog1(QString);
    void appendUdpLog2(QString);

public slots:
    void onAppendUdpLog1(const QString &log);
    void onAppendUdpLog2(const QString &log);
    void onUdp1ReadPendingData();
    void onUdp2ReadPendingData();
private:
    void createEgmSensorMsg(EgmSensor *sensorMsg);
    void createEgmRobotMsg(EgmRobot *robotMsg);
private slots:
    // udp1
    void on_btnUdpUnbind1_clicked();
    void on_btnUdpBind1_clicked();
    void on_btnSendUdp1_clicked();
    void on_btnSendUdp1EgmData_clicked();
    // udp2
    void on_btnUdpUnbind2_clicked();
    void on_btnUdpBind2_clicked();
    void on_btnSendUdp2_clicked();
    void on_btnSendUdp2EgmData_clicked();

private:
    Ui::EgmProtoDemo *ui;
    QUdpSocket *m_udp1{nullptr};
    QUdpSocket *m_udp2{nullptr};
};
#endif // EGMPROTODEMO_H
