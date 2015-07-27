#include "game_editor.h"
#include <QtWidgets/QApplication>

#include "Classes/AppDelegate.h"
#include "Classes/CocosQtPort/CCQGLView.h"
#include "cocos2d.h"

int main(int argc, char *argv[])
{
	AppDelegate app(argc, argv);
	return cocos2d::CCQApplication::getInstance()->run();
}
