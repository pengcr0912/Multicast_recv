#include "mymulticast.h"
#include <QMessageBox>

MyMulticast::MyMulticast(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	socket = new QUdpSocket;
	if (!socket->bind(QHostAddress::AnyIPv4, 8500, QAbstractSocket::ShareAddress))
		qDebug() << "bind failed--";
	if (!socket->joinMulticastGroup(QHostAddress("229.0.0.8")))
		qDebug() << "joinMuticastGroup failed--";
	socket->setSocketOption(QAbstractSocket::ReceiveBufferSizeSocketOption, 1024 * 1024 * 8); 
	//socket->setSocketOption(QAbstractSocket::MulticastLoopbackOption, 1);
	connect(socket, SIGNAL(readyRead()), this, SLOT(dataReceived()));
}

MyMulticast::~MyMulticast()
{
	delete socket;
}

void MyMulticast::dataReceived()
{
	qDebug() << "data receive succeed£¡";

	//QMessageBox::about(NULL,"warning","OK");
	QString str;
	while (socket->hasPendingDatagrams())
	{
		QByteArray datagram;		
		datagram.resize(socket->pendingDatagramSize());
		socket->readDatagram(datagram.data(), datagram.size());
		str = QString(datagram.toHex());
		//if (datagram.at(0) == 0x49)
		qDebug() << "data ;" << datagram.toHex();
		//qDebug() << "data ;" << QString(datagram.toHex());
	}
}
