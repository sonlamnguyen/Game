/********************************************************************************
** Form generated from reading UI file 'pagepassword.ui'
**
** Created: Wed Jun 3 07:26:09 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEPASSWORD_H
#define UI_PAGEPASSWORD_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QDialog>
#include <QtGui/QHeaderView>
#include <QtGui/QLineEdit>
#include <QtGui/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_PagePassWord
{
public:
    QLineEdit *lineEdit;
    QPushButton *OK;

    void setupUi(QDialog *PagePassWord)
    {
        if (PagePassWord->objectName().isEmpty())
            PagePassWord->setObjectName(QString::fromUtf8("PagePassWord"));
        PagePassWord->resize(669, 441);
        PagePassWord->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/image_passwork.jpg);"));
        lineEdit = new QLineEdit(PagePassWord);
        lineEdit->setObjectName(QString::fromUtf8("lineEdit"));
        lineEdit->setGeometry(QRect(60, 100, 571, 141));
        QFont font;
        font.setPointSize(40);
        lineEdit->setFont(font);
        lineEdit->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/desktop.ini);"));
        OK = new QPushButton(PagePassWord);
        OK->setObjectName(QString::fromUtf8("OK"));
        OK->setGeometry(QRect(220, 280, 251, 111));
        QFont font1;
        font1.setPointSize(50);
        OK->setFont(font1);
        OK->setStyleSheet(QString::fromUtf8("border-image: url(:/new/prefix1/ok-button-hi.png);"));

        retranslateUi(PagePassWord);

        QMetaObject::connectSlotsByName(PagePassWord);
    } // setupUi

    void retranslateUi(QDialog *PagePassWord)
    {
        PagePassWord->setWindowTitle(QApplication::translate("PagePassWord", "Dialog", 0, QApplication::UnicodeUTF8));
        OK->setText(QString());
    } // retranslateUi

};

namespace Ui {
    class PagePassWord: public Ui_PagePassWord {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEPASSWORD_H
