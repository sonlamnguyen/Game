/********************************************************************************
** Form generated from reading UI file 'pagefinal.ui'
**
** Created: Wed Jun 3 10:55:02 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEFINAL_H
#define UI_PAGEFINAL_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QCheckBox>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PageFinal
{
public:
    QLabel *answera;
    QLabel *answerb;
    QLabel *answerc;
    QLabel *answerd;
    QLabel *question;
    QPushButton *ok;
    QCheckBox *A;
    QCheckBox *B;
    QCheckBox *C;
    QCheckBox *D;
    QLabel *numberQuestion;

    void setupUi(QDialog *PageFinal)
    {
        if (PageFinal->objectName().isEmpty())
            PageFinal->setObjectName(QString::fromUtf8("PageFinal"));
        PageFinal->resize(690, 427);
        answera = new QLabel(PageFinal);
        answera->setObjectName(QString::fromUtf8("answera"));
        answera->setGeometry(QRect(140, 80, 421, 16));
        answerb = new QLabel(PageFinal);
        answerb->setObjectName(QString::fromUtf8("answerb"));
        answerb->setGeometry(QRect(140, 120, 411, 16));
        answerc = new QLabel(PageFinal);
        answerc->setObjectName(QString::fromUtf8("answerc"));
        answerc->setGeometry(QRect(140, 160, 421, 16));
        answerd = new QLabel(PageFinal);
        answerd->setObjectName(QString::fromUtf8("answerd"));
        answerd->setGeometry(QRect(140, 200, 411, 16));
        question = new QLabel(PageFinal);
        question->setObjectName(QString::fromUtf8("question"));
        question->setGeometry(QRect(160, 20, 511, 51));
        ok = new QPushButton(PageFinal);
        ok->setObjectName(QString::fromUtf8("ok"));
        ok->setGeometry(QRect(230, 340, 121, 51));
        A = new QCheckBox(PageFinal);
        A->setObjectName(QString::fromUtf8("A"));
        A->setGeometry(QRect(150, 290, 84, 20));
        B = new QCheckBox(PageFinal);
        B->setObjectName(QString::fromUtf8("B"));
        B->setGeometry(QRect(260, 290, 84, 20));
        C = new QCheckBox(PageFinal);
        C->setObjectName(QString::fromUtf8("C"));
        C->setGeometry(QRect(370, 290, 84, 20));
        D = new QCheckBox(PageFinal);
        D->setObjectName(QString::fromUtf8("D"));
        D->setGeometry(QRect(490, 290, 84, 20));
        numberQuestion = new QLabel(PageFinal);
        numberQuestion->setObjectName(QString::fromUtf8("numberQuestion"));
        numberQuestion->setGeometry(QRect(80, 20, 61, 51));

        retranslateUi(PageFinal);

        QMetaObject::connectSlotsByName(PageFinal);
    } // setupUi

    void retranslateUi(QDialog *PageFinal)
    {
        PageFinal->setWindowTitle(QApplication::translate("PageFinal", "Dialog", 0, QApplication::UnicodeUTF8));
        answera->setText(QApplication::translate("PageFinal", "a", 0, QApplication::UnicodeUTF8));
        answerb->setText(QApplication::translate("PageFinal", "b", 0, QApplication::UnicodeUTF8));
        answerc->setText(QApplication::translate("PageFinal", "c", 0, QApplication::UnicodeUTF8));
        answerd->setText(QApplication::translate("PageFinal", "d", 0, QApplication::UnicodeUTF8));
        question->setText(QApplication::translate("PageFinal", "question", 0, QApplication::UnicodeUTF8));
        ok->setText(QApplication::translate("PageFinal", "ok", 0, QApplication::UnicodeUTF8));
        A->setText(QApplication::translate("PageFinal", "A", 0, QApplication::UnicodeUTF8));
        B->setText(QApplication::translate("PageFinal", "B", 0, QApplication::UnicodeUTF8));
        C->setText(QApplication::translate("PageFinal", "C", 0, QApplication::UnicodeUTF8));
        D->setText(QApplication::translate("PageFinal", "D", 0, QApplication::UnicodeUTF8));
        numberQuestion->setText(QApplication::translate("PageFinal", "number", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PageFinal: public Ui_PageFinal {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEFINAL_H
