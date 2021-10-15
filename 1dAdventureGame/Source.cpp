#include <iostream>
#include "World.h"
#include "Windows.h"

void process();
void drawScreen();
World wd;
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
	for (int i = 0; i < wd.worldSize; i++) {
		std::cout << wd.world[i];
	}
}