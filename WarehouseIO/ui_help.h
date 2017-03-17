/********************************************************************************
** Form generated from reading UI file 'help.ui'
**
** Created by: Qt User Interface Compiler version 5.8.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_HELP_H
#define UI_HELP_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDialog>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QPushButton>

QT_BEGIN_NAMESPACE

class Ui_Help
{
public:
    QLabel *helpGif;
    QPushButton *helpExit;

    void setupUi(QDialog *Help)
    {
        if (Help->objectName().isEmpty())
            Help->setObjectName(QStringLiteral("Help"));
        Help->resize(716, 567);
        helpGif = new QLabel(Help);
        helpGif->setObjectName(QStringLiteral("helpGif"));
        helpGif->setGeometry(QRect(140, 40, 481, 421));
        helpGif->setPixmap(QPixmap(QString::fromUtf8(":/Images/Help Gif.gif")));
        helpExit = new QPushButton(Help);
        helpExit->setObjectName(QStringLiteral("helpExit"));
        helpExit->setGeometry(QRect(630, 540, 75, 23));

        retranslateUi(Help);

        QMetaObject::connectSlotsByName(Help);
    } // setupUi

    void retranslateUi(QDialog *Help)
    {
        Help->setWindowTitle(QApplication::translate("Help", "Dialog", Q_NULLPTR));
        helpGif->setText(QString());
        helpExit->setText(QApplication::translate("Help", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class Help: public Ui_Help {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_HELP_H
