#include "caxmainwindow.h"

#include <QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	CAXMainWindow w;
	w.show();
	return a.exec();
}
