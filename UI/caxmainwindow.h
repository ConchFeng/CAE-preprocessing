#ifndef CAXMAINWINDOW_H
#define CAXMAINWINDOW_H

#include <QMainWindow>

QT_BEGIN_NAMESPACE
namespace Ui {
class CAXMainWindow;
}
QT_END_NAMESPACE

class CAXMainWindow : public QMainWindow {
	Q_OBJECT

public:
	CAXMainWindow(QWidget *parent = nullptr);
	~CAXMainWindow();

private:
	Ui::CAXMainWindow *ui;
};
#endif // CAXMAINWINDOW_H
