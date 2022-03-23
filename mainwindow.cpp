#include "mainwindow.h"
#include "ui_mainwindow.h"

MainWindow::MainWindow(QWidget *parent)
    : QMainWindow(parent)
    , ui(new Ui::MainWindow)
{
    ui->setupUi(this);
}

MainWindow::~MainWindow()
{
    delete ui;
}



void MainWindow::on_comboVariant_currentIndexChanged(int index)
{
    ui->comboVariant->setCurrentIndex(-1);
}


void MainWindow::on_BtChange_clicked()
{
    if (ui->BtChange->text()== "Изменить")
            ui->BtChange->setText("Прекратить изменения");

    else
            ui->BtChange->setText("Изменить");
}

