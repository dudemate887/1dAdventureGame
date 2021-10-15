#include <iostream>
#include "World.h"
#include "Windows.h"

void process();
void drawScreen();
World wd;
World::UI ui;
int main()
{
	wd.setAllZero();
	while (true) {
		system("cls");
		process();
		drawScreen();
	}

	return 0;
}

void process()
{

}

void drawScreen()
{
	ui.drawUI();
	wd.drawWorld();
}