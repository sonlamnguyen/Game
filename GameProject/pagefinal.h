#ifndef PAGEFINAL_H
#define PAGEFINAL_H

#include <QDialog>

namespace Ui {
class PageFinal;
}

class PageFinal : public QDialog
{
    Q_OBJECT
    
public:
    explicit PageFinal(QWidget *parent = 0);
    ~PageFinal();
    void questionFunction(int question, int number);
    
private slots:


    void on_ok_clicked();

private:
    Ui::PageFinal *ui;
};

#endif // PAGEFINAL_H
