#ifndef PAGERESULT_H
#define PAGERESULT_H

#include <QDialog>

namespace Ui {
class PageResult;
}

class PageResult : public QDialog
{
    Q_OBJECT
    
public:
    explicit PageResult(QWidget *parent = 0);
    ~PageResult();
    
private slots:
    void on_Continue_Exit_clicked();

private:
    Ui::PageResult *ui;
};

#endif // PAGERESULT_H
