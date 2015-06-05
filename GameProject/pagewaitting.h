#ifndef PAGEWAITTING_H
#define PAGEWAITTING_H

#include <QMainWindow>
#include <QTimer>
#include <QtCore>
#include <QDebug>
#include <phonon>

namespace Ui {
class PageWaitting;
}

class PageWaitting : public QMainWindow
{
    Q_OBJECT
    
public:
    explicit PageWaitting(QWidget *parent = 0);
    ~PageWaitting();
    
    QTimer *timerPageWait;
    QTimer *timerPageWait1;

    void clearBuffer();
    void windowClose();

    int getCodeWindow();
    int getNextPage();
    void setNextPage(int nextpage);
    void sendCodePass(unsigned char passCode);

    void setMusic(int mode);

private slots:

    void nextPagePassWord();
    void DiamicImage();


private:
    void initGpio(void);
    int init_serial(void);

    Ui::PageWaitting *ui;
    Phonon::MediaObject *music;
};

#endif // PAGEWAITTING_H
