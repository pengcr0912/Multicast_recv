#ifndef MYMULTICAST_H
#define MYMULTICAST_H

#include <QtWidgets/QMainWindow>
#include "ui_mymulticast.h"
#include <QUdpSocket>

class MyMulticast : public QMainWindow
{
	Q_OBJECT

public:
	MyMulticast(QWidget *parent = 0);
	~MyMulticast();

public:
	QUdpSocket* socket;

private:
	Ui::MyMulticastClass ui;

	private slots:
	void dataReceived();
};

#endif // MYMULTICAST_H
