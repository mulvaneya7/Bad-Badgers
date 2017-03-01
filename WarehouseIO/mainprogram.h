#ifndef MAINPROGRAM_H
#define MAINPROGRAM_H

#include <QDialog>

namespace Ui {
class MainProgram;
}

class MainProgram : public QDialog
{
    Q_OBJECT

public:
    explicit MainProgram(QWidget *parent = 0);
    ~MainProgram();

private:
    Ui::MainProgram *ui;
};

#endif // MAINPROGRAM_H
