#include "mygui.h"
#include "ui_mygui.h"

void MyGUI::paintEvent(QWidget mywidget, std::string path){
  /*QPainter painter(mywidget);

  QPixmap _mypix(path);

  int widgetHeight = mywidget.height();
  int imageHeight = _mypix.height();
  float imageratio = _mypix.width()/_mypix.height();
  if(imageHeight > widgetHeight){
    painter.drawPixmap(0,0,imageratio*widgetHeight, widgetHeight, _mypix);
  }
  else{ painter.drawPixmap(0,0,_mypix.width(), _mypix.height(), _mypix);}*/
}

MyGUI::MyGUI(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MyGUI)
{
    ui->setupUi(this);

    //paintEvent(ui->widget1,":/background1.jpg");
    //paintEvent(ui->widget2,":/background2.jpg");

    connect(this,SIGNAL(ToggleBackground(bool)),this,SLOT(TurnOffBackgroundSometimes(bool)));
}

MyGUI::~MyGUI()
{
    delete ui;
}

void MyGUI::on_mainButton_clicked()
{
    emit ToggleBackground(!backGroundStatus);
}

//SLOTS
void MyGUI::TurnOffBackgroundSometimes(bool backgroundOn)
{
  if(backgroundOn)
  {
    //paintEvent(ui->widget1,":/background1.jpg");
    //paintEvent(ui->widget2,":/background2.jpg");
  }
  else{
    //something that removes the images
  }
}
