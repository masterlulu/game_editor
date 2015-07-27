#include "game_editor.h"
#include "Classes/AppDelegate.h"

game_editor::game_editor(QWidget *parent)
	: QMainWindow(parent),
	_appDelegate(NULL),
	_glWidget(NULL)
{
	ui.setupUi(this);
}

game_editor::~game_editor()
{

}

void game_editor::closeEvent(QCloseEvent *)
{
	cocos2d::Director::getInstance()->end();
	qApp->quit();
}

void game_editor::setGLView(QWidget *glWidget)
{
	_glWidget = glWidget;

	if (_glWidget)
	{
		ui.SceneWidget->setWidget(_glWidget);
		setCentralWidget(ui.SceneWidget);
	}
}
