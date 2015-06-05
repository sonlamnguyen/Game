#include "pageresult.h"
#include "ui_pageresult.h"
#include "pagepassword.h"
#include "pagewaitting.h"
#include "wiringPi.h"
#include "pagefinal.h"

PageResult::PageResult(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::PageResult)
{
    ui->setupUi(this);
    PageWaitting pageWaitting;
    if(pageWaitting.getNextPage()==2)
    {
        ui->label->setText("<b><font color ='blue'> You Win @_@</font></b>");
        ui->Continue_Exit->setText("Exit");
    }else
    {
        ui->label->setText("<b><font color ='red'> Pass fail !!</font></b>");
        ui->Continue_Exit->setText("Coutinue");
    }
}

PageResult::~PageResult()
{
    delete ui;
}

void PageResult::on_Continue_Exit_clicked()
{
    PageWaitting pageWaitting;

    if(pageWaitting.getNextPage()==2)
    {

        delay(1000);
        PageFinal *question = new PageFinal();
        question->show();
//        PageWaitting *goHome = new PageWaitting();
//        goHome->show();
//        pageWaitting.setNextPage(0);
//        pageWaitting.setMusic(0);
        window()->close();
    }else
    {

        PagePassWord *pagePass = new PagePassWord();
        pagePass->show();
        pageWaitting.setNextPage(1);
        pageWaitting.setMusic(0);
        window()->close();
    }


}

