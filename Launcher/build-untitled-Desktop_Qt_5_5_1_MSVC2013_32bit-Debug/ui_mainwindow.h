/********************************************************************************
** Form generated from reading UI file 'mainwindow.ui'
**
** Created by: Qt User Interface Compiler version 5.5.1
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
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QPushButton>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_MainWindow
{
public:
    QWidget *centralWidget;
    QPushButton *pushButton;
    QPushButton *pushButton_2;
    QPushButton *pushButton_4;
    QPushButton *pushButton_5;
    QPushButton *pushButton_6;
    QPushButton *pushButton_7;
    QPushButton *pushButton_8;
    QPushButton *pushButton_9;
    QPushButton *pushButton_10;
    QPushButton *pushButton_11;
    QPushButton *pushButton_13;
    QPushButton *pushButton_14;
    QPushButton *pushButton_15;
    QPushButton *pushButton_16;
    QPushButton *pushButton_17;
    QPushButton *pushButton_18;
    QPushButton *pushButton_19;
    QPushButton *pushButton_20;
    QPushButton *pushButton_22;
    QPushButton *pushButton_3;
    QPushButton *pushButton_21;
    QPushButton *pushButton_12;
    QPushButton *pushButton_23;
    QPushButton *pushButton_24;
    QPushButton *pushButton_25;
    QMenuBar *menuBar;
    QStatusBar *statusBar;

    void setupUi(QMainWindow *MainWindow)
    {
        if (MainWindow->objectName().isEmpty())
            MainWindow->setObjectName(QStringLiteral("MainWindow"));
        MainWindow->resize(820, 483);
        QFont font;
        font.setFamily(QStringLiteral("Adobe Arabic"));
        font.setPointSize(9);
        font.setBold(false);
        font.setItalic(false);
        font.setUnderline(true);
        font.setWeight(50);
        MainWindow->setFont(font);
        MainWindow->setStyleSheet(QLatin1String("font: 9pt \"Adobe Arabic\";\n"
"text-decoration: underline;"));
        centralWidget = new QWidget(MainWindow);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        pushButton = new QPushButton(centralWidget);
        pushButton->setObjectName(QStringLiteral("pushButton"));
        pushButton->setGeometry(QRect(740, 410, 75, 23));
        pushButton->setCursor(QCursor(Qt::ArrowCursor));
        pushButton->setMouseTracking(false);
        pushButton->setStyleSheet(QStringLiteral(""));
        QIcon icon;
        QString iconThemeName = QStringLiteral("0");
        if (QIcon::hasThemeIcon(iconThemeName)) {
            icon = QIcon::fromTheme(iconThemeName);
        } else {
            icon.addFile(QStringLiteral("."), QSize(), QIcon::Normal, QIcon::Off);
        }
        pushButton->setIcon(icon);
        pushButton_2 = new QPushButton(centralWidget);
        pushButton_2->setObjectName(QStringLiteral("pushButton_2"));
        pushButton_2->setGeometry(QRect(150, 360, 91, 26));
        pushButton_2->setFont(font);
        pushButton_2->setFocusPolicy(Qt::StrongFocus);
        pushButton_2->setLayoutDirection(Qt::LeftToRight);
        pushButton_2->setStyleSheet(QStringLiteral("border-image: url(:/2/03.png);"));
        pushButton_2->setAutoDefault(false);
        pushButton_2->setFlat(true);
        pushButton_4 = new QPushButton(centralWidget);
        pushButton_4->setObjectName(QStringLiteral("pushButton_4"));
        pushButton_4->setGeometry(QRect(30, 80, 91, 26));
        pushButton_5 = new QPushButton(centralWidget);
        pushButton_5->setObjectName(QStringLiteral("pushButton_5"));
        pushButton_5->setGeometry(QRect(30, 120, 91, 26));
        pushButton_6 = new QPushButton(centralWidget);
        pushButton_6->setObjectName(QStringLiteral("pushButton_6"));
        pushButton_6->setGeometry(QRect(30, 160, 91, 26));
        pushButton_7 = new QPushButton(centralWidget);
        pushButton_7->setObjectName(QStringLiteral("pushButton_7"));
        pushButton_7->setGeometry(QRect(30, 200, 91, 26));
        pushButton_8 = new QPushButton(centralWidget);
        pushButton_8->setObjectName(QStringLiteral("pushButton_8"));
        pushButton_8->setGeometry(QRect(30, 240, 91, 26));
        pushButton_8->setFont(font);
        pushButton_8->setStyleSheet(QStringLiteral("border-image: url(:/2/04.PNG);"));
        pushButton_9 = new QPushButton(centralWidget);
        pushButton_9->setObjectName(QStringLiteral("pushButton_9"));
        pushButton_9->setGeometry(QRect(30, 280, 91, 26));
        pushButton_10 = new QPushButton(centralWidget);
        pushButton_10->setObjectName(QStringLiteral("pushButton_10"));
        pushButton_10->setGeometry(QRect(30, 320, 91, 26));
        pushButton_11 = new QPushButton(centralWidget);
        pushButton_11->setObjectName(QStringLiteral("pushButton_11"));
        pushButton_11->setGeometry(QRect(30, 360, 91, 26));
        pushButton_13 = new QPushButton(centralWidget);
        pushButton_13->setObjectName(QStringLiteral("pushButton_13"));
        pushButton_13->setGeometry(QRect(150, 40, 91, 26));
        pushButton_13->setStyleSheet(QStringLiteral("border-image: url(:/2/04.PNG);"));
        pushButton_14 = new QPushButton(centralWidget);
        pushButton_14->setObjectName(QStringLiteral("pushButton_14"));
        pushButton_14->setGeometry(QRect(150, 80, 91, 26));
        pushButton_15 = new QPushButton(centralWidget);
        pushButton_15->setObjectName(QStringLiteral("pushButton_15"));
        pushButton_15->setGeometry(QRect(150, 120, 91, 26));
        pushButton_16 = new QPushButton(centralWidget);
        pushButton_16->setObjectName(QStringLiteral("pushButton_16"));
        pushButton_16->setGeometry(QRect(150, 160, 91, 26));
        pushButton_16->setStyleSheet(QStringLiteral("border-image: url(:/2/04.PNG);"));
        pushButton_16->setAutoDefault(false);
        pushButton_17 = new QPushButton(centralWidget);
        pushButton_17->setObjectName(QStringLiteral("pushButton_17"));
        pushButton_17->setGeometry(QRect(150, 200, 91, 26));
        pushButton_18 = new QPushButton(centralWidget);
        pushButton_18->setObjectName(QStringLiteral("pushButton_18"));
        pushButton_18->setGeometry(QRect(150, 240, 91, 26));
        pushButton_19 = new QPushButton(centralWidget);
        pushButton_19->setObjectName(QStringLiteral("pushButton_19"));
        pushButton_19->setGeometry(QRect(150, 280, 91, 26));
        pushButton_20 = new QPushButton(centralWidget);
        pushButton_20->setObjectName(QStringLiteral("pushButton_20"));
        pushButton_20->setGeometry(QRect(150, 320, 91, 26));
        pushButton_22 = new QPushButton(centralWidget);
        pushButton_22->setObjectName(QStringLiteral("pushButton_22"));
        pushButton_22->setGeometry(QRect(30, 40, 91, 26));
        pushButton_3 = new QPushButton(centralWidget);
        pushButton_3->setObjectName(QStringLiteral("pushButton_3"));
        pushButton_3->setGeometry(QRect(30, 400, 91, 26));
        pushButton_3->setFont(font);
        pushButton_3->setStyleSheet(QStringLiteral("border-image: url(:/2/04.PNG);"));
        pushButton_21 = new QPushButton(centralWidget);
        pushButton_21->setObjectName(QStringLiteral("pushButton_21"));
        pushButton_21->setGeometry(QRect(592, 410, 61, 20));
        pushButton_21->setStyleSheet(QLatin1String("font: 9pt \"Adobe Arabic\";\n"
"text-decoration: underline rgb(56, 113, 170);\n"
""));
        pushButton_12 = new QPushButton(centralWidget);
        pushButton_12->setObjectName(QStringLiteral("pushButton_12"));
        pushButton_12->setGeometry(QRect(150, 400, 91, 26));
        pushButton_23 = new QPushButton(centralWidget);
        pushButton_23->setObjectName(QStringLiteral("pushButton_23"));
        pushButton_23->setGeometry(QRect(270, 40, 91, 26));
        pushButton_24 = new QPushButton(centralWidget);
        pushButton_24->setObjectName(QStringLiteral("pushButton_24"));
        pushButton_24->setGeometry(QRect(270, 80, 91, 26));
        pushButton_25 = new QPushButton(centralWidget);
        pushButton_25->setObjectName(QStringLiteral("pushButton_25"));
        pushButton_25->setGeometry(QRect(270, 120, 91, 26));
        MainWindow->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(MainWindow);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 820, 20));
        MainWindow->setMenuBar(menuBar);
        statusBar = new QStatusBar(MainWindow);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        MainWindow->setStatusBar(statusBar);

        retranslateUi(MainWindow);

        pushButton_2->setDefault(false);


        QMetaObject::connectSlotsByName(MainWindow);
    } // setupUi

    void retranslateUi(QMainWindow *MainWindow)
    {
        MainWindow->setWindowTitle(QApplication::translate("MainWindow", "ToolsBox", 0));
        pushButton->setText(QApplication::translate("MainWindow", "\351\200\200\345\207\272 EXIT", 0));
        pushButton_2->setText(QApplication::translate("MainWindow", "       \347\250\213\345\272\217\346\233\264\346\226\260", 0));
        pushButton_4->setText(QApplication::translate("MainWindow", "\345\205\263\351\227\255\351\253\230\345\215\261\347\253\257\345\217\243", 0));
        pushButton_5->setText(QApplication::translate("MainWindow", "\345\212\240\345\257\206\345\267\245\345\205\267", 0));
        pushButton_6->setText(QApplication::translate("MainWindow", "\350\256\277\351\227\256\345\256\230\347\275\221", 0));
        pushButton_7->setText(QApplication::translate("MainWindow", "\346\217\220\344\272\244BUG", 0));
        pushButton_8->setText(QApplication::translate("MainWindow", "     \345\274\200\345\205\263\344\273\273\345\212\241\347\256\241\347\220\206\345\231\250", 0));
        pushButton_9->setText(QApplication::translate("MainWindow", "\346\235\200\350\277\233\347\250\213", 0));
        pushButton_10->setText(QApplication::translate("MainWindow", "QQ\345\210\267\345\261\217", 0));
        pushButton_11->setText(QApplication::translate("MainWindow", "\347\224\265\350\204\221\351\205\215\347\275\256", 0));
        pushButton_13->setText(QApplication::translate("MainWindow", "   \347\243\201\347\233\230\345\267\245\345\205\267", 0));
        pushButton_14->setText(QApplication::translate("MainWindow", "\350\256\241\347\256\227\345\231\250", 0));
        pushButton_15->setText(QApplication::translate("MainWindow", "\350\256\241\346\227\266\345\231\250", 0));
        pushButton_16->setText(QApplication::translate("MainWindow", "   \347\275\221\347\273\234\345\267\245\345\205\267", 0));
        pushButton_17->setText(QApplication::translate("MainWindow", "\345\260\217\346\227\266\351\222\237", 0));
        pushButton_18->setText(QApplication::translate("MainWindow", "\344\277\256\345\244\215QQ\346\216\211\347\272\277", 0));
        pushButton_19->setText(QApplication::translate("MainWindow", "\344\277\256\345\244\215\346\215\237\345\235\217\346\226\207\344\273\266", 0));
        pushButton_20->setText(QApplication::translate("MainWindow", "\347\227\205\346\257\222\345\267\245\345\205\267\347\256\261", 0));
        pushButton_22->setText(QApplication::translate("MainWindow", "\350\247\206\351\242\221\345\244\204\347\220\206", 0));
        pushButton_3->setText(QApplication::translate("MainWindow", "  \347\263\273\347\273\237\346\235\202\351\241\271", 0));
        pushButton_21->setText(QApplication::translate("MainWindow", "\347\202\271\345\207\273\350\277\233\345\205\245", 0));
        pushButton_12->setText(QApplication::translate("MainWindow", "\344\277\204\347\275\227\346\226\257\346\226\271\345\235\227", 0));
        pushButton_23->setText(QApplication::translate("MainWindow", "\344\272\224\345\255\220\346\243\213", 0));
        pushButton_24->setText(QApplication::translate("MainWindow", "\345\220\203\350\261\206\350\261\206", 0));
        pushButton_25->setText(QApplication::translate("MainWindow", "\345\205\254\345\221\212\346\235\277", 0));
    } // retranslateUi

};

namespace Ui {
    class MainWindow: public Ui_MainWindow {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_MAINWINDOW_H
