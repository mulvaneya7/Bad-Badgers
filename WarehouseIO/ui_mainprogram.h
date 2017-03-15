/********************************************************************************
** Form generated from reading UI file 'mainprogram.ui'
**
** Created by: Qt User Interface Compiler version 5.7.0
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
    QPushButton *RefreshItemSales;
    QFrame *line_6;
    QLabel *label_3;
    QLabel *newItemName;
    QPushButton *SubmitNewItem;
    QLineEdit *ItemSearchinput;
    QLabel *addItemLabel;
    QLineEdit *newItemNameInput;
    QLineEdit *newItemPriceInput;
    QLabel *newItemPrice;
    QPushButton *ToggleAvailability;
    QFrame *line_7;
    QLabel *itemAvailabilitLabel;
    QLabel *addItemCheckLabel;
    QWidget *SearchMember;
    QLineEdit *MemberSearchInput;
    QTableWidget *MemberDataTable;
    QPushButton *AddMember;
    QLabel *SpecificLabel;
    QPushButton *ChangeMemberShip;
    QFrame *line_4;
    QFrame *line_5;
    QLabel *ChangeMembershipLabel;
    QLabel *addName;
    QLabel *addId;
    QLabel *addDate;
    QLabel *addMember;
    QDateEdit *addDateEdit;
    QLineEdit *addNameEdit;
    QLineEdit *addIdEdit;
    QLineEdit *addMemberEdit;
    QLabel *addMemberError;
    QLineEdit *deleteMemberInput;
    QPushButton *deleteMember;
    QLabel *deletedMemberLabel;
    QWidget *ReportSales;
    QLineEdit *manualProductName;
    QLabel *ReportTransactionsLabel;
    QFrame *line;
    QFrame *line_2;
    QLabel *manualReportLabel;
    QLabel *RepoerfileFile;
    QFrame *line_3;
    QLabel *ProductSoldLabel;
    QLabel *productSoldLabel;
    QSpinBox *manualReportQuantity;
    QLineEdit *manualReportID;
    QLabel *IDInputReportSales;
    QDateEdit *manualReportDate;
    QLabel *DateBoughtLabel;
    QLineEdit *FileDiectoryReportSales;
    QLabel *FileNameInput;
    QPushButton *manualReportButton;
    QPushButton *ReportFileContents;
    QPushButton *Filebrowser;
    QLabel *manualReportError;
    QPushButton *SaveMasterFile;
    QPushButton *LoadMasterFile;
    QPushButton *Help;
    QPushButton *Exit;

    void setupUi(QDialog *MainProgram)
    {
        if (MainProgram->objectName().isEmpty())
            MainProgram->setObjectName(QStringLiteral("MainProgram"));
        MainProgram->resize(826, 564);
        TabMenu = new QTabWidget(MainProgram);
        TabMenu->setObjectName(QStringLiteral("TabMenu"));
        TabMenu->setGeometry(QRect(40, 30, 741, 491));
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
        TransactionTable->setGeometry(QRect(50, 20, 642, 351));
        TransactionTable->horizontalHeader()->setDefaultSectionSize(128);
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
        MemberTable->setGeometry(QRect(50, 50, 631, 371));
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
        ItemStatstable->setGeometry(QRect(100, 40, 541, 261));
        ItemSalesStats = new QLabel(ItemInfo);
        ItemSalesStats->setObjectName(QStringLiteral("ItemSalesStats"));
        ItemSalesStats->setGeometry(QRect(30, 10, 101, 16));
        RefreshItemSales = new QPushButton(ItemInfo);
        RefreshItemSales->setObjectName(QStringLiteral("RefreshItemSales"));
        RefreshItemSales->setGeometry(QRect(140, 10, 75, 23));
        line_6 = new QFrame(ItemInfo);
        line_6->setObjectName(QStringLiteral("line_6"));
        line_6->setGeometry(QRect(0, 340, 731, 16));
        line_6->setFrameShape(QFrame::HLine);
        line_6->setFrameShadow(QFrame::Sunken);
        label_3 = new QLabel(ItemInfo);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(40, 360, 241, 16));
        newItemName = new QLabel(ItemInfo);
        newItemName->setObjectName(QStringLiteral("newItemName"));
        newItemName->setGeometry(QRect(507, 380, 81, 16));
        SubmitNewItem = new QPushButton(ItemInfo);
        SubmitNewItem->setObjectName(QStringLiteral("SubmitNewItem"));
        SubmitNewItem->setGeometry(QRect(597, 440, 111, 23));
        ItemSearchinput = new QLineEdit(ItemInfo);
        ItemSearchinput->setObjectName(QStringLiteral("ItemSearchinput"));
        ItemSearchinput->setGeometry(QRect(27, 380, 201, 20));
        addItemLabel = new QLabel(ItemInfo);
        addItemLabel->setObjectName(QStringLiteral("addItemLabel"));
        addItemLabel->setGeometry(QRect(377, 360, 191, 16));
        newItemNameInput = new QLineEdit(ItemInfo);
        newItemNameInput->setObjectName(QStringLiteral("newItemNameInput"));
        newItemNameInput->setGeometry(QRect(377, 380, 113, 20));
        newItemPriceInput = new QLineEdit(ItemInfo);
        newItemPriceInput->setObjectName(QStringLiteral("newItemPriceInput"));
        newItemPriceInput->setGeometry(QRect(377, 410, 113, 20));
        newItemPrice = new QLabel(ItemInfo);
        newItemPrice->setObjectName(QStringLiteral("newItemPrice"));
        newItemPrice->setGeometry(QRect(507, 410, 91, 16));
        ToggleAvailability = new QPushButton(ItemInfo);
        ToggleAvailability->setObjectName(QStringLiteral("ToggleAvailability"));
        ToggleAvailability->setGeometry(QRect(241, 380, 101, 23));
        line_7 = new QFrame(ItemInfo);
        line_7->setObjectName(QStringLiteral("line_7"));
        line_7->setGeometry(QRect(350, 350, 20, 121));
        line_7->setFrameShape(QFrame::VLine);
        line_7->setFrameShadow(QFrame::Sunken);
        itemAvailabilitLabel = new QLabel(ItemInfo);
        itemAvailabilitLabel->setObjectName(QStringLiteral("itemAvailabilitLabel"));
        itemAvailabilitLabel->setGeometry(QRect(50, 410, 171, 16));
        addItemCheckLabel = new QLabel(ItemInfo);
        addItemCheckLabel->setObjectName(QStringLiteral("addItemCheckLabel"));
        addItemCheckLabel->setGeometry(QRect(380, 440, 151, 16));
        TabMenu->addTab(ItemInfo, QString());
        SearchMember = new QWidget();
        SearchMember->setObjectName(QStringLiteral("SearchMember"));
        MemberSearchInput = new QLineEdit(SearchMember);
        MemberSearchInput->setObjectName(QStringLiteral("MemberSearchInput"));
        MemberSearchInput->setGeometry(QRect(30, 110, 113, 20));
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
        MemberDataTable->setGeometry(QRect(10, 150, 341, 182));
        AddMember = new QPushButton(SearchMember);
        AddMember->setObjectName(QStringLiteral("AddMember"));
        AddMember->setGeometry(QRect(540, 220, 151, 23));
        SpecificLabel = new QLabel(SearchMember);
        SpecificLabel->setObjectName(QStringLiteral("SpecificLabel"));
        SpecificLabel->setGeometry(QRect(30, 80, 131, 16));
        ChangeMemberShip = new QPushButton(SearchMember);
        ChangeMemberShip->setObjectName(QStringLiteral("ChangeMemberShip"));
        ChangeMemberShip->setGeometry(QRect(60, 340, 241, 23));
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
        ChangeMembershipLabel = new QLabel(SearchMember);
        ChangeMembershipLabel->setObjectName(QStringLiteral("ChangeMembershipLabel"));
        ChangeMembershipLabel->setGeometry(QRect(50, 390, 261, 20));
        addName = new QLabel(SearchMember);
        addName->setObjectName(QStringLiteral("addName"));
        addName->setGeometry(QRect(380, 40, 47, 13));
        addId = new QLabel(SearchMember);
        addId->setObjectName(QStringLiteral("addId"));
        addId->setGeometry(QRect(380, 80, 47, 13));
        addDate = new QLabel(SearchMember);
        addDate->setObjectName(QStringLiteral("addDate"));
        addDate->setGeometry(QRect(380, 110, 71, 16));
        addMember = new QLabel(SearchMember);
        addMember->setObjectName(QStringLiteral("addMember"));
        addMember->setGeometry(QRect(380, 150, 71, 16));
        addDateEdit = new QDateEdit(SearchMember);
        addDateEdit->setObjectName(QStringLiteral("addDateEdit"));
        addDateEdit->setGeometry(QRect(460, 110, 110, 22));
        addNameEdit = new QLineEdit(SearchMember);
        addNameEdit->setObjectName(QStringLiteral("addNameEdit"));
        addNameEdit->setGeometry(QRect(450, 40, 171, 20));
        addIdEdit = new QLineEdit(SearchMember);
        addIdEdit->setObjectName(QStringLiteral("addIdEdit"));
        addIdEdit->setGeometry(QRect(450, 80, 171, 20));
        addMemberEdit = new QLineEdit(SearchMember);
        addMemberEdit->setObjectName(QStringLiteral("addMemberEdit"));
        addMemberEdit->setGeometry(QRect(450, 150, 171, 20));
        addMemberError = new QLabel(SearchMember);
        addMemberError->setObjectName(QStringLiteral("addMemberError"));
        addMemberError->setGeometry(QRect(380, 195, 231, 21));
        deleteMemberInput = new QLineEdit(SearchMember);
        deleteMemberInput->setObjectName(QStringLiteral("deleteMemberInput"));
        deleteMemberInput->setGeometry(QRect(400, 290, 161, 20));
        deleteMember = new QPushButton(SearchMember);
        deleteMember->setObjectName(QStringLiteral("deleteMember"));
        deleteMember->setGeometry(QRect(570, 290, 111, 23));
        deletedMemberLabel = new QLabel(SearchMember);
        deletedMemberLabel->setObjectName(QStringLiteral("deletedMemberLabel"));
        deletedMemberLabel->setGeometry(QRect(410, 320, 141, 16));
        TabMenu->addTab(SearchMember, QString());
        ReportSales = new QWidget();
        ReportSales->setObjectName(QStringLiteral("ReportSales"));
        manualProductName = new QLineEdit(ReportSales);
        manualProductName->setObjectName(QStringLiteral("manualProductName"));
        manualProductName->setGeometry(QRect(20, 120, 201, 20));
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
        manualReportLabel = new QLabel(ReportSales);
        manualReportLabel->setObjectName(QStringLiteral("manualReportLabel"));
        manualReportLabel->setGeometry(QRect(20, 60, 91, 16));
        RepoerfileFile = new QLabel(ReportSales);
        RepoerfileFile->setObjectName(QStringLiteral("RepoerfileFile"));
        RepoerfileFile->setGeometry(QRect(380, 60, 151, 16));
        line_3 = new QFrame(ReportSales);
        line_3->setObjectName(QStringLiteral("line_3"));
        line_3->setGeometry(QRect(-3, 80, 731, 20));
        line_3->setFrameShape(QFrame::HLine);
        line_3->setFrameShadow(QFrame::Sunken);
        ProductSoldLabel = new QLabel(ReportSales);
        ProductSoldLabel->setObjectName(QStringLiteral("ProductSoldLabel"));
        ProductSoldLabel->setGeometry(QRect(20, 100, 141, 16));
        productSoldLabel = new QLabel(ReportSales);
        productSoldLabel->setObjectName(QStringLiteral("productSoldLabel"));
        productSoldLabel->setGeometry(QRect(20, 150, 131, 16));
        manualReportQuantity = new QSpinBox(ReportSales);
        manualReportQuantity->setObjectName(QStringLiteral("manualReportQuantity"));
        manualReportQuantity->setGeometry(QRect(20, 170, 42, 22));
        manualReportID = new QLineEdit(ReportSales);
        manualReportID->setObjectName(QStringLiteral("manualReportID"));
        manualReportID->setGeometry(QRect(20, 220, 113, 20));
        IDInputReportSales = new QLabel(ReportSales);
        IDInputReportSales->setObjectName(QStringLiteral("IDInputReportSales"));
        IDInputReportSales->setGeometry(QRect(20, 200, 91, 16));
        manualReportDate = new QDateEdit(ReportSales);
        manualReportDate->setObjectName(QStringLiteral("manualReportDate"));
        manualReportDate->setGeometry(QRect(20, 270, 110, 22));
        DateBoughtLabel = new QLabel(ReportSales);
        DateBoughtLabel->setObjectName(QStringLiteral("DateBoughtLabel"));
        DateBoughtLabel->setGeometry(QRect(20, 250, 111, 16));
        FileDiectoryReportSales = new QLineEdit(ReportSales);
        FileDiectoryReportSales->setObjectName(QStringLiteral("FileDiectoryReportSales"));
        FileDiectoryReportSales->setGeometry(QRect(390, 120, 311, 20));
        FileNameInput = new QLabel(ReportSales);
        FileNameInput->setObjectName(QStringLiteral("FileNameInput"));
        FileNameInput->setGeometry(QRect(390, 100, 61, 16));
        manualReportButton = new QPushButton(ReportSales);
        manualReportButton->setObjectName(QStringLiteral("manualReportButton"));
        manualReportButton->setGeometry(QRect(174, 430, 151, 23));
        ReportFileContents = new QPushButton(ReportSales);
        ReportFileContents->setObjectName(QStringLiteral("ReportFileContents"));
        ReportFileContents->setGeometry(QRect(554, 430, 161, 23));
        Filebrowser = new QPushButton(ReportSales);
        Filebrowser->setObjectName(QStringLiteral("Filebrowser"));
        Filebrowser->setGeometry(QRect(600, 150, 101, 23));
        manualReportError = new QLabel(ReportSales);
        manualReportError->setObjectName(QStringLiteral("manualReportError"));
        manualReportError->setGeometry(QRect(180, 410, 151, 16));
        SaveMasterFile = new QPushButton(ReportSales);
        SaveMasterFile->setObjectName(QStringLiteral("SaveMasterFile"));
        SaveMasterFile->setGeometry(QRect(582, 10, 151, 32));
        LoadMasterFile = new QPushButton(ReportSales);
        LoadMasterFile->setObjectName(QStringLiteral("LoadMasterFile"));
        LoadMasterFile->setGeometry(QRect(410, 10, 171, 32));
        TabMenu->addTab(ReportSales, QString());
        Help = new QPushButton(MainProgram);
        Help->setObjectName(QStringLiteral("Help"));
        Help->setGeometry(QRect(630, 530, 75, 23));
        Exit = new QPushButton(MainProgram);
        Exit->setObjectName(QStringLiteral("Exit"));
        Exit->setGeometry(QRect(720, 530, 75, 23));

        retranslateUi(MainProgram);

        TabMenu->setCurrentIndex(4);


        QMetaObject::connectSlotsByName(MainProgram);
    } // setupUi

    void retranslateUi(QDialog *MainProgram)
    {
        MainProgram->setWindowTitle(QApplication::translate("MainProgram", "Warehouse Manager 1998", 0));
        QTableWidgetItem *___qtablewidgetitem = TransactionTable->horizontalHeaderItem(0);
        ___qtablewidgetitem->setText(QApplication::translate("MainProgram", "Date Purchased", 0));
        QTableWidgetItem *___qtablewidgetitem1 = TransactionTable->horizontalHeaderItem(1);
        ___qtablewidgetitem1->setText(QApplication::translate("MainProgram", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem2 = TransactionTable->horizontalHeaderItem(2);
        ___qtablewidgetitem2->setText(QApplication::translate("MainProgram", "Product", 0));
        QTableWidgetItem *___qtablewidgetitem3 = TransactionTable->horizontalHeaderItem(3);
        ___qtablewidgetitem3->setText(QApplication::translate("MainProgram", "Quantity", 0));
        QTableWidgetItem *___qtablewidgetitem4 = TransactionTable->horizontalHeaderItem(4);
        ___qtablewidgetitem4->setText(QApplication::translate("MainProgram", "Product Price", 0));
        DateInput->setDisplayFormat(QApplication::translate("MainProgram", "MM/dd/yyyy", 0));
        GenerateReport->setText(QApplication::translate("MainProgram", "Generate", 0));
        reportPrompt->setText(QApplication::translate("MainProgram", "Generate Sales Report", 0));
        TabMenu->setTabText(TabMenu->indexOf(Transaction), QApplication::translate("MainProgram", "Transaction History", 0));
        QTableWidgetItem *___qtablewidgetitem5 = MemberTable->horizontalHeaderItem(0);
        ___qtablewidgetitem5->setText(QApplication::translate("MainProgram", "Member Name", 0));
        QTableWidgetItem *___qtablewidgetitem6 = MemberTable->horizontalHeaderItem(1);
        ___qtablewidgetitem6->setText(QApplication::translate("MainProgram", "Member ID", 0));
        QTableWidgetItem *___qtablewidgetitem7 = MemberTable->horizontalHeaderItem(2);
        ___qtablewidgetitem7->setText(QApplication::translate("MainProgram", "Member Type", 0));
        QTableWidgetItem *___qtablewidgetitem8 = MemberTable->horizontalHeaderItem(3);
        ___qtablewidgetitem8->setText(QApplication::translate("MainProgram", "Rebate", 0));
        QTableWidgetItem *___qtablewidgetitem9 = MemberTable->horizontalHeaderItem(4);
        ___qtablewidgetitem9->setText(QApplication::translate("MainProgram", "Expiration Date", 0));
        DisplayLabel->setText(QApplication::translate("MainProgram", "Display Members:", 0));
        DisplayOption->clear();
        DisplayOption->insertItems(0, QStringList()
         << QApplication::translate("MainProgram", "All Members", 0)
         << QApplication::translate("MainProgram", "Executive Members", 0)
         << QApplication::translate("MainProgram", "Normal Members", 0)
        );
        pushButton_3->setText(QApplication::translate("MainProgram", "Open Memberlist File", 0));
        MemberListError->setText(QString());
        SaveButton->setText(QApplication::translate("MainProgram", "Save As:", 0));
        TabMenu->setTabText(TabMenu->indexOf(MemberList), QApplication::translate("MainProgram", "MemberList", 0));
        QTableWidgetItem *___qtablewidgetitem10 = ItemStatstable->horizontalHeaderItem(0);
        ___qtablewidgetitem10->setText(QApplication::translate("MainProgram", "Item", 0));
        QTableWidgetItem *___qtablewidgetitem11 = ItemStatstable->horizontalHeaderItem(1);
        ___qtablewidgetitem11->setText(QApplication::translate("MainProgram", "Price ($)", 0));
        QTableWidgetItem *___qtablewidgetitem12 = ItemStatstable->horizontalHeaderItem(2);
        ___qtablewidgetitem12->setText(QApplication::translate("MainProgram", "# of units sold", 0));
        QTableWidgetItem *___qtablewidgetitem13 = ItemStatstable->horizontalHeaderItem(3);
        ___qtablewidgetitem13->setText(QApplication::translate("MainProgram", "Total Revanue ($)", 0));
        QTableWidgetItem *___qtablewidgetitem14 = ItemStatstable->horizontalHeaderItem(4);
        ___qtablewidgetitem14->setText(QApplication::translate("MainProgram", "Available for Sale", 0));
        ItemSalesStats->setText(QApplication::translate("MainProgram", "Item sales statistics", 0));
        RefreshItemSales->setText(QApplication::translate("MainProgram", "Refresh", 0));
        label_3->setText(QApplication::translate("MainProgram", "Change item Avaliability", 0));
        newItemName->setText(QApplication::translate("MainProgram", "Item Name", 0));
        SubmitNewItem->setText(QApplication::translate("MainProgram", "Submit", 0));
        addItemLabel->setText(QApplication::translate("MainProgram", "Add item to inventory", 0));
        newItemPrice->setText(QApplication::translate("MainProgram", "Item Price", 0));
        ToggleAvailability->setText(QApplication::translate("MainProgram", "Toggle Availability", 0));
        itemAvailabilitLabel->setText(QApplication::translate("MainProgram", "Item changed to:", 0));
        addItemCheckLabel->setText(QApplication::translate("MainProgram", "Item added: ", 0));
        TabMenu->setTabText(TabMenu->indexOf(ItemInfo), QApplication::translate("MainProgram", "Item Sales Info", 0));
        MemberSearchInput->setText(QApplication::translate("MainProgram", "Enter member", 0));
        QTableWidgetItem *___qtablewidgetitem15 = MemberDataTable->verticalHeaderItem(0);
        ___qtablewidgetitem15->setText(QApplication::translate("MainProgram", "Name", 0));
        QTableWidgetItem *___qtablewidgetitem16 = MemberDataTable->verticalHeaderItem(1);
        ___qtablewidgetitem16->setText(QApplication::translate("MainProgram", "ID", 0));
        QTableWidgetItem *___qtablewidgetitem17 = MemberDataTable->verticalHeaderItem(2);
        ___qtablewidgetitem17->setText(QApplication::translate("MainProgram", "Total Spent", 0));
        QTableWidgetItem *___qtablewidgetitem18 = MemberDataTable->verticalHeaderItem(3);
        ___qtablewidgetitem18->setText(QApplication::translate("MainProgram", "Membership", 0));
        QTableWidgetItem *___qtablewidgetitem19 = MemberDataTable->verticalHeaderItem(4);
        ___qtablewidgetitem19->setText(QApplication::translate("MainProgram", "Rebate", 0));
        QTableWidgetItem *___qtablewidgetitem20 = MemberDataTable->verticalHeaderItem(5);
        ___qtablewidgetitem20->setText(QApplication::translate("MainProgram", "MemberShip Reccomendation", 0));
        AddMember->setText(QApplication::translate("MainProgram", "Add New Member", 0));
        SpecificLabel->setText(QApplication::translate("MainProgram", "Specific Member Search", 0));
        ChangeMemberShip->setText(QApplication::translate("MainProgram", "Change Membership Status", 0));
        ChangeMembershipLabel->setText(QApplication::translate("MainProgram", "Changed Membership to:", 0));
        addName->setText(QApplication::translate("MainProgram", "Name:", 0));
        addId->setText(QApplication::translate("MainProgram", "ID:", 0));
        addDate->setText(QApplication::translate("MainProgram", "Entry date:", 0));
        addMember->setText(QApplication::translate("MainProgram", "Membership:", 0));
        addDateEdit->setDisplayFormat(QApplication::translate("MainProgram", "MM/dd/yyyy", 0));
        addMemberError->setText(QApplication::translate("MainProgram", "To be added...", 0));
        deleteMember->setText(QApplication::translate("MainProgram", "Delete Member", 0));
        deletedMemberLabel->setText(QApplication::translate("MainProgram", "Member Deleted: ", 0));
        TabMenu->setTabText(TabMenu->indexOf(SearchMember), QApplication::translate("MainProgram", "Search Members", 0));
        ReportTransactionsLabel->setText(QApplication::translate("MainProgram", "Report Transactions", 0));
        manualReportLabel->setText(QApplication::translate("MainProgram", "Manual Report", 0));
        RepoerfileFile->setText(QApplication::translate("MainProgram", "Report via transaction File", 0));
        ProductSoldLabel->setText(QApplication::translate("MainProgram", "Name of Product sold", 0));
        productSoldLabel->setText(QApplication::translate("MainProgram", "# of Product Sold", 0));
        IDInputReportSales->setText(QApplication::translate("MainProgram", "ID of Buyer", 0));
        DateBoughtLabel->setText(QApplication::translate("MainProgram", "Date Bought", 0));
        FileDiectoryReportSales->setText(QString());
        FileNameInput->setText(QApplication::translate("MainProgram", "File Name:", 0));
        manualReportButton->setText(QApplication::translate("MainProgram", "Complete Manual Report", 0));
        ReportFileContents->setText(QApplication::translate("MainProgram", "Report File Contents", 0));
        Filebrowser->setText(QApplication::translate("MainProgram", "Browse:", 0));
        manualReportError->setText(QString());
        SaveMasterFile->setText(QApplication::translate("MainProgram", "Save To Master File", 0));
        LoadMasterFile->setText(QApplication::translate("MainProgram", "Load From Master File", 0));
        TabMenu->setTabText(TabMenu->indexOf(ReportSales), QApplication::translate("MainProgram", "Report Sales", 0));
        Help->setText(QApplication::translate("MainProgram", "Help", 0));
        Exit->setText(QApplication::translate("MainProgram", "Exit", 0));
    } // retranslateUi

};

namespace Ui {
    class MainProgram: public Ui_MainProgram {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINPROGRAM_H
