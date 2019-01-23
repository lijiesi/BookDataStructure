#include "test_11E.h"
#include <QtWidgets/QApplication>
#include "MyWidget.h"
int main(int argc, char *argv[])
{
	QApplication a(argc, argv);
	test_11E w;
	w.show();
// 	MyWidget w(NULL);
// 	w.resize(400, 300);
// 	w.move(300, 400);
// 	w.show();
	return a.exec();
}
