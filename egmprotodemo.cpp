#include "egmprotodemo.h"
#include "ui_egmprotodemo.h"
#include <QDateTime>
#include <QHostAddress>

#pragma execution_character_set("utf-8")
static uint SN = 0;

EgmProtoDemo::EgmProtoDemo(QWidget *parent)
    : QWidget(parent)
    , ui(new Ui::EgmProtoDemo)
{
    ui->setupUi(this);
    m_udp1 = new QUdpSocket();
    m_udp2 = new QUdpSocket();
    connect(this, &EgmProtoDemo::appendUdpLog1, this, &EgmProtoDemo::onAppendUdpLog1);
    connect(this, &EgmProtoDemo::appendUdpLog2, this, &EgmProtoDemo::onAppendUdpLog2);
    connect(m_udp1, &QUdpSocket::readyRead, this, &EgmProtoDemo::onUdp1ReadPendingData);
    connect(m_udp2, &QUdpSocket::readyRead, this, &EgmProtoDemo::onUdp2ReadPendingData);
}

EgmProtoDemo::~EgmProtoDemo()
{
    delete ui;
    m_udp1->deleteLater();
    m_udp2->deleteLater();
}


void EgmProtoDemo::onAppendUdpLog1(const QString &log)
{
    if(log.isEmpty())
    {
        return;
    }
    else
    {
        ui->UdpLog1->appendPlainText(log);
        ui->UdpLog1->moveCursor(QTextCursor::End);
    }
}

void EgmProtoDemo::onAppendUdpLog2(const QString &log)
{
    if(log.isEmpty())
    {
        return;
    }
    else
    {
        ui->UdpLog2->appendPlainText(log);
        ui->UdpLog2->moveCursor(QTextCursor::End);
    }
}

void EgmProtoDemo::onUdp1ReadPendingData()
{
    emit appendUdpLog1("�յ�����:");
    // ��ȡ����
    QByteArray buff;
    buff.resize(m_udp1->pendingDatagramSize());
    QHostAddress remoteAddr;
    quint16 remotePort;
    auto ok = m_udp1->readDatagram(buff.data(), buff.size(), &remoteAddr, &remotePort);
    if(ok < 0)
    {
        emit appendUdpLog1("����Ϊ��!");
        return;
    }
    else
    {
        ui->leRemoteIP1->setText(remoteAddr.toString());
        ui->leRemotePort1->setText(QString::number(remotePort));
        emit appendUdpLog1(buff.toHex());
    }
    // ��������
    EgmRobot egmRobot;
    if(!egmRobot.ParseFromString(buff.toStdString()))
    {
        emit appendUdpLog1("��������ʧ��!");
    }
    else
    {
        // TODO:��ӡ��Ϣ
        emit appendUdpLog1("�������ݳɹ�!");
        // TODO:��������
        auto sqeNo = egmRobot.header().seqno();
        auto tm = egmRobot.header().tm();
        auto type = egmRobot.header().mtype();
        // ��ӡ������������Ϣ
        QString egmInfo = QString("SqeNo:%1,Tm:%2,Type:%3").arg(sqeNo).arg(tm).arg(type);
        emit appendUdpLog1(egmInfo);
    }
}

void EgmProtoDemo::onUdp2ReadPendingData()
{
    emit appendUdpLog2("�յ�����:");
    // ��ȡ����
    QByteArray buff;
    buff.resize(m_udp2->pendingDatagramSize());
    QHostAddress remoteAddr;
    quint16 remotePort;
    auto ok = m_udp2->readDatagram(buff.data(), buff.size(), &remoteAddr, &remotePort);
    if(ok < 0)
    {
        emit appendUdpLog2("����Ϊ��!");
        return;
    }
    else
    {
        ui->leRemoteIP2->setText(remoteAddr.toString());
        ui->leRemotePort2->setText(QString::number(remotePort));
        emit appendUdpLog2(buff.toHex());
    }
    // ��������
    EgmSensor egmSensor;
    if(!egmSensor.ParseFromString(buff.toStdString()))
    {
        emit appendUdpLog2("��������ʧ��!");
    }
    else
    {
        // TODO:��ӡ��Ϣ
        emit appendUdpLog2("�������ݳɹ�!");
        // TODO:��������
        auto sqeNo = egmSensor.header().seqno();
        auto tm = egmSensor.header().tm();
        auto type = egmSensor.header().mtype();
        // ��ӡ������������Ϣ
        QString egmInfo = QString("SqeNo:%1,Tm:%2,Type:%3").arg(sqeNo).arg(tm).arg(type);
        emit appendUdpLog2(egmInfo);
    }
}

void EgmProtoDemo::createEgmSensorMsg(EgmSensor *sensorMsg)
{
    EgmHeader *header = new EgmHeader();
    header->set_mtype(EgmHeader_MessageType_MSGTYPE_CORRECTION);
    header->set_seqno(SN++);
    header->set_tm(QDateTime::currentDateTime().toMSecsSinceEpoch());
    sensorMsg->set_allocated_header(header);
    EgmCartesian *pc = new EgmCartesian();
    pc->set_x(1.1);
    pc->set_y(2.2);
    pc->set_z(3.3);
    EgmQuaternion *pq = new EgmQuaternion();
    pq->set_u0(1.0);
    pq->set_u1(2.0);
    pq->set_u2(3.0);
    pq->set_u3(4.0);
    EgmPose *pcartesian = new EgmPose();
    pcartesian->set_allocated_orient(pq);
    pcartesian->set_allocated_pos(pc);
    EgmPlanned *planned = new EgmPlanned();
    planned->set_allocated_cartesian(pcartesian);
    sensorMsg->set_allocated_planned(planned);
}

void EgmProtoDemo::createEgmRobotMsg(EgmRobot *robotMsg)
{
    // ��Ϣͷ
    EgmHeader *header = new EgmHeader();
    header->set_mtype(EgmHeader_MessageType::EgmHeader_MessageType_MSGTYPE_UNDEFINED);
    header->set_seqno(SN++);
    header->set_tm(QDateTime::currentDateTime().toMSecsSinceEpoch());
    EgmCartesian *pc = new EgmCartesian();
    pc->set_x(1.5);
    pc->set_y(2.5);
    pc->set_z(3.5);
    EgmQuaternion *pq = new EgmQuaternion();
    pq->set_u0(1.5);
    pq->set_u1(2.5);
    pq->set_u2(3.5);
    pq->set_u3(4.5);
    EgmPose *pcartesian = new EgmPose();
    pcartesian->set_allocated_orient(pq);
    pcartesian->set_allocated_pos(pc);
    // Ŀ��λ��
    EgmPlanned *planned = new EgmPlanned();
    planned->set_allocated_cartesian(pcartesian);
    // ��ǰλ��
    EgmFeedBack *feedback = new EgmFeedBack();
    feedback->set_allocated_cartesian(pcartesian);
    // ����ͷ��Ϣ
    robotMsg->set_allocated_header(header);
    // ���õ�ǰλ��
    robotMsg->set_allocated_feedback(feedback);
    // ����Ŀ��λ��
    robotMsg->set_allocated_planned(planned);
}


void EgmProtoDemo::on_btnUdpUnbind1_clicked()
{
    m_udp1->abort();
    emit appendUdpLog1(QString("���˿�"));
}


void EgmProtoDemo::on_btnUdpBind1_clicked()
{
    auto port = ui->leUdpPort1->text().toInt();
    auto ok = m_udp1->bind(QHostAddress::Any, port);
    if(ok)
    {
        emit appendUdpLog1(QString("�󶨳ɹ�"));
    }
    else
    {
        auto log = QString("��ʧ��:") + m_udp1->errorString();
        emit appendUdpLog1(log);
    }
}


void EgmProtoDemo::on_btnSendUdp1_clicked()
{
    auto data = ui->UdpSendData1->toPlainText();
    // TODO:��������
    if(!m_udp1->isValid())
    {
        emit appendUdpLog1(QString("UDP����״̬�쳣!"));
        return;
    }
    else
    {
        auto ip = ui->leRemoteIP1->text().trimmed();
        auto port = ui->leRemotePort1->text().toInt();
        auto ok = m_udp1->writeDatagram(QByteArray::fromHex(data.toLocal8Bit()), QHostAddress(ip), port);
        if(ok > 0)
        {
            emit appendUdpLog1(QString("���ͳɹ�!"));
        }
        else
        {
            emit appendUdpLog1(QString("����ʧ��:%1").arg(m_udp1->errorString()));
        }
    }
}


void EgmProtoDemo::on_btnUdpUnbind2_clicked()
{
    m_udp2->abort();
    emit appendUdpLog2(QString("���˿�"));
}


void EgmProtoDemo::on_btnUdpBind2_clicked()
{
    auto port = ui->leUdpPort2->text().toInt();
    auto ok = m_udp2->bind(QHostAddress::Any, port);
    if(ok)
    {
        emit appendUdpLog2(QString("�󶨳ɹ�"));
    }
    else
    {
        auto log = QString("��ʧ��:") + m_udp2->errorString();
        emit appendUdpLog2(log);
    }
}


void EgmProtoDemo::on_btnSendUdp2_clicked()
{
    auto data = ui->UdpSendData2->toPlainText();
    // TODO:��������
    if(!m_udp2->isValid())
    {
        emit appendUdpLog2(QString("UDP����״̬�쳣!"));
        return;
    }
    else
    {
        auto ip = ui->leRemoteIP2->text().trimmed();
        auto port = ui->leRemotePort2->text().toInt();
        auto ok = m_udp2->writeDatagram(QByteArray::fromHex(data.toLocal8Bit()), QHostAddress(ip), port);
        if(ok > 0)
        {
            emit appendUdpLog2(QString("���ͳɹ�!"));
        }
        else
        {
            emit appendUdpLog2(QString("����ʧ��:%1").arg(m_udp2->errorString()));
        }
    }
}


void EgmProtoDemo::on_btnSendUdp1EgmData_clicked()
{
    if(!m_udp1->isValid())
    {
        emit appendUdpLog1(QString("UDP����״̬�쳣!"));
        return;
    }
    emit appendUdpLog1(QString("����EgmSensor����"));
    // ��������
    auto egmSensor = new EgmSensor();
    createEgmSensorMsg(egmSensor);
    auto data = egmSensor->SerializeAsString();
    auto ip = ui->leRemoteIP1->text().trimmed();
    auto port = ui->leRemotePort1->text().toInt();
    // ��������
    auto ok = m_udp1->writeDatagram(QByteArray::fromStdString(data), QHostAddress(ip), port);
    if(ok > 0)
    {
        emit appendUdpLog1(QString("���ͳɹ�!"));
    }
    else
    {
        emit appendUdpLog1(QString("����ʧ��:%1").arg(m_udp1->errorString()));
    }
}


void EgmProtoDemo::on_btnSendUdp2EgmData_clicked()
{
    if(!m_udp2->isValid())
    {
        emit appendUdpLog2(QString("UDP����״̬�쳣!"));
        return;
    }
    emit appendUdpLog2(QString("����EgmRobot����"));
    auto egmRobot = new EgmRobot();
    createEgmRobotMsg(egmRobot);
    auto data = egmRobot->SerializeAsString();
    auto ip = ui->leRemoteIP2->text().trimmed();
    auto port = ui->leRemotePort2->text().toInt();
    // ��������
    auto ok = m_udp2->writeDatagram(QByteArray::fromStdString(data), QHostAddress(ip), port);
    if(ok > 0)
    {
        emit appendUdpLog2(QString("���ͳɹ�!"));
    }
    else
    {
        emit appendUdpLog2(QString("����ʧ��:%1").arg(m_udp2->errorString()));
    }
}

