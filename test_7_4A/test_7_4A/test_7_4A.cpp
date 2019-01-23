#include "test_7_4A.h"

test_7_4A::test_7_4A(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);


	m_searchWin = new Mysearch(this);
	m_searchWin->setWindowFlags(Qt::Window);
	connect(ui.btnStart, SIGNAL(clicked()), this, SLOT(onstart()));
	connect(m_searchWin->ui.btnSearch, SIGNAL(clicked()), this, SLOT(onsearch()));
}
int test_7_4A::onstart()
{
	m_searchWin->show();
	return 0;
}
int test_7_4A::onsearch()
{
	QString m_text = m_searchWin->ui.btnText->text();
	ui.btnPlain->appendPlainText(m_text);
	return 0;
}
