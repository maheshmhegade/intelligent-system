#include <kdialog.h>
#include <klocale.h>

/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created: Thu May 23 11:11:30 2013
**      by: Qt User Interface Compiler version 4.8.4
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_MAINWINDOW_H
#define UI_MAINWINDOW_H

#include <QtCore/QVariant>
#include <QtGui/QAction>
#include <QtGui/QApplication>
#include <QtGui/QButtonGroup>
#include <QtGui/QComboBox>
#include <QtGui/QFormLayout>
#include <QtGui/QGraphicsView>
#include <QtGui/QHBoxLayout>
#include <QtGui/QHeaderView>
#include <QtGui/QLabel>
#include <QtGui/QLineEdit>
#include <QtGui/QMainWindow>
#include <QtGui/QMenuBar>
#include <QtGui/QPushButton>
#include <QtGui/QStatusBar>
#include <QtGui/QToolBar>
#include <QtGui/QVBoxLayout>
#include <QtGui/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QVBoxLayout *verticalLayout_3;
    QHBoxLayout *horizontalLayout;
    QVBoxLayout *verticalLayout_2;
    QCustomPlot *widget;
    QVBoxLayout *verticalLayout;
    QFormLayout *formLayout;
    QLabel *frequencylabel;
    QLineEdit *frequencylineEdit;
    QLabel *voltagelabel;
    QLineEdit *voltagelineEdit;
    QPushButton *SaveFacePB;
    QLineEdit *FaceNameLE;
    QGraphicsView *FaceGV;
    QPushButton *DetectFacePB;
    QPushButton *RecognizeFacePB;
    QPushButton *applypushButton;
    QLabel *label_2;
    QComboBox *wavecomboBox;
    QLabel *label;
    QLineEdit *durationlineEdit;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QString::fromUtf8("MainWindow"));
        MainWindow->resize(908, 612);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QString::fromUtf8("centralWidget"));
        verticalLayout_3 = new QVBoxLayout(centralWidget);
        verticalLayout_3->setSpacing(6);
        verticalLayout_3->setContentsMargins(11, 11, 11, 11);
        verticalLayout_3->setObjectName(QString::fromUtf8("verticalLayout_3"));
        horizontalLayout = new QHBoxLayout();
        horizontalLayout->setSpacing(6);
        horizontalLayout->setObjectName(QString::fromUtf8("horizontalLayout"));
        verticalLayout_2 = new QVBoxLayout();
        verticalLayout_2->setSpacing(6);
        verticalLayout_2->setObjectName(QString::fromUtf8("verticalLayout_2"));
        widget = new QCustomPlot(centralWidget);
        widget->setObjectName(QString::fromUtf8("widget"));
        QSizePolicy sizePolicy(QSizePolicy::Expanding, QSizePolicy::Preferred);
        sizePolicy.setHorizontalStretch(0);
        sizePolicy.setVerticalStretch(0);
        sizePolicy.setHeightForWidth(widget->sizePolicy().hasHeightForWidth());
        widget->setSizePolicy(sizePolicy);
        widget->setMinimumSize(QSize(0, 0));

        verticalLayout_2->addWidget(widget);


        horizontalLayout->addLayout(verticalLayout_2);

        verticalLayout = new QVBoxLayout();
        verticalLayout->setSpacing(6);
        verticalLayout->setObjectName(QString::fromUtf8("verticalLayout"));
        verticalLayout->setSizeConstraint(QLayout::SetDefaultConstraint);
        verticalLayout->setContentsMargins(0, -1, -1, -1);
        formLayout = new QFormLayout();
        formLayout->setSpacing(6);
        formLayout->setObjectName(QString::fromUtf8("formLayout"));
        formLayout->setSizeConstraint(QLayout::SetMinimumSize);
        formLayout->setFieldGrowthPolicy(QFormLayout::ExpandingFieldsGrow);
        frequencylabel = new QLabel(centralWidget);
        frequencylabel->setObjectName(QString::fromUtf8("frequencylabel"));

        formLayout->setWidget(2, QFormLayout::LabelRole, frequencylabel);

        frequencylineEdit = new QLineEdit(centralWidget);
        frequencylineEdit->setObjectName(QString::fromUtf8("frequencylineEdit"));

        formLayout->setWidget(2, QFormLayout::FieldRole, frequencylineEdit);

        voltagelabel = new QLabel(centralWidget);
        voltagelabel->setObjectName(QString::fromUtf8("voltagelabel"));

        formLayout->setWidget(4, QFormLayout::LabelRole, voltagelabel);

        voltagelineEdit = new QLineEdit(centralWidget);
        voltagelineEdit->setObjectName(QString::fromUtf8("voltagelineEdit"));

        formLayout->setWidget(4, QFormLayout::FieldRole, voltagelineEdit);

        SaveFacePB = new QPushButton(centralWidget);
        SaveFacePB->setObjectName(QString::fromUtf8("SaveFacePB"));

        formLayout->setWidget(10, QFormLayout::LabelRole, SaveFacePB);

        FaceNameLE = new QLineEdit(centralWidget);
        FaceNameLE->setObjectName(QString::fromUtf8("FaceNameLE"));

        formLayout->setWidget(10, QFormLayout::FieldRole, FaceNameLE);

        FaceGV = new QGraphicsView(centralWidget);
        FaceGV->setObjectName(QString::fromUtf8("FaceGV"));

        formLayout->setWidget(9, QFormLayout::SpanningRole, FaceGV);

        DetectFacePB = new QPushButton(centralWidget);
        DetectFacePB->setObjectName(QString::fromUtf8("DetectFacePB"));

        formLayout->setWidget(7, QFormLayout::LabelRole, DetectFacePB);

        RecognizeFacePB = new QPushButton(centralWidget);
        RecognizeFacePB->setObjectName(QString::fromUtf8("RecognizeFacePB"));

        formLayout->setWidget(7, QFormLayout::FieldRole, RecognizeFacePB);

        applypushButton = new QPushButton(centralWidget);
        applypushButton->setObjectName(QString::fromUtf8("applypushButton"));

        formLayout->setWidget(6, QFormLayout::LabelRole, applypushButton);

        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QString::fromUtf8("label_2"));

        formLayout->setWidget(0, QFormLayout::LabelRole, label_2);

        wavecomboBox = new QComboBox(centralWidget);
        wavecomboBox->setObjectName(QString::fromUtf8("wavecomboBox"));

        formLayout->setWidget(0, QFormLayout::FieldRole, wavecomboBox);

        label = new QLabel(centralWidget);
        label->setObjectName(QString::fromUtf8("label"));

        formLayout->setWidget(5, QFormLayout::LabelRole, label);

        durationlineEdit = new QLineEdit(centralWidget);
        durationlineEdit->setObjectName(QString::fromUtf8("durationlineEdit"));

        formLayout->setWidget(5, QFormLayout::FieldRole, durationlineEdit);


        verticalLayout->addLayout(formLayout);


        horizontalLayout->addLayout(verticalLayout);

        horizontalLayout->setStretch(0, 1);

        verticalLayout_3->addLayout(horizontalLayout);

        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QString::fromUtf8("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 908, 20));
        MainWindow->setMenuBar(menuBar);
        mainToolBar = new QToolBar(MainWindow);
        mainToolBar->setObjectName(QString::fromUtf8("mainToolBar"));
        MainWindow->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QString::fromUtf8("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(tr2i18n("MainWindow", 0));
        frequencylabel->setText(tr2i18n("Frequency", 0));
        voltagelabel->setText(tr2i18n("Voltage", 0));
        SaveFacePB->setText(tr2i18n("Save", 0));
        DetectFacePB->setText(tr2i18n("Detect face", 0));
        RecognizeFacePB->setText(tr2i18n("Recognize face", 0));
        applypushButton->setText(tr2i18n("Generate", 0));
        label_2->setText(tr2i18n("waveform", 0));
        wavecomboBox->clear();
        wavecomboBox->insertItems(0, QStringList()
         << tr2i18n("Sin", 0)
         << tr2i18n("Cos", 0)
         << tr2i18n("Triangular", 0)
         << tr2i18n("Square", 0)
         << tr2i18n("Ramp", 0)
        );
        label->setText(tr2i18n("Duration", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // MAINWINDOW_H

