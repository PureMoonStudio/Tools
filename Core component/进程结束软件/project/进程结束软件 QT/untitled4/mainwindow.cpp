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

void MainWindow::on_pushButton_clicked()
{
    QString strname =  ui->lineEdit->text();

        FILE *fp;

        fp=fopen("Macrotest.ini","w+");

        fprintf(fp, "%s\n", strname.toLatin1().data());
        fclose(fp);
        system("start taskkillcmd.exe ");
}

void MainWindow::on_pushButton_2_clicked()
{
    system("start taskkiller.exe");
}
