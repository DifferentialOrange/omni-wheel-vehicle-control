/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.10.1
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
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QTextBrowser>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>
#include "qcustomplot.h"

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QCustomPlot *PlotWidget_trajectory;
    QLineEdit *lineEdit_nu_1_0;
    QLabel *label;
    QLabel *label_2;
    QLineEdit *lineEdit_nu_2_0;
    QLabel *label_3;
    QLineEdit *lineEdit_nu_3_0;
    QLabel *label_4;
    QLineEdit *lineEdit_nu_1_T;
    QLabel *label_5;
    QLineEdit *lineEdit_nu_2_T;
    QLineEdit *lineEdit_nu_3_T;
    QLabel *label_6;
    QLabel *label_7;
    QLineEdit *lineEdit_x_T;
    QLabel *label_8;
    QLineEdit *lineEdit_y_T;
    QLineEdit *lineEdit_theta_T;
    QLabel *label_9;
    QLabel *label_10;
    QLineEdit *lineEdit_t_sw;
    QLabel *label_11;
    QLineEdit *lineEdit_T;
    QPushButton *pushButton_compute;
    QPushButton *pushButton_generate;
    QTextBrowser *textBrowser_controls;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(863, 480);
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        PlotWidget_trajectory = new QCustomPlot(centralWidget);
        PlotWidget_trajectory->setObjectName(QStringLiteral("PlotWidget_trajectory"));
        PlotWidget_trajectory->setGeometry(QRect(10, 10, 431, 331));
        lineEdit_nu_1_0 = new QLineEdit(centralWidget);
        lineEdit_nu_1_0->setObjectName(QStringLiteral("lineEdit_nu_1_0"));
        lineEdit_nu_1_0->setGeometry(QRect(450, 40, 113, 25));
        label = new QLabel(centralWidget);
        label->setObjectName(QStringLiteral("label"));
        label->setGeometry(QRect(450, 10, 67, 17));
        label_2 = new QLabel(centralWidget);
        label_2->setObjectName(QStringLiteral("label_2"));
        label_2->setGeometry(QRect(450, 80, 67, 17));
        lineEdit_nu_2_0 = new QLineEdit(centralWidget);
        lineEdit_nu_2_0->setObjectName(QStringLiteral("lineEdit_nu_2_0"));
        lineEdit_nu_2_0->setGeometry(QRect(450, 110, 113, 25));
        label_3 = new QLabel(centralWidget);
        label_3->setObjectName(QStringLiteral("label_3"));
        label_3->setGeometry(QRect(450, 150, 67, 17));
        lineEdit_nu_3_0 = new QLineEdit(centralWidget);
        lineEdit_nu_3_0->setObjectName(QStringLiteral("lineEdit_nu_3_0"));
        lineEdit_nu_3_0->setGeometry(QRect(450, 180, 113, 25));
        label_4 = new QLabel(centralWidget);
        label_4->setObjectName(QStringLiteral("label_4"));
        label_4->setGeometry(QRect(590, 10, 67, 17));
        lineEdit_nu_1_T = new QLineEdit(centralWidget);
        lineEdit_nu_1_T->setObjectName(QStringLiteral("lineEdit_nu_1_T"));
        lineEdit_nu_1_T->setGeometry(QRect(590, 40, 113, 25));
        label_5 = new QLabel(centralWidget);
        label_5->setObjectName(QStringLiteral("label_5"));
        label_5->setGeometry(QRect(590, 80, 67, 17));
        lineEdit_nu_2_T = new QLineEdit(centralWidget);
        lineEdit_nu_2_T->setObjectName(QStringLiteral("lineEdit_nu_2_T"));
        lineEdit_nu_2_T->setGeometry(QRect(590, 110, 113, 25));
        lineEdit_nu_3_T = new QLineEdit(centralWidget);
        lineEdit_nu_3_T->setObjectName(QStringLiteral("lineEdit_nu_3_T"));
        lineEdit_nu_3_T->setGeometry(QRect(590, 180, 113, 25));
        label_6 = new QLabel(centralWidget);
        label_6->setObjectName(QStringLiteral("label_6"));
        label_6->setGeometry(QRect(590, 150, 67, 17));
        label_7 = new QLabel(centralWidget);
        label_7->setObjectName(QStringLiteral("label_7"));
        label_7->setGeometry(QRect(720, 10, 67, 17));
        lineEdit_x_T = new QLineEdit(centralWidget);
        lineEdit_x_T->setObjectName(QStringLiteral("lineEdit_x_T"));
        lineEdit_x_T->setGeometry(QRect(720, 40, 113, 25));
        label_8 = new QLabel(centralWidget);
        label_8->setObjectName(QStringLiteral("label_8"));
        label_8->setGeometry(QRect(720, 80, 67, 17));
        lineEdit_y_T = new QLineEdit(centralWidget);
        lineEdit_y_T->setObjectName(QStringLiteral("lineEdit_y_T"));
        lineEdit_y_T->setGeometry(QRect(720, 110, 113, 25));
        lineEdit_theta_T = new QLineEdit(centralWidget);
        lineEdit_theta_T->setObjectName(QStringLiteral("lineEdit_theta_T"));
        lineEdit_theta_T->setGeometry(QRect(720, 180, 113, 25));
        label_9 = new QLabel(centralWidget);
        label_9->setObjectName(QStringLiteral("label_9"));
        label_9->setGeometry(QRect(720, 150, 67, 17));
        label_10 = new QLabel(centralWidget);
        label_10->setObjectName(QStringLiteral("label_10"));
        label_10->setGeometry(QRect(650, 220, 67, 17));
        lineEdit_t_sw = new QLineEdit(centralWidget);
        lineEdit_t_sw->setObjectName(QStringLiteral("lineEdit_t_sw"));
        lineEdit_t_sw->setGeometry(QRect(510, 250, 113, 25));
        label_11 = new QLabel(centralWidget);
        label_11->setObjectName(QStringLiteral("label_11"));
        label_11->setGeometry(QRect(510, 220, 67, 17));
        lineEdit_T = new QLineEdit(centralWidget);
        lineEdit_T->setObjectName(QStringLiteral("lineEdit_T"));
        lineEdit_T->setGeometry(QRect(650, 250, 113, 25));
        pushButton_compute = new QPushButton(centralWidget);
        pushButton_compute->setObjectName(QStringLiteral("pushButton_compute"));
        pushButton_compute->setGeometry(QRect(520, 300, 89, 25));
        pushButton_generate = new QPushButton(centralWidget);
        pushButton_generate->setObjectName(QStringLiteral("pushButton_generate"));
        pushButton_generate->setGeometry(QRect(660, 300, 89, 25));
        textBrowser_controls = new QTextBrowser(centralWidget);
        textBrowser_controls->setObjectName(QStringLiteral("textBrowser_controls"));
        textBrowser_controls->setGeometry(QRect(10, 350, 431, 51));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 863, 22));
        MainWindow->setMenuBar(menuBar);
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
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "Control Predict", nullptr));
        label->setText(QApplication::translate("MainWindow", "nu_1(0)", nullptr));
        label_2->setText(QApplication::translate("MainWindow", "nu_2(0)", nullptr));
        label_3->setText(QApplication::translate("MainWindow", "nu_3(0)", nullptr));
        label_4->setText(QApplication::translate("MainWindow", "nu_1(T)", nullptr));
        label_5->setText(QApplication::translate("MainWindow", "nu_2(T)", nullptr));
        label_6->setText(QApplication::translate("MainWindow", "nu_3(T)", nullptr));
        label_7->setText(QApplication::translate("MainWindow", "x(T)", nullptr));
        label_8->setText(QApplication::translate("MainWindow", "y(T)", nullptr));
        label_9->setText(QApplication::translate("MainWindow", "theta(T)", nullptr));
        label_10->setText(QApplication::translate("MainWindow", "T", nullptr));
        label_11->setText(QApplication::translate("MainWindow", "t_sw", nullptr));
        pushButton_compute->setText(QApplication::translate("MainWindow", "Compute", nullptr));
        pushButton_generate->setText(QApplication::translate("MainWindow", "Generate", nullptr));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
