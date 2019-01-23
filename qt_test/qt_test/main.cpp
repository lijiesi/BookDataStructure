#include "qt_test.h"
#include <QtWidgets/QApplication>
#include "MyWin.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	MyWin w(NULL);
	w.setGeometry(100, 100, 400, 300);
	w.show();
	//qt_test w;
	//w.show();
	return a.exec();
}
