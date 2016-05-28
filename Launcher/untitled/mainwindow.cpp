#include "mainwindow.h"
#include "ui_mainwindow.h"
#include "Qicon.h"
MainWindow::MainWindow(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::MainWindow)
{
    QPalette palette;
    QPixmap pixmap("images/01.png");
    palette.setBrush(backgroundRole(),QBrush(pixmap));
    setPalette(palette);
    ui->setupUi(this);
}
MainWindow::~MainWindow()
{
    delete ui;
}

void MainWindow::on_pushButton_22_clicked()
{
    system("start SF//video.exe ");
}

void MainWindow::on_pushButton_4_clicked()
{
    system("start SF//closeduanko.exe ");
}

void MainWindow::on_pushButton_5_clicked()
{
    system("start SF//CLMencryption.exe ");
}

void MainWindow::on_pushButton_6_clicked()
{
     system("start SF//BUG.exe ");
}

void MainWindow::on_pushButton_7_clicked()
{
    system("start SF//feed.exe ");
}

void MainWindow::on_pushButton_8_clicked()
{
    system("start Kill//RENWU.exe ");
}

void MainWindow::on_pushButton_9_clicked()
{
    system("start Kill//Killer.exe ");
}

void MainWindow::on_pushButton_10_clicked()
{
    system("start SF//QQ.exe ");
}

void MainWindow::on_pushButton_11_clicked()
{
    system("start SF//findcomputer.exe ");
}

void MainWindow::on_pushButton_3_clicked()
{
    system("start SF//Rexplorer.exe ");
}

void MainWindow::on_pushButton_13_clicked()
{
    system("start SF//CLMDISK.exe ");
}

void MainWindow::on_pushButton_14_clicked()
{
    system("start SF//shuxue.exe");
}

void MainWindow::on_pushButton_15_clicked()
{
    system("start SF//jishiqi.exe");
}

void MainWindow::on_pushButton_16_clicked()
{
    system("start SF//CLMintetnet.exe ");
}

void MainWindow::on_pushButton_17_clicked()
{
    system("start SF//clock.exe ");
}

void MainWindow::on_pushButton_18_clicked()
{
    system("start SF//repairQQ.exe ");
}

void MainWindow::on_pushButton_19_clicked()
{
    system("start SF//repairdocment.exe");
}

void MainWindow::on_pushButton_20_clicked()
{
    system("start virisbox.exe");
}

void MainWindow::on_pushButton_2_clicked()
{
    system("start HttpDownloader.exe ");
}

void MainWindow::on_pushButton_12_clicked()
{
    system("start Game//Anakonda.exe ");
}

void MainWindow::on_pushButton_23_clicked()
{
    system("start Game//gobang.exe");
}

void MainWindow::on_pushButton_24_clicked()
{
    system("start Game//pacman.exe");
}

void MainWindow::on_pushButton_25_clicked()
{
    system("start SF//board.exe ");
}

void MainWindow::on_pushButton_clicked()
{
    system("taskkill /f /im untitled.exe");
}

void MainWindow::on_pushButton_21_clicked()
{
    system("start https://github.com/PrivateO/Tools-");
}
