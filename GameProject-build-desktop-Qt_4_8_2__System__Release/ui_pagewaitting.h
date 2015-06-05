/********************************************************************************
** Form generated from reading UI file 'pagewaitting.ui'
**
** Created: Wed Jun 3 06:58:51 2015
**      by: Qt User Interface Compiler version 4.8.2
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_PAGEWAITTING_H
#define UI_PAGEWAITTING_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QHeaderView>
#include <QtGui/QMainWindow>
#include <QtGui/QWidget>

QT_BEGIN_NAMESPACE

class Ui_PageWaitting
{
public:
    QWidget *centralWidget;

    void setupUi(QMainWindow *PageWaitting)
    {
        if (PageWaitting->objectName().isEmpty())
            PageWaitting->setObjectName(QString::fromUtf8("PageWaitting"));
        PageWaitting->resize(1280, 720);
        PageWaitting->setStyleSheet(QString::fromUtf8(""));
        centralWidget = new QWidget(PageWaitting);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        PageWaitting->setCentralWidget(centralWidget);

        retranslateUi(PageWaitting);

        QMetaObject::connectSlotsByName(PageWaitting);
    } // setupUi

    void retranslateUi(QMainWindow *PageWaitting)
    {
        PageWaitting->setWindowTitle(QApplication::translate("PageWaitting", "PageWaitting", 0, QApplication::UnicodeUTF8));
    } // retranslateUi

};

namespace Ui {
    class PageWaitting: public Ui_PageWaitting {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_PAGEWAITTING_H
