#include "sin_function.h"
#include <QtWidgets/QApplication>

int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	sin_function w;
	w.show();
	return a.exec();
}
