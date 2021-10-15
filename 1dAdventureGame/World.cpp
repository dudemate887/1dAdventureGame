#include "World.h"
#include <iostream>

void World::setAllZero()
{
	for (int i = 0; i < worldSize; i++) {
		world[i] = '.';
	}
}

void World::drawWorld()
{
	for (int i = 0; i < worldSize; i++) {
		std::cout << world[i];
	}
}

void World::UI::drawUI()
{
	std::cout << "\n\n\n\n" << std::endl;
	std::cout << "sup lol type direction to go bye" << std::endl;
}
