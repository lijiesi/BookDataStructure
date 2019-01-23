#include "test_11E.h"

test_11E::test_11E(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	connect(ui.btnframe, SIGNAL(selected(QRect)), this, SLOT(onselected()));
}
int test_11E::onselected()
{
	return 0;
}