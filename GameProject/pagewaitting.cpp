
#include <QDebug>
#include <QtCore>
#include <QTimer>
#include <phonon>
#include <QMovie>
#include <QLabel>
#include <Phonon/AudioOutput>
#include <phonon/AudioDataOutput>
#include <Phonon/VideoPlayer>
#include <Phonon/VideoWidget>
#include <Phonon/MediaObject>
#include <Phonon/MediaSource>
#include <Phonon/VolumeSlider>
#include <Phonon/VolumeFaderEffect>
#include <phonon>
#include <QFileDialog>


#include "pagepassword.h"
#include "pageresult.h"
#include "pagewaitting.h"
#include "ui_pagewaitting.h"
#include "string"
#include "stdio.h"
#include "errno.h"
#include "wiringPi.h"
#include "wiringPiSerial.h"


#define	LED     1
int j=0;
int check =0;
int modePlay=0;

int buffer[10], fd, readyControl=0, nextPage=0;


void PageWaitting::initGpio(void)
{
    pinMode (LED, OUTPUT) ;

}

int PageWaitting::init_serial(void)
{


    if((fd=serialOpen("/dev/ttyAMA0",9600))<0)
    {
        fprintf(stderr, "Unable to open serial device:%s\n", strerror(errno));
        return 1;
    }
    if(wiringPiSetup()==-1)
    {
        fprintf(stdout, "Unable to start wiringPi:%s\n", strerror(errno));
        return 1;
    }

    return 0;
}

PageWaitting::PageWaitting(QWidget *parent) :
    QMainWindow(parent),
    ui(new Ui::PageWaitting)
{
    ui->setupUi(this);
    QMovie *movie = new QMovie("/root/Game/GameProject/image/image_watting.gif");
    QLabel *processLabel = new QLabel(this);
    processLabel->setFixedSize(1280,720);
    processLabel->setMovie(movie);
    movie->start();
    this->show();

    initGpio();
    init_serial();
    digitalWrite (LED, LOW);	// Off

    timerPageWait = new QTimer(this);
    connect(timerPageWait, SIGNAL(timeout()),this,SLOT(nextPagePassWord()));

    timerPageWait->start(200);


}

PageWaitting::~PageWaitting()
{
    delete ui;
}


void PageWaitting::DiamicImage()
{

}
void PageWaitting::nextPagePassWord()
{
    if(modePlay==0)
    {
//        music = Phonon::createPlayer(Phonon::MusicCategory, Phonon::MediaSource("/root/Game/Music/demo3.mp3"));
//        music->play();
//        modePlay =1;
    }
    if(nextPage==0)
    {

        int i=0;
        while(serialDataAvail(fd)>0)
        {
            buffer[i] = serialGetchar(fd);
            qDebug() << buffer[i];
            i++;
            delay(20);
        }
        if(buffer[0]==0xFF && buffer[2]==0xFF)
        {
            PagePassWord *pagePass = new PagePassWord();
            pagePass->show();
//            music->pause();
            setNextPage(1);
            window()->close();

        }
    }


}


void PageWaitting::setMusic(int mode)
{
    modePlay=mode;
}

void PageWaitting::windowClose()
{
    window()->close();

}
int PageWaitting::getCodeWindow()
{
    return buffer[1];

}

int PageWaitting::getNextPage()
{
    return nextPage;

}
void PageWaitting::setNextPage(int nextpage)
{
    nextPage = nextpage;

}
void PageWaitting::sendCodePass(unsigned char passCode)
{
    digitalWrite (LED, HIGH);
    qDebug()<<passCode;

    serialPutchar(fd,0xFF);
    fflush(stdout);
    delay(50);

    serialPutchar(fd,passCode);
    fflush(stdout);
    delay(50);

    serialPutchar(fd,0xFF);
    fflush(stdout);
    delay(50);

    digitalWrite (LED, LOW);
    clearBuffer();



}

void PageWaitting::clearBuffer()
{
    for(int j = 0;j<10;j++)
        buffer[j]=0;
}
