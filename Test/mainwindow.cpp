#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
    ui -> textBrowser -> setText("Hello Wolrd");
}

MainWindow::~MainWindow()
{
    delete ui;
}
