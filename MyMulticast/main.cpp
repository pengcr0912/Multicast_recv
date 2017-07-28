#include "mymulticast.h"
#include <QtWidgets/QApplication>


int main(int argc, char *argv[])
{
	QApplication a(argc, argv);

	MyMulticast w;
	w.show();
	return a.exec();
}
