#include "gui_test.h"
#include <QtWidgets/QApplication>
#include "Qt_test.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	//Qt_test w(NULL);
	//w.setGeometry(100, 100, 400, 300);
	//w.show();
	gui_test w;
	w.show();
	return a.exec();
}
