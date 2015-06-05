#include "pagefinal.h"
#include "ui_pagefinal.h"
#include <QString>
#include <QDebug>
#include <QFile>
#include <QTextStream>
#include <QMessageBox>

QString answer="";
int number=1;

PageFinal::PageFinal(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PageFinal)
{
    ui->setupUi(this);
    if(number==1)
    {
        int a = int(random()/(RAND_MAX + 1.0)*5 + 1);
        qDebug()<<a;
        questionFunction(a,number);
    }

}

void PageFinal::questionFunction(int question, int number)
{

    QString path = QString("/root/Game/question/question%1.txt").arg(question);
    qDebug()<<path;
    QFile file(path);

    if(!file.open(QIODevice::ReadOnly))
        QMessageBox::information(0,"info",file.errorString());
    QTextStream in(&file);

    QString NumberText = QString("%1").arg(number);
    ui->numberQuestion->setText(NumberText);

    ui->question->setText(in.readLine(0));
    ui->answera->setText(in.readLine(0));
    ui->answerb->setText(in.readLine(0));
    ui->answerc->setText(in.readLine(0));
    ui->answerd->setText(in.readLine(0));
    answer= in.readLine(1);
    qDebug()<<answer;


}

PageFinal::~PageFinal()
{
    delete ui;
}



void PageFinal::on_ok_clicked()
{
    if(ui->A->isChecked()&&answer=="A")
    {
        qDebug("You Win");
        int a = int(random()/(RAND_MAX + 1.0)*5 + 1);
        qDebug()<<a;
        number++;
        questionFunction(a,number);
        ui->A->clearMask();
    }else
        if(ui->B->isChecked()&&answer=="B")
        {
            qDebug("You Win");
            int a = int(random()/(RAND_MAX + 1.0)*5 + 1);
            qDebug()<<a;
            number++;
            questionFunction(a,number);
        }else
            if(ui->C->isChecked()&&answer=="C")
            {
                qDebug("You Win");
                int a = int(random()/(RAND_MAX + 1.0)*5 + 1);
                qDebug()<<a;
                number++;
                questionFunction(a,number);
            }else
                if(ui->D->isChecked()&&answer=="D")
                {
                    qDebug("You Win");
                    int a = int(random()/(RAND_MAX + 1.0)*5 + 1);
                    qDebug()<<a;
                    number++;
                    questionFunction(a,number);
                }else
                {
                    qDebug("You False");
                }
}
