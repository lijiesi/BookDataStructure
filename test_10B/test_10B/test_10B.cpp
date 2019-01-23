#include "test_10B.h"
#include <QFileDialog>
test_10B::test_10B(QWidget *parent)
	: QMainWindow(parent)
{
	ui.setupUi(this);
	this->setWindowTitle(QString::fromLocal8Bit("�ļ�������"));
	mylabel = new QLabel();
	mylabel->setMaximumWidth(100);
	ui.statusBar->addWidget(mylabel);

	connect(ui.actionNew, SIGNAL(triggered()), this, SLOT(btnNew()));
	connect(ui.actionSave, SIGNAL(triggered()), this, SLOT(btnSave()));
	connect(ui.actionOpen, SIGNAL(triggered()), this, SLOT(btnOpen()));
}
int test_10B::btnNew()
{
	m_filepath = "";
	ui.mytext->clear();
	mylabel->setText(QString::fromLocal8Bit("�½��ļ�"));
	return 0;
}
int test_10B::btnOpen()
{

	QString filepath = QFileDialog::getOpenFileName(this, QString::fromLocal8Bit("���ļ�"));
	if (filepath.length() == 0) return -1;
	mylabel->setText(QString::fromLocal8Bit("���ļ�"));
	QByteArray bytes_1 = filepath.toLocal8Bit();
	const char* gbk_filepath = bytes_1.data();
	char buf[512];
	FILE *fp = fopen(gbk_filepath, "rb");
	int n=fread(buf, 1, 512, fp);
	buf[n] = 0;
	fclose(fp);
	ui.mytext->setPlainText(QString::fromLocal8Bit(buf));
	m_filepath = filepath;
	return 0;
}
int test_10B::btnSave()
{
	//���ļ���
	if (m_filepath==0)
	{
		QString filepath = QFileDialog::getSaveFileName(this, QString::fromLocal8Bit("�����ļ�"));
		if (filepath.length() == 0) return -1;
		m_filepath = filepath;
	}
	QByteArray bytes_1 = m_filepath.toLocal8Bit();
	const char* gbk_filepath = bytes_1.data();
	//��ȡ���ݣ���д��
	QString text = ui.mytext->toPlainText();
	QByteArray bytes_2 = text.toLocal8Bit();
	const char* gbk_text = bytes_2.data();
	FILE *fp = fopen(gbk_filepath, "wb");
	fwrite(gbk_text, 1, strlen(gbk_text), fp);
	fclose(fp);
	//ui.statusBar->showMessage(QString::fromLocal8Bit("�Ѿ�����"),1000*3);
	mylabel->setText(QString::fromLocal8Bit("����"));
	return 0;
}