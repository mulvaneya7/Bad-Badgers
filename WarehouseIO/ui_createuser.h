/********************************************************************************
** Form generated from reading UI file 'createuser.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_CREATEUSER_H
#define UI_CREATEUSER_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QDialogButtonBox>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QTextBrowser>

QT_BEGIN_NAMESPACE

class Ui_CreateUser
{
public:
    QDialogButtonBox *buttonBox;
    QLineEdit *lineEdit;
    QLineEdit *lineEdit_2;
    QLineEdit *lineEdit_3;
    QLabel *label;
    QLabel *label_2;
    QLabel *label_3;
    QLineEdit *lineEdit_4;
    QLabel *label_4;
    QTextBrowser *textBrowser;

    void setupUi(QDialog *CreateUser)
    {
        if (CreateUser->objectName().isEmpty())
            CreateUser->setObjectName(QStringLiteral("CreateUser"));
        CreateUser->resize(781, 437);
        buttonBox = new QDialogButtonBox(CreateUser);
        buttonBox->setObjectName(QStringLiteral("buttonBox"));
        buttonBox->setGeometry(QRect(380, 350, 341, 32));
        buttonBox->setOrientation(Qt::Horizontal);
        buttonBox->setStandardButtons(QDialogButtonBox::Cancel|QDialogButtonBox::Ok);
        lineEdit = new QLineEdit(CreateUser);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(100, 130, 341, 20));
        lineEdit_2 = new QLineEdit(CreateUser);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(100, 170, 341, 20));
        lineEdit_3 = new QLineEdit(CreateUser);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(100, 210, 341, 20));
        label = new QLabel(CreateUser);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(100, 110, 101, 16));
        label_2 = new QLabel(CreateUser);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(100, 150, 51, 20));
        label_3 = new QLabel(CreateUser);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(100, 190, 101, 16));
        lineEdit_4 = new QLineEdit(CreateUser);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(100, 280, 113, 20));
        label_4 = new QLabel(CreateUser);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(100, 260, 211, 16));
        textBrowser = new QTextBrowser(CreateUser);
        textBrowser->setObjectName(QStringLiteral("textBrowser"));
        textBrowser->setGeometry(QRect(100, 20, 351, 61));

        retranslateUi(CreateUser);
        QObject::connect(buttonBox, SIGNAL(accepted()), CreateUser, SLOT(accept()));
        QObject::connect(buttonBox, SIGNAL(rejected()), CreateUser, SLOT(reject()));

        QMetaObject::connectSlotsByName(CreateUser);
    } // setupUi

    void retranslateUi(QDialog *CreateUser)
    {
        CreateUser->setWindowTitle(QApplication::translate("CreateUser", "Dialog", Q_NULLPTR));
        label->setText(QApplication::translate("CreateUser", "BadgerName", Q_NULLPTR));
        label_2->setText(QApplication::translate("CreateUser", "Password", Q_NULLPTR));
        label_3->setText(QApplication::translate("CreateUser", "Re-enter Password", Q_NULLPTR));
        label_4->setText(QApplication::translate("CreateUser", "Manager Authentication Number", Q_NULLPTR));
        textBrowser->setHtml(QApplication::translate("CreateUser", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:28pt;\">Create New User</span></p></body></html>", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class CreateUser: public Ui_CreateUser {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_CREATEUSER_H
