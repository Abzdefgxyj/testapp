#ifndef MYGUI_H
#define MYGUI_H

#include <QMainWindow>

namespace Ui {
class MyGUI;
}

class MyGUI : public QMainWindow
{
    Q_OBJECT

public:
    explicit MyGUI(QWidget *parent = 0);
    ~MyGUI();

signals:
    void ToggleBackground(bool);

private slots:
    void on_mainButton_clicked();
    void TurnOffBackgroundSometimes(bool);

private:
    Ui::MyGUI *ui;

    bool backGroundStatus = true;
    void paintEvent(QWidget, std::string);
};

#endif // MYGUI_H
