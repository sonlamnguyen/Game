#include "pagepassword.h"
#include "ui_pagepassword.h"
#include "pageresult.h"
#include "pagewaitting.h"
#include <QString>
#include <QDebug>


int PagePassWord::convertQstring(QString qstring)
{
    bool convert;
    int returnValue;
    returnValue = qstring.toInt(&convert,10);

    return returnValue;


}
PagePassWord::PagePassWord(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PagePassWord)
{
    ui->setupUi(this);
    PageWaitting page;
    page.windowClose();
}

PagePassWord::~PagePassWord()
{
    delete ui;
}



void PagePassWord::on_OK_clicked()
{

    PageWaitting pageWaitting;

    int codeWindow;
    codeWindow = pageWaitting.getCodeWindow();

    QString pass;
    qDebug()<< ui->lineEdit->text();
    pass = ui->lineEdit->text();

    int passValue=0;
    passValue = convertQstring(pass);
    qDebug() << passValue;

    if(passValue == codeWindow)
    {
        qDebug("you win");
        pageWaitting.sendCodePass(passValue);
        pageWaitting.setNextPage(2);
        PageResult *pageResult = new PageResult();
        pageResult->show();
        window()->close();


    }else
    {
        qDebug("Pass enter fail!");
        pageWaitting.setNextPage(3);

        PageResult *pageResult = new PageResult();
        pageResult->show();
        window()->close();

    }


}

