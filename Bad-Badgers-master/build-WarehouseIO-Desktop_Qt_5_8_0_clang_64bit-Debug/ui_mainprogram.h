/********************************************************************************
** Form generated from reading UI file 'mainprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPROGRAM_H
#define UI_MAINPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>

QT_BEGIN_NAMESPACE

class Ui_MainProgram
{
public:
    QDialogButtonBox *buttonBox;

    void setupUi(QDialog *MainProgram)
    {
        if (MainProgram->objectName().isEmpty())
            MainProgram->setObjectName(QStringLiteral("MainProgram"));
        MainProgram->resize(400, 300);
        buttonBox = new QDialogButtonBox(MainProgram);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(30, 240, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);

        retranslateUi(MainProgram);
        QObject::connect(buttonBox, SIGNAL(accepted()), MainProgram, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), MainProgram, SLOT(reject()));

        QMetaObject::connectSlotsByName(MainProgram);
    } // setupUi

    void retranslateUi(QDialog *MainProgram)
    {
        MainProgram->setWindowTitle(QApplication::translate("MainProgram", "Dialog", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainProgram: public Ui_MainProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROGRAM_H
