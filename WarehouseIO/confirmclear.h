#ifndef CONFIRMCLEAR_H
#define CONFIRMCLEAR_H

#include <QDialog>
#include <QAbstractButton>

namespace Ui {
class ConfirmClear;
}

class ConfirmClear : public QDialog
{
    Q_OBJECT

public:
    explicit ConfirmClear(QWidget *parent = 0);
    ~ConfirmClear();

signals:
    void ReturnText(QString input);

public slots:
    void on_buttonBox_clicked(QAbstractButton *button);

private:
    Ui::ConfirmClear *ui;
};

#endif // CONFIRMCLEAR_H
