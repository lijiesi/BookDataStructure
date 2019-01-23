#include "test_combox.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_combox w;
	w.show();
	return a.exec();
}
