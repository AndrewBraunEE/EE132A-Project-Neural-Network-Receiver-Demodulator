#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_tab_2_customContextMenuRequested(const QPoint &pos)
{

}

void MainWindow::on_tab_customContextMenuRequested(const QPoint &pos)
{

}