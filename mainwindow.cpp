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


void MainWindow::on_BtSbros_clicked()
{
    ui->EdtChastota->setText("");
    ui->EdtKoef->setText("");
    ui->EdtKolichestvo->setText("");
    ui->EdtMosh->setText("");
    ui->EdtX->setText("");
    ui->EdtY->setText("");
    ui->comboREB->setCurrentIndex(-1);
}


void MainWindow::on_comboREB_currentIndexChanged(int index)
{
    if (ui->comboREB->currentIndex()==0)
    {
        ui->EdtKoef->setText("3");
        ui->EdtMosh->setText("7");
    }
    if (ui->comboREB->currentIndex()==1)
    {
        ui->EdtKoef->setText("4");
        ui->EdtMosh->setText("9");
    }
    if (ui->comboREB->currentIndex()==2)
    {
        ui->EdtKoef->setText("4");
        ui->EdtMosh->setText("11");
    }
}

