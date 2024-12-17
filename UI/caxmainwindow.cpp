#include "caxmainwindow.h"
#include "./ui_caxmainwindow.h"

CAXMainWindow::CAXMainWindow(QWidget *parent) : QMainWindow(parent), ui(new Ui::CAXMainWindow)
{
	ui->setupUi(this);
}

CAXMainWindow::~CAXMainWindow()
{
	delete ui;
}
