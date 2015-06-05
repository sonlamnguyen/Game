#ifndef PAGEPASSWORD_H
#define PAGEPASSWORD_H

#include <QDialog>
#include <QTimer>
#include <QtCore>
#include <QDebug>
#include <phonon>

namespace Ui {
class PagePassWord;
}

class PagePassWord : public QDialog
{
    Q_OBJECT
    
public:
    explicit PagePassWord(QWidget *parent = 0);
    ~PagePassWord();
    
private slots:


    void on_OK_clicked();

private:
    Ui::PagePassWord *ui;
    int convertQstring(QString qstring);
    Phonon::MediaObject *musicPass;
};

#endif // PAGEPASSWORD_H
