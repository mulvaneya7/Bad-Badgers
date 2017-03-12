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
    QLabel *MemberListError;
    QPushButton *SaveButton;
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
    QFrame *line_4;
    QFrame *line_5;
    QLineEdit *MemberSearchInput_2;
    QLabel *SearchLabe_2;
    QComboBox *SearchOption_2;
    QLabel *label;
    QWidget *ReportSales;
    QLineEdit *ManualProductName;
    QLabel *ReportTransactionsLabel;
    QFrame *line;
    QFrame *line_2;
    QLabel *ManualReportLalel;
    QLabel *RepoerfileFile;
    QFrame *line_3;
    QLabel *Productsold;
    QLabel *CostofProductLabel;
    QLineEdit *CostProdcutInpit;
    QLabel *productSoldLabel;
    QSpinBox *spinBox;
    QLineEdit *IDofBuyer;
    QLabel *IDInputReportSales;
    QDateEdit *Manualreportbutton;
    QLabel *DateBoughtLabel;
    QLineEdit *FileDiectoryReportSales;
    QLabel *FileNameInput;
    QPushButton *pushButton;
    QPushButton *ReportFileContents;
    QPushButton *Filebrowser;
    QLabel *ManualReportError;
    QPushButton *Help;
    QPushButton *Exit;

    void setupUi(QDialog *MainProgram)
    {
        if (MainProgram->objectName().isEmpty())
            MainProgram->setObjectName(QStringLiteral("MainProgram"));
        MainProgram->resize(826, 564);
        TabMenu = new QTabWidget(MainProgram);
        TabMenu->setObjectName(QStringLiteral("TabMenu"));
        TabMenu->setGeometry(QRect(40, 30, 733, 491));
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
        if (MemberTable->columnCount() < 5)
            MemberTable->setColumnCount(5);
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
        MemberTable->setObjectName(QStringLiteral("MemberTable"));
        MemberTable->setGeometry(QRect(100, 50, 502, 371));
        DisplayLabel = new QLabel(MemberList);
        DisplayLabel->setObjectName(QStringLiteral("DisplayLabel"));
        DisplayLabel->setGeometry(QRect(20, 20, 91, 21));
        DisplayOption = new QComboBox(MemberList);
        DisplayOption->setObjectName(QStringLiteral("DisplayOption"));
        DisplayOption->setGeometry(QRect(110, 20, 111, 22));
        pushButton_3 = new QPushButton(MemberList);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(430, 430, 171, 23));
        MemberListError = new QLabel(MemberList);
        MemberListError->setObjectName(QStringLiteral("MemberListError"));
        MemberListError->setGeometry(QRect(100, 430, 141, 21));
        SaveButton = new QPushButton(MemberList);
        SaveButton->setObjectName(QStringLiteral("SaveButton"));
        SaveButton->setGeometry(QRect(270, 430, 141, 23));
        TabMenu->addTab(MemberList, QString());
        ItemInfo = new QWidget();
        ItemInfo->setObjectName(QStringLiteral("ItemInfo"));
        ItemStatstable = new QTableWidget(ItemInfo);
        if (ItemStatstable->columnCount() < 5)
            ItemStatstable->setColumnCount(5);
        QTableWidgetItem *__qtablewidgetitem10 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(0, __qtablewidgetitem10);
        QTableWidgetItem *__qtablewidgetitem11 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(1, __qtablewidgetitem11);
        QTableWidgetItem *__qtablewidgetitem12 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(2, __qtablewidgetitem12);
        QTableWidgetItem *__qtablewidgetitem13 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(3, __qtablewidgetitem13);
        QTableWidgetItem *__qtablewidgetitem14 = new QTableWidgetItem();
        ItemStatstable->setHorizontalHeaderItem(4, __qtablewidgetitem14);
        ItemStatstable->setObjectName(QStringLiteral("ItemStatstable"));
        ItemStatstable->setGeometry(QRect(30, 30, 501, 421));
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
        if (MemberDataTable->rowCount() < 6)
            MemberDataTable->setRowCount(6);
        QTableWidgetItem *__qtablewidgetitem15 = new QTableWidgetItem();
        __qtablewidgetitem15->setTextAlignment(Qt::AlignLeading|Qt::AlignBottom);
        MemberDataTable->setVerticalHeaderItem(0, __qtablewidgetitem15);
        QTableWidgetItem *__qtablewidgetitem16 = new QTableWidgetItem();
        MemberDataTable->setVerticalHeaderItem(1, __qtablewidgetitem16);
        QTableWidgetItem *__qtablewidgetitem17 = new QTableWidgetItem();
        MemberDataTable->setVerticalHeaderItem(2, __qtablewidgetitem17);
        QTableWidgetItem *__qtablewidgetitem18 = new QTableWidgetItem();
        MemberDataTable->setVerticalHeaderItem(3, __qtablewidgetitem18);
        QTableWidgetItem *__qtablewidgetitem19 = new QTableWidgetItem();
        MemberDataTable->setVerticalHeaderItem(4, __qtablewidgetitem19);
        QTableWidgetItem *__qtablewidgetitem20 = new QTableWidgetItem();
        MemberDataTable->setVerticalHeaderItem(5, __qtablewidgetitem20);
        MemberDataTable->setObjectName(QStringLiteral("MemberDataTable"));
        MemberDataTable->setGeometry(QRect(10, 80, 341, 182));
        AddMember = new QPushButton(SearchMember);
        AddMember->setObjectName(QStringLiteral("AddMember"));
        AddMember->setGeometry(QRect(540, 220, 151, 23));
        SearchOption = new QComboBox(SearchMember);
        SearchOption->setObjectName(QStringLiteral("SearchOption"));
        SearchOption->setGeometry(QRect(240, 50, 91, 22));
        SearchLabe = new QLabel(SearchMember);
        SearchLabe->setObjectName(QStringLiteral("SearchLabe"));
        SearchLabe->setGeometry(QRect(560, 320, 61, 16));
        SpecificLabel = new QLabel(SearchMember);
        SpecificLabel->setObjectName(QStringLiteral("SpecificLabel"));
        SpecificLabel->setGeometry(QRect(30, 20, 131, 16));
        DeleteMember = new QPushButton(SearchMember);
        DeleteMember->setObjectName(QStringLiteral("DeleteMember"));
        DeleteMember->setGeometry(QRect(480, 430, 241, 23));
        line_4 = new QFrame(SearchMember);
        line_4->setObjectName(QStringLiteral("line_4"));
        line_4->setGeometry(QRect(350, 10, 20, 441));
        line_4->setFrameShape(QFrame::VLine);
        line_4->setFrameShadow(QFrame::Sunken);
        line_5 = new QFrame(SearchMember);
        line_5->setObjectName(QStringLiteral("line_5"));
        line_5->setGeometry(QRect(360, 260, 371, 20));
        line_5->setFrameShape(QFrame::HLine);
        line_5->setFrameShadow(QFrame::Sunken);
        MemberSearchInput_2 = new QLineEdit(SearchMember);
        MemberSearchInput_2->setObjectName(QStringLiteral("MemberSearchInput_2"));
        MemberSearchInput_2->setGeometry(QRect(390, 320, 161, 20));
        SearchLabe_2 = new QLabel(SearchMember);
        SearchLabe_2->setObjectName(QStringLiteral("SearchLabe_2"));
        SearchLabe_2->setGeometry(QRect(180, 50, 61, 16));
        SearchOption_2 = new QComboBox(SearchMember);
        SearchOption_2->setObjectName(QStringLiteral("SearchOption_2"));
        SearchOption_2->setGeometry(QRect(630, 320, 91, 22));
        label = new QLabel(SearchMember);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(390, 350, 201, 16));
        TabMenu->addTab(SearchMember, QString());
        ReportSales = new QWidget();
        ReportSales->setObjectName(QStringLiteral("ReportSales"));
        ManualProductName = new QLineEdit(ReportSales);
        ManualProductName->setObjectName(QStringLiteral("ManualProductName"));
        ManualProductName->setGeometry(QRect(20, 120, 201, 20));
        ReportTransactionsLabel = new QLabel(ReportSales);
        ReportTransactionsLabel->setObjectName(QStringLiteral("ReportTransactionsLabel"));
        ReportTransactionsLabel->setGeometry(QRect(20, 20, 141, 16));
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
        ManualReportLalel = new QLabel(ReportSales);
        ManualReportLalel->setObjectName(QStringLiteral("ManualReportLalel"));
        ManualReportLalel->setGeometry(QRect(20, 60, 91, 16));
        RepoerfileFile = new QLabel(ReportSales);
        RepoerfileFile->setObjectName(QStringLiteral("RepoerfileFile"));
        RepoerfileFile->setGeometry(QRect(380, 60, 151, 16));
        line_3 = new QFrame(ReportSales);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-3, 80, 731, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        Productsold = new QLabel(ReportSales);
        Productsold->setObjectName(QStringLiteral("Productsold"));
        Productsold->setGeometry(QRect(20, 100, 141, 16));
        CostofProductLabel = new QLabel(ReportSales);
        CostofProductLabel->setObjectName(QStringLiteral("CostofProductLabel"));
        CostofProductLabel->setGeometry(QRect(20, 150, 211, 16));
        CostProdcutInpit = new QLineEdit(ReportSales);
        CostProdcutInpit->setObjectName(QStringLiteral("CostProdcutInpit"));
        CostProdcutInpit->setGeometry(QRect(20, 170, 113, 20));
        productSoldLabel = new QLabel(ReportSales);
        productSoldLabel->setObjectName(QStringLiteral("productSoldLabel"));
        productSoldLabel->setGeometry(QRect(20, 200, 131, 16));
        spinBox = new QSpinBox(ReportSales);
        spinBox->setObjectName(QStringLiteral("spinBox"));
        spinBox->setGeometry(QRect(20, 220, 42, 22));
        IDofBuyer = new QLineEdit(ReportSales);
        IDofBuyer->setObjectName(QStringLiteral("IDofBuyer"));
        IDofBuyer->setGeometry(QRect(20, 270, 113, 20));
        IDInputReportSales = new QLabel(ReportSales);
        IDInputReportSales->setObjectName(QStringLiteral("IDInputReportSales"));
        IDInputReportSales->setGeometry(QRect(20, 250, 91, 16));
        Manualreportbutton = new QDateEdit(ReportSales);
        Manualreportbutton->setObjectName(QStringLiteral("Manualreportbutton"));
        Manualreportbutton->setGeometry(QRect(20, 320, 110, 22));
        DateBoughtLabel = new QLabel(ReportSales);
        DateBoughtLabel->setObjectName(QStringLiteral("DateBoughtLabel"));
        DateBoughtLabel->setGeometry(QRect(20, 300, 111, 16));
        FileDiectoryReportSales = new QLineEdit(ReportSales);
        FileDiectoryReportSales->setObjectName(QStringLiteral("FileDiectoryReportSales"));
        FileDiectoryReportSales->setGeometry(QRect(390, 120, 311, 20));
        FileNameInput = new QLabel(ReportSales);
        FileNameInput->setObjectName(QStringLiteral("FileNameInput"));
        FileNameInput->setGeometry(QRect(390, 100, 61, 16));
        pushButton = new QPushButton(ReportSales);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(174, 430, 151, 23));
        ReportFileContents = new QPushButton(ReportSales);
        ReportFileContents->setObjectName(QStringLiteral("ReportFileContents"));
        ReportFileContents->setGeometry(QRect(554, 430, 161, 23));
        Filebrowser = new QPushButton(ReportSales);
        Filebrowser->setObjectName(QStringLiteral("Filebrowser"));
        Filebrowser->setGeometry(QRect(600, 150, 101, 23));
        ManualReportError = new QLabel(ReportSales);
        ManualReportError->setObjectName(QStringLiteral("ManualReportError"));
        ManualReportError->setGeometry(QRect(180, 410, 151, 16));
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
        ___qtablewidgetitem5->setText(QApplication::translate("MainProgram", "Member Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem6 = MemberTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainProgram", "Member ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem7 = MemberTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainProgram", "Member Type", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem8 = MemberTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainProgram", "Rebate", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem9 = MemberTable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainProgram", "Expiration Date", Q_NULLPTR));
        DisplayLabel->setText(QApplication::translate("MainProgram", "Display Members:", Q_NULLPTR));
        DisplayOption->clear();
        DisplayOption->insertItems(0, QStringList()
         << QApplication::translate("MainProgram", "All Members", Q_NULLPTR)
         << QApplication::translate("MainProgram", "Executive Members", Q_NULLPTR)
         << QApplication::translate("MainProgram", "Normal Members", Q_NULLPTR)
        );
        pushButton_3->setText(QApplication::translate("MainProgram", "Open Memberlist File", Q_NULLPTR));
        MemberListError->setText(QString());
        SaveButton->setText(QApplication::translate("MainProgram", "Save As:", Q_NULLPTR));
        TabMenu->setTabText(TabMenu->indexOf(MemberList), QApplication::translate("MainProgram", "MemberList", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem10 = ItemStatstable->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainProgram", "Item", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem11 = ItemStatstable->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainProgram", "Price ($)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem12 = ItemStatstable->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainProgram", "# of units sold", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem13 = ItemStatstable->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainProgram", "Total Revanue ($)", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem14 = ItemStatstable->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("MainProgram", "Available for Sale", Q_NULLPTR));
        ItemSalesStats->setText(QApplication::translate("MainProgram", "Item sales statistics", Q_NULLPTR));
        TabMenu->setTabText(TabMenu->indexOf(ItemInfo), QApplication::translate("MainProgram", "Item Sales Info", Q_NULLPTR));
        MemberSearchInput->setText(QApplication::translate("MainProgram", "Enter member", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem15 = MemberDataTable->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainProgram", "Name", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem16 = MemberDataTable->verticalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainProgram", "ID", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem17 = MemberDataTable->verticalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("MainProgram", "Total Spent", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem18 = MemberDataTable->verticalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("MainProgram", "Membership", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem19 = MemberDataTable->verticalHeaderItem(4);
        ___qtablewidgetitem19->setText(QApplication::translate("MainProgram", "Rebate", Q_NULLPTR));
        QTableWidgetItem *___qtablewidgetitem20 = MemberDataTable->verticalHeaderItem(5);
        ___qtablewidgetitem20->setText(QApplication::translate("MainProgram", "MemberShip Reccomendation", Q_NULLPTR));
        AddMember->setText(QApplication::translate("MainProgram", "Add New Member", Q_NULLPTR));
        SearchOption->clear();
        SearchOption->insertItems(0, QStringList()
         << QApplication::translate("MainProgram", "Search Type", Q_NULLPTR)
         << QApplication::translate("MainProgram", "NAME", Q_NULLPTR)
         << QApplication::translate("MainProgram", "ID", Q_NULLPTR)
        );
        SearchLabe->setText(QApplication::translate("MainProgram", "Search By:", Q_NULLPTR));
        SpecificLabel->setText(QApplication::translate("MainProgram", "Specific Member Search", Q_NULLPTR));
        DeleteMember->setText(QApplication::translate("MainProgram", "Change Membership Status", Q_NULLPTR));
        MemberSearchInput_2->setText(QApplication::translate("MainProgram", "Enter member", Q_NULLPTR));
        SearchLabe_2->setText(QApplication::translate("MainProgram", "Search By:", Q_NULLPTR));
        SearchOption_2->clear();
        SearchOption_2->insertItems(0, QStringList()
         << QApplication::translate("MainProgram", "Search Type", Q_NULLPTR)
         << QApplication::translate("MainProgram", "NAME", Q_NULLPTR)
         << QApplication::translate("MainProgram", "ID", Q_NULLPTR)
        );
        label->setText(QApplication::translate("MainProgram", "Change MemberShip to:", Q_NULLPTR));
        TabMenu->setTabText(TabMenu->indexOf(SearchMember), QApplication::translate("MainProgram", "Search Members", Q_NULLPTR));
        ReportTransactionsLabel->setText(QApplication::translate("MainProgram", "Report Transactions", Q_NULLPTR));
        ManualReportLalel->setText(QApplication::translate("MainProgram", "Manual Report", Q_NULLPTR));
        RepoerfileFile->setText(QApplication::translate("MainProgram", "Report via transaction File", Q_NULLPTR));
        Productsold->setText(QApplication::translate("MainProgram", "Name of Product sold", Q_NULLPTR));
        CostofProductLabel->setText(QApplication::translate("MainProgram", "Cost of Product", Q_NULLPTR));
        productSoldLabel->setText(QApplication::translate("MainProgram", "# of Product Sold", Q_NULLPTR));
        IDInputReportSales->setText(QApplication::translate("MainProgram", "ID of Buyer", Q_NULLPTR));
        DateBoughtLabel->setText(QApplication::translate("MainProgram", "Date Bought", Q_NULLPTR));
        FileDiectoryReportSales->setText(QString());
        FileNameInput->setText(QApplication::translate("MainProgram", "File Name:", Q_NULLPTR));
        pushButton->setText(QApplication::translate("MainProgram", "Complete Manual Report", Q_NULLPTR));
        ReportFileContents->setText(QApplication::translate("MainProgram", "Report File Contents", Q_NULLPTR));
        Filebrowser->setText(QApplication::translate("MainProgram", "Browse:", Q_NULLPTR));
        ManualReportError->setText(QString());
        TabMenu->setTabText(TabMenu->indexOf(ReportSales), QApplication::translate("MainProgram", "Report Sales", Q_NULLPTR));
        Help->setText(QApplication::translate("MainProgram", "Help", Q_NULLPTR));
        Exit->setText(QApplication::translate("MainProgram", "Exit", Q_NULLPTR));
    } // retranslateUi

};

namespace Ui {
    class MainProgram: public Ui_MainProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROGRAM_H
