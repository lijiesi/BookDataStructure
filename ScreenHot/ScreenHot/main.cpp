#include "ScreenHot.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	ScreenHot w;
	w.show();
	return a.exec();
}
