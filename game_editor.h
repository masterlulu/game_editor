#ifndef GAME_EDITOR_H
#define GAME_EDITOR_H

#include <QtWidgets/QMainWindow>
#include "ui_game_editor.h"
class AppDelegate;
namespace Ui {
	class game_editor;
}

class game_editor : public QMainWindow
{
	Q_OBJECT

public:
	game_editor(QWidget *parent = 0);
	~game_editor();

	void setGLView(QWidget *glWidget);

protected:
	void closeEvent(QCloseEvent *);

private:
	Ui::game_editorClass ui;
	AppDelegate         *_appDelegate;
	QWidget             *_glWidget;
};

#endif // GAME_EDITOR_H
