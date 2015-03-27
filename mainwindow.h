#ifndef MAINWINDOW_H
#define MAINWINDOW_H

#include <QMainWindow>
#include "mainwindow2.h"

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = 0);
    ~MainWindow();

private slots:
    void on_pushButton_clicked();

    void on_calendarWidget_clicked(const QDate &date);

private:
    Ui::MainWindow *ui;
    MainWindow2 *Olg;
};

#endif // MAINWINDOW_H
