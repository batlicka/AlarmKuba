#ifndef MAINWINDOW_H
#define MAINWINDOW_H
#include <QString>
#include <QMainWindow>

namespace Ui {
class MainWindow;
}

class MainWindow : public QMainWindow
{
    Q_OBJECT

public:
    explicit MainWindow(QWidget *parent = nullptr);
    ~MainWindow();
    bool showW = true;
private slots:
    void on_pushButton_pressed();
protected:
    virtual void timerEvent(QTimerEvent *event);
private:
    Ui::MainWindow *ui;
};

#endif // MAINWINDOW_H
