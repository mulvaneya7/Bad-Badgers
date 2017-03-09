/********************************************************************************
** Form generated from reading UI file 'mainprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.7.1
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINPROGRAM_H
#define UI_MAINPROGRAM_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QComboBox>
#include <QtWidgets/QDateEdit>
#include <QtWidgets/QDialog>
#include <QtWidgets/QFrame>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QLabel>
#include <QtWidgets/QLineEdit>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QSpinBox>
#include <QtWidgets/QTabWidget>
#include <QtWidgets/QTableWidget>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainProgram
{
public:
    QTabWidget *TabMenu;
    QWidget *Transaction;
    QTableWidget *TransactionTable;
    QDateEdit *DateInput;
    QPushButton *GenerateReport;
    QLabel *reportPrompt;
    QWidget *MemberList;
    QTableWidget *MemberTable;
    QLabel *DisplayLabel;
    QComboBox *DisplayOption;
    QPushButton *pushButton_3;
    QWidget *ItemInfo;
    QTableWidget *ItemStatstable;
    QLabel *ItemSalesStats;
    QWidget *SearchMember;
    QLineEdit *MemberSearchInput;
    QTableWidget *MemberDataTable;
    QPushButton *AddMember;
    QComboBox *SearchOption;
    QLabel *SearchLabe;
    QLabel *SpecificLabel;
    QPushButton *DeleteMember;
    QWidget *ReportSales;
    QLineEdit *lineEdit;
    QLabel *label;
    QFrame *line;
    QFrame *line_2;
    QLabel *label_2;
    QLabel *label_3;
    QFrame *line_3;
    QLabel *label_4;
    QLabel *label_5;
    QLineEdit *lineEdit_2;
    QLabel *label_6;
    QSpinBox *spinBox;
    QLineEdit *lineEdit_3;
    QLabel *label_7;
    QDateEdit *dateEdit;
    QLabel *label_8;
    QLineEdit *lineEdit_4;
    QLabel *label_9;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *Help;
    QPushButton *Exit;

    void setupUi(QDialog *MainProgram)
    {
        if (MainProgram->objectName().isEmpty())
            MainProgram->setObjectName(QStringLiteral("MainProgram"));
        MainProgram->resize(826, 564);
        TabMenu = new QTabWidget(MainProgram);
        TabMenu->setObjectName(QStringLiteral("TabMenu"));
        TabMenu->setGeometry(QRect(40, 30, 731, 491));
        TabMenu->setContextMenuPolicy(Qt::PreventContextMenu);
        Transaction = new QWidget();
        Transaction->setObjectName(QStringLiteral("Transaction"));
        TransactionTable = new QTableWidget(Transaction);
        if (TransactionTable->columnCount() < 5)
            TransactionTable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem = new QTableWidgetItem();
        TransactionTable->setHorizontalHeaderItem(0, __qtablewidgetitem);
        QTableWidgetItem *__qtablewidgetitem1 = new QTableWidgetItem();
        TransactionTable->setHorizontalHeaderItem(1, __qtablewidgetitem1);
        QTableWidgetItem *__qtablewidgetitem2 = new QTableWidgetItem();
        TransactionTable->setHorizontalHeaderItem(2, __qtablewidgetitem2);
        QTableWidgetItem *__qtablewidgetitem3 = new QTableWidgetItem();
        TransactionTable->setHorizontalHeaderItem(3, __qtablewidgetitem3);
        QTableWidgetItem *__qtablewidgetitem4 = new QTableWidgetItem();
        TransactionTable->setHorizontalHeaderItem(4, __qtablewidgetitem4);
        TransactionTable->setObjectName(QStringLiteral("TransactionTable"));
        TransactionTable->setGeometry(QRect(60, 20, 502, 351));
        DateInput = new QDateEdit(Transaction);
        DateInput->setObjectName(QStringLiteral("DateInput"));
        DateInput->setGeometry(QRect(500, 400, 110, 22));
        GenerateReport = new QPushButton(Transaction);
        GenerateReport->setObjectName(QStringLiteral("GenerateReport"));
        GenerateReport->setGeometry(QRect(630, 400, 75, 23));
        reportPrompt = new QLabel(Transaction);
        reportPrompt->setObjectName(QStringLiteral("reportPrompt"));
        reportPrompt->setGeometry(QRect(500, 380, 141, 16));
        TabMenu->addTab(Transaction, QString());
        MemberList = new QWidget();
        MemberList->setObjectName(QStringLiteral("MemberList"));
        MemberTable = new QTableWidget(MemberList);
        if (MemberTable->columnCount() < 6)
            MemberTable->setColumnCount(6);
        QTableWidgetItem *__qtablewidgetitem5 = new QTableWidgetItem();
        MemberTable->setHorizontalHeaderItem(0, __qtablewidgetitem5);
        QTableWidgetItem *__qtablewidgetitem6 = new QTableWidgetItem();
        MemberTable->setHorizontalHeaderItem(1, __qtablewidgetitem6);
        QTableWidgetItem *__qtablewidgetitem7 = new QTableWidgetItem();
        MemberTable->setHorizontalHeaderItem(2, __qtablewidgetitem7);
        QTableWidgetItem *__qtablewidgetitem8 = new QTableWidgetItem();
        MemberTable->setHorizontalHeaderItem(3, __qtablewidgetitem8);
        QTableWidgetItem *__qtablewidgetitem9 = new QTableWidgetItem();
        MemberTable->setHorizontalHeaderItem(4, __qtablewidgetitem9);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        MemberTable->setHorizontalHeaderItem(5, __qtablewidgetitem10);
        MemberTable->setObjectName(QStringLiteral("MemberTable"));
        MemberTable->setGeometry(QRect(50, 50, 601, 371));
        DisplayLabel = new QLabel(MemberList);
        DisplayLabel->setObjectName(QStringLiteral("DisplayLabel"));
        DisplayLabel->setGeometry(QRect(20, 20, 91, 21));
        DisplayOption = new QComboBox(MemberList);
        DisplayOption->setObjectName(QStringLiteral("DisplayOption"));
        DisplayOption->setGeometry(QRect(110, 20, 111, 22));
        pushButton_3 = new QPushButton(MemberList);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(474, 430, 171, 23));
        TabMenu->addTab(MemberList, QString());
        ItemInfo = new QWidget();
        ItemInfo->setObjectName(QStringLiteral("ItemInfo"));
        ItemStatstable = new QTableWidget(ItemInfo);
        if (ItemStatstable->columnCount() < 4)
            ItemStatstable->setColumnCount(4);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(0, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(1, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(2, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(3, __qtablewidgetitem14);
        ItemStatstable->setObjectName(QStringLiteral("ItemStatstable"));
        ItemStatstable->setGeometry(QRect(30, 30, 411, 421));
        ItemSalesStats = new QLabel(ItemInfo);
        ItemSalesStats->setObjectName(QStringLiteral("ItemSalesStats"));
        ItemSalesStats->setGeometry(QRect(30, 10, 101, 16));
        TabMenu->addTab(ItemInfo, QString());
        SearchMember = new QWidget();
        SearchMember->setObjectName(QStringLiteral("SearchMember"));
        MemberSearchInput = new QLineEdit(SearchMember);
        MemberSearchInput->setObjectName(QStringLiteral("MemberSearchInput"));
        MemberSearchInput->setGeometry(QRect(30, 50, 113, 20));
        MemberDataTable = new QTableWidget(SearchMember);
        MemberDataTable->setObjectName(QStringLiteral("MemberDataTable"));
        MemberDataTable->setGeometry(QRect(30, 80, 301, 341));
        AddMember = new QPushButton(SearchMember);
        AddMember->setObjectName(QStringLiteral("AddMember"));
        AddMember->setGeometry(QRect(160, 430, 75, 23));
        SearchOption = new QComboBox(SearchMember);
        SearchOption->setObjectName(QStringLiteral("SearchOption"));
        SearchOption->setGeometry(QRect(240, 50, 91, 22));
        SearchLabe = new QLabel(SearchMember);
        SearchLabe->setObjectName(QStringLiteral("SearchLabe"));
        SearchLabe->setGeometry(QRect(160, 50, 61, 16));
        SpecificLabel = new QLabel(SearchMember);
        SpecificLabel->setObjectName(QStringLiteral("SpecificLabel"));
        SpecificLabel->setGeometry(QRect(30, 20, 131, 16));
        DeleteMember = new QPushButton(SearchMember);
        DeleteMember->setObjectName(QStringLiteral("DeleteMember"));
        DeleteMember->setGeometry(QRect(250, 430, 81, 23));
        TabMenu->addTab(SearchMember, QString());
        ReportSales = new QWidget();
        ReportSales->setObjectName(QStringLiteral("ReportSales"));
        lineEdit = new QLineEdit(ReportSales);
        lineEdit->setObjectName(QStringLiteral("lineEdit"));
        lineEdit->setGeometry(QRect(20, 120, 201, 20));
        label = new QLabel(ReportSales);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(20, 20, 141, 16));
        line = new QFrame(ReportSales);
        line->setObjectName(QStringLiteral("line"));
        line->setGeometry(QRect(350, 50, 20, 411));
        line->setFrameShape(QFrame::VLine);
        line->setFrameShadow(QFrame::Sunken);
        line_2 = new QFrame(ReportSales);
        line_2->setObjectName(QStringLiteral("line_2"));
        line_2->setGeometry(QRect(0, 40, 731, 20));
        line_2->setFrameShape(QFrame::HLine);
        line_2->setFrameShadow(QFrame::Sunken);
        label_2 = new QLabel(ReportSales);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(20, 60, 91, 16));
        label_3 = new QLabel(ReportSales);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(380, 60, 151, 16));
        line_3 = new QFrame(ReportSales);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-3, 80, 731, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        label_4 = new QLabel(ReportSales);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(20, 100, 141, 16));
        label_5 = new QLabel(ReportSales);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(20, 150, 211, 16));
        lineEdit_2 = new QLineEdit(ReportSales);
        lineEdit_2->setObjectName(QStringLiteral("lineEdit_2"));
        lineEdit_2->setGeometry(QRect(20, 170, 113, 20));
        label_6 = new QLabel(ReportSales);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(20, 200, 131, 16));
        spinBox = new QSpinBox(ReportSales);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(20, 220, 42, 22));
        lineEdit_3 = new QLineEdit(ReportSales);
        lineEdit_3->setObjectName(QStringLiteral("lineEdit_3"));
        lineEdit_3->setGeometry(QRect(20, 270, 113, 20));
        label_7 = new QLabel(ReportSales);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(20, 250, 91, 16));
        dateEdit = new QDateEdit(ReportSales);
        dateEdit->setObjectName(QStringLiteral("dateEdit"));
        dateEdit->setGeometry(QRect(20, 320, 110, 22));
        label_8 = new QLabel(ReportSales);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(20, 300, 111, 16));
        lineEdit_4 = new QLineEdit(ReportSales);
        lineEdit_4->setObjectName(QStringLiteral("lineEdit_4"));
        lineEdit_4->setGeometry(QRect(390, 120, 113, 20));
        label_9 = new QLabel(ReportSales);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(390, 100, 61, 16));
        pushButton = new QPushButton(ReportSales);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(174, 430, 151, 23));
        pushButton_2 = new QPushButton(ReportSales);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(554, 430, 161, 23));
        TabMenu->addTab(ReportSales, QString());
        Help = new QPushButton(MainProgram);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(630, 530, 75, 23));
        Exit = new QPushButton(MainProgram);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(720, 530, 75, 23));

        retranslateUi(MainProgram);

        TabMenu->setCurrentIndex(1);


        QMetaObject::connectSlotsByName(MainProgram);
    } // setupUi

    void retranslateUi(QDialog *MainProgram)
    {
        MainProgram->setWindowTitle(QApplication::translate("MainProgram", "Warehouse Manager 1998", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem = TransactionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainProgram", "Date Purchased", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem1 = TransactionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainProgram", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem2 = TransactionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainProgram", "Product", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem3 = TransactionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainProgram", "Quantity", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem4 = TransactionTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainProgram", "Product Price", Q_NULLPTR));
        GenerateReport->setText(QApplication::translate("MainProgram", "Generate", Q_NULLPTR));
        reportPrompt->setText(QApplication::translate("MainProgram", "Generate Sales Report", Q_NULLPTR));
        TabMenu->setTabText(TabMenu->indexOf(Transaction), QApplication::translate("MainProgram", "Transaction History", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem5 = MemberTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainProgram", "Member Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = MemberTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainProgram", "Member ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = MemberTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainProgram", "Member Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = MemberTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainProgram", "Rebate", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = MemberTable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainProgram", "Expiration Date", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = MemberTable->horizontalHeaderItem(5);
        ___qtablewidgetitem10->setText(QApplication::translate("MainProgram", "Active", Q_NULLPTR));
        DisplayLabel->setText(QApplication::translate("MainProgram", "Display Members:", Q_NULLPTR));
        DisplayOption->clear();
        DisplayOption->insertItems(0, QStringList()
         << QApplication::translate("MainProgram", "All Members", Q_NULLPTR)
         << QApplication::translate("MainProgram", "Executive Members", Q_NULLPTR)
         << QApplication::translate("MainProgram", "Normal Members", Q_NULLPTR)
        );
        pushButton_3->setText(QApplication::translate("MainProgram", "Open Memberlist File", Q_NULLPTR));
        TabMenu->setTabText(TabMenu->indexOf(MemberList), QApplication::translate("MainProgram", "MemberList", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = ItemStatstable->horizontalHeaderItem(0);
        ___qtablewidgetitem11->setText(QApplication::translate("MainProgram", "Item", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = ItemStatstable->horizontalHeaderItem(1);
        ___qtablewidgetitem12->setText(QApplication::translate("MainProgram", "Price ($)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = ItemStatstable->horizontalHeaderItem(2);
        ___qtablewidgetitem13->setText(QApplication::translate("MainProgram", "# of units sold", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = ItemStatstable->horizontalHeaderItem(3);
        ___qtablewidgetitem14->setText(QApplication::translate("MainProgram", "Available for Sale", Q_NULLPTR));
        ItemSalesStats->setText(QApplication::translate("MainProgram", "Item sales statistics", Q_NULLPTR));
        TabMenu->setTabText(TabMenu->indexOf(ItemInfo), QApplication::translate("MainProgram", "Item Sales Info", Q_NULLPTR));
        MemberSearchInput->setText(QApplication::translate("MainProgram", "Enter member", Q_NULLPTR));
        AddMember->setText(QApplication::translate("MainProgram", "Add Member", Q_NULLPTR));
        SearchOption->clear();
        SearchOption->insertItems(0, QStringList()
         << QApplication::translate("MainProgram", "Search Type", Q_NULLPTR)
         << QApplication::translate("MainProgram", "NAME", Q_NULLPTR)
         << QApplication::translate("MainProgram", "ID", Q_NULLPTR)
        );
        SearchLabe->setText(QApplication::translate("MainProgram", "Search By:", Q_NULLPTR));
        SpecificLabel->setText(QApplication::translate("MainProgram", "Specific Member Search", Q_NULLPTR));
        DeleteMember->setText(QApplication::translate("MainProgram", "Delete Member", Q_NULLPTR));
        TabMenu->setTabText(TabMenu->indexOf(SearchMember), QApplication::translate("MainProgram", "Search Members", Q_NULLPTR));
        label->setText(QApplication::translate("MainProgram", "Report Transactions", Q_NULLPTR));
        label_2->setText(QApplication::translate("MainProgram", "Manual Report", Q_NULLPTR));
        label_3->setText(QApplication::translate("MainProgram", "Report via transaction File", Q_NULLPTR));
        label_4->setText(QApplication::translate("MainProgram", "Name of Product sold", Q_NULLPTR));
        label_5->setText(QApplication::translate("MainProgram", "Cost of Product", Q_NULLPTR));
        label_6->setText(QApplication::translate("MainProgram", "# of Product Sold", Q_NULLPTR));
        label_7->setText(QApplication::translate("MainProgram", "ID of Buyer", Q_NULLPTR));
        label_8->setText(QApplication::translate("MainProgram", "Date Bought", Q_NULLPTR));
        lineEdit_4->setText(QString());
        label_9->setText(QApplication::translate("MainProgram", "File Name:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainProgram", "Complete Manual Report", Q_NULLPTR));
        pushButton_2->setText(QApplication::translate("MainProgram", "Report File Contents", Q_NULLPTR));
        TabMenu->setTabText(TabMenu->indexOf(ReportSales), QApplication::translate("MainProgram", "Report Sales", Q_NULLPTR));
        Help->setText(QApplication::translate("MainProgram", "Help", Q_NULLPTR));
        Exit->setText(QApplication::translate("MainProgram", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui
{
class MainProgram: public Ui_MainProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROGRAM_H
