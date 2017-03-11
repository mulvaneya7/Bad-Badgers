/********************************************************************************
** Form generated from reading UI file 'LoginScreen.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_LOGINSCREEN_H
#define UI_LOGINSCREEN_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_LoginScreen
{
public:
    QWidget *centralWidget;
    QTextBrowser *ProductTitle;
    QLineEdit *UsernameInput;
    QLabel *UserNameLabel;
    QLineEdit *PasswordInput;
    QLabel *PasswordLabel;
    QPushButton *LoginButton;
    QPushButton *HelpButton;
    QPushButton *Exit;
    QPushButton *CreateNewBadger;
    QLabel *ErrorLabel;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *LoginScreen)
    {
        if (LoginScreen->objectName().isEmpty())
            LoginScreen->setObjectName(QStringLiteral("LoginScreen"));
        LoginScreen->resize(782, 549);
        centralWidget = new QWidget(LoginScreen);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        ProductTitle = new QTextBrowser(centralWidget);
        ProductTitle->setObjectName(QStringLiteral("ProductTitle"));
        ProductTitle->setGeometry(QRect(150, 80, 461, 61));
        UsernameInput = new QLineEdit(centralWidget);
        UsernameInput->setObjectName(QStringLiteral("UsernameInput"));
        UsernameInput->setGeometry(QRect(200, 210, 361, 20));
        UserNameLabel = new QLabel(centralWidget);
        UserNameLabel->setObjectName(QStringLiteral("UserNameLabel"));
        UserNameLabel->setGeometry(QRect(200, 190, 91, 16));
        PasswordInput = new QLineEdit(centralWidget);
        PasswordInput->setObjectName(QStringLiteral("PasswordInput"));
        PasswordInput->setGeometry(QRect(200, 260, 361, 20));
        PasswordLabel = new QLabel(centralWidget);
        PasswordLabel->setObjectName(QStringLiteral("PasswordLabel"));
        PasswordLabel->setGeometry(QRect(200, 240, 141, 16));
        LoginButton = new QPushButton(centralWidget);
        LoginButton->setObjectName(QStringLiteral("LoginButton"));
        LoginButton->setGeometry(QRect(490, 300, 75, 23));
        HelpButton = new QPushButton(centralWidget);
        HelpButton->setObjectName(QStringLiteral("HelpButton"));
        HelpButton->setGeometry(QRect(580, 460, 75, 23));
        Exit = new QPushButton(centralWidget);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(670, 460, 75, 23));
        CreateNewBadger = new QPushButton(centralWidget);
        CreateNewBadger->setObjectName(QStringLiteral("CreateNewBadger"));
        CreateNewBadger->setGeometry(QRect(350, 300, 111, 23));
        ErrorLabel = new QLabel(centralWidget);
        ErrorLabel->setObjectName(QStringLiteral("ErrorLabel"));
        ErrorLabel->setGeometry(QRect(200, 340, 361, 31));
        LoginScreen->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(LoginScreen);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        LoginScreen->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(LoginScreen);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        LoginScreen->setStatusBar(statusBar);

        retranslateUi(LoginScreen);

        QMetaObject::connectSlotsByName(LoginScreen);
    } // setupUi

    void retranslateUi(QMainWindow *LoginScreen)
    {
        LoginScreen->setWindowTitle(QApplication::translate("LoginScreen", "Welcome to Warehouse Manager1998", Q_NULLPTR));
        ProductTitle->setHtml(QApplication::translate("LoginScreen", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt;\">Warehouse Manager1998</span></p></body></html>", Q_NULLPTR));
        UserNameLabel->setText(QApplication::translate("LoginScreen", "Badgername", Q_NULLPTR));
        PasswordLabel->setText(QApplication::translate("LoginScreen", "Badger Password", Q_NULLPTR));
        LoginButton->setText(QApplication::translate("LoginScreen", "Login", Q_NULLPTR));
        HelpButton->setText(QApplication::translate("LoginScreen", "Help", Q_NULLPTR));
        Exit->setText(QApplication::translate("LoginScreen", "Exit", Q_NULLPTR));
        CreateNewBadger->setText(QApplication::translate("LoginScreen", "Create New Badger", Q_NULLPTR));
        ErrorLabel->setText(QApplication::translate("LoginScreen", "Placeholder", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class LoginScreen: public Ui_LoginScreen {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_LOGINSCREEN_H
