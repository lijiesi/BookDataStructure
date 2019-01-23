#include "check_box.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	check_box w;
	w.show();
	return a.exec();
}
