#include "mainwindow.h"
#include "ui_mainwindow.h"

#include <QMessageBox>


MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QMessageBox msg;

    msg.setText("Hello World!");
    msg.exec();


    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}
