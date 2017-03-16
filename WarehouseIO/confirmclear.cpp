#include "confirmclear.h"
#include "ui_confirmclear.h"

ConfirmClear::ConfirmClear(QWidget *parent) :
    QDialog(parent),
    ui(new Ui::ConfirmClear)
{
    ui->setupUi(this);
}

ConfirmClear::~ConfirmClear()
{
    delete ui;
}

void ConfirmClear::on_buttonBox_clicked(QAbstractButton *button)
{
    this->close();
    emit ReturnText(button->text());
}
