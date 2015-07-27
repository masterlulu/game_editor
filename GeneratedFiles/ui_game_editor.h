/********************************************************************************
** Form generated from reading UI file 'game_editor.ui'
**
** Created by: Qt User Interface Compiler version 5.5.0
**
** WARNING! All changes made in this file will be lost when recompiling UI file!
********************************************************************************/

#ifndef UI_GAME_EDITOR_H
#define UI_GAME_EDITOR_H

#include <QtCore/QVariant>
#include <QtWidgets/QAction>
#include <QtWidgets/QApplication>
#include <QtWidgets/QButtonGroup>
#include <QtWidgets/QDockWidget>
#include <QtWidgets/QHeaderView>
#include <QtWidgets/QMainWindow>
#include <QtWidgets/QMenuBar>
#include <QtWidgets/QStatusBar>
#include <QtWidgets/QToolBar>
#include <QtWidgets/QWidget>

QT_BEGIN_NAMESPACE

class Ui_game_editorClass
{
public:
    QWidget *centralWidget;
    QMenuBar *menuBar;
    QToolBar *mainToolBar;
    QStatusBar *statusBar;
    QDockWidget *SceneWidget;
    QWidget *dockWidgetContents_2;

    void setupUi(QMainWindow *game_editorClass)
    {
        if (game_editorClass->objectName().isEmpty())
            game_editorClass->setObjectName(QStringLiteral("game_editorClass"));
        game_editorClass->resize(754, 529);
        centralWidget = new QWidget(game_editorClass);
        centralWidget->setObjectName(QStringLiteral("centralWidget"));
        game_editorClass->setCentralWidget(centralWidget);
        menuBar = new QMenuBar(game_editorClass);
        menuBar->setObjectName(QStringLiteral("menuBar"));
        menuBar->setGeometry(QRect(0, 0, 754, 26));
        game_editorClass->setMenuBar(menuBar);
        mainToolBar = new QToolBar(game_editorClass);
        mainToolBar->setObjectName(QStringLiteral("mainToolBar"));
        game_editorClass->addToolBar(Qt::TopToolBarArea, mainToolBar);
        statusBar = new QStatusBar(game_editorClass);
        statusBar->setObjectName(QStringLiteral("statusBar"));
        game_editorClass->setStatusBar(statusBar);
        SceneWidget = new QDockWidget(game_editorClass);
        SceneWidget->setObjectName(QStringLiteral("SceneWidget"));
        dockWidgetContents_2 = new QWidget();
        dockWidgetContents_2->setObjectName(QStringLiteral("dockWidgetContents_2"));
        SceneWidget->setWidget(dockWidgetContents_2);
        game_editorClass->addDockWidget(static_cast<Qt::DockWidgetArea>(1), SceneWidget);

        retranslateUi(game_editorClass);

        QMetaObject::connectSlotsByName(game_editorClass);
    } // setupUi

    void retranslateUi(QMainWindow *game_editorClass)
    {
        game_editorClass->setWindowTitle(QApplication::translate("game_editorClass", "game_editor", 0));
    } // retranslateUi

};

namespace Ui {
    class game_editorClass: public Ui_game_editorClass {};
} // namespace Ui

QT_END_NAMESPACE

#endif // UI_GAME_EDITOR_H
