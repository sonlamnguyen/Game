/********************************************************************************
** Form generated from reading UI file 'pageresult.ui'
**
** Created: Wed Jun 3 07:29:11 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGERESULT_H
#define UI_PAGERESULT_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PageResult
{
public:
    QPushButton *Continue_Exit;
    QLabel *label;

    void setupUi(QDialog *PageResult)
    {
        if (PageResult->objectName().isEmpty())
            PageResult->setObjectName(QString::fromUtf8("PageResult"));
        PageResult->resize(666, 401);
        PageResult->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image_passwork.jpg);"));
        Continue_Exit = new QPushButton(PageResult);
        Continue_Exit->setObjectName(QString::fromUtf8("Continue_Exit"));
        Continue_Exit->setGeometry(QRect(180, 240, 301, 111));
        QFont font;
        font.setPointSize(40);
        Continue_Exit->setFont(font);
        Continue_Exit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/desktop.ini);"));
        label = new QLabel(PageResult);
        label->setObjectName(QString::fromUtf8("label"));
        label->setGeometry(QRect(150, 80, 377, 93));
        QFont font1;
        font1.setPointSize(60);
        label->setFont(font1);
        label->setStyleSheet(QString::fromUtf8("border-image: url(:/image/image_Lable.png);"));

        retranslateUi(PageResult);

        QMetaObject::connectSlotsByName(PageResult);
    } // setupUi

    void retranslateUi(QDialog *PageResult)
    {
        PageResult->setWindowTitle(QApplication::translate("PageResult", "Dialog", 0, QApplication::UnicodeUTF8));
        Continue_Exit->setText(QString());
        label->setText(QApplication::translate("PageResult", "TextLabel", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PageResult: public Ui_PageResult {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGERESULT_H
