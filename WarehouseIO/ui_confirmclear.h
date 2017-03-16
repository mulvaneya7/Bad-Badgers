/********************************************************************************
** Form generated from reading UI file 'confirmclear.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CONFIRMCLEAR_H
#define UI_CONFIRMCLEAR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>

QT_BEGIN_NAMESPACE

class Ui_ConfirmClear
{
public:
    QDialogButtonBox *buttonBox;
    QLabel *label;

    void setupUi(QDialog *ConfirmClear)
    {
        if (ConfirmClear->objectName().isEmpty())
            ConfirmClear->setObjectName(QStringLiteral("ConfirmClear"));
        ConfirmClear->resize(300, 85);
        buttonBox = new QDialogButtonBox(ConfirmClear);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(10, 50, 280, 30));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Discard|QDialogButtonBox::Save);
        label = new QLabel(ConfirmClear);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(10, 10, 280, 30));
        label->setAlignment(Qt::AlignHCenter|Qt::AlignTop);
        label->setWordWrap(true);

        retranslateUi(ConfirmClear);
        QObject::connect(buttonBox, SIGNAL(accepted()), ConfirmClear, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), ConfirmClear, SLOT(reject()));

        QMetaObject::connectSlotsByName(ConfirmClear);
    } // setupUi

    void retranslateUi(QDialog *ConfirmClear)
    {
        ConfirmClear->setWindowTitle(QApplication::translate("ConfirmClear", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("ConfirmClear", "You are about to clear all of your data. Would you like to save your data first?", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class ConfirmClear: public Ui_ConfirmClear {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CONFIRMCLEAR_H
