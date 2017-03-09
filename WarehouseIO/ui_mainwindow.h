/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

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

class Ui_MainWindow
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

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(782, 549);
        centralWidget = new QWidget(MainWindow);
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
        MainWindow->setCentralWidget(centralWidget);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Welcome to Warehouse Manager1998", Q_NULLPTR));
        ProductTitle->setHtml(QApplication::translate("MainWindow", "<!DOCTYPE HTML PUBLIC \"-//W3C//DTD HTML 4.0//EN\" \"http://www.w3.org/TR/REC-html40/strict.dtd\">\n"
"<html><head><meta name=\"qrichtext\" content=\"1\" /><style type=\"text/css\">\n"
"p, li { white-space: pre-wrap; }\n"
"</style></head><body style=\" font-family:'MS Shell Dlg 2'; font-size:8.25pt; font-weight:400; font-style:normal;\">\n"
"<p align=\"center\" style=\" margin-top:0px; margin-bottom:0px; margin-left:0px; margin-right:0px; -qt-block-indent:0; text-indent:0px;\"><span style=\" font-size:26pt;\">Warehouse Manager1998</span></p></body></html>", Q_NULLPTR));
        UserNameLabel->setText(QApplication::translate("MainWindow", "Badgername", Q_NULLPTR));
        PasswordLabel->setText(QApplication::translate("MainWindow", "Badger Password", Q_NULLPTR));
        LoginButton->setText(QApplication::translate("MainWindow", "Login", Q_NULLPTR));
        HelpButton->setText(QApplication::translate("MainWindow", "Help", Q_NULLPTR));
        Exit->setText(QApplication::translate("MainWindow", "Exit", Q_NULLPTR));
        CreateNewBadger->setText(QApplication::translate("MainWindow", "Create New Badger", Q_NULLPTR));
        ErrorLabel->setText(QApplication::translate("MainWindow", "Placeholder", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
