#include "World.h"
#include <iostream>

void World::setAllZero()
{
	for (int i = 0; i < worldSize; i++) {
		world[i] = '.';
	}
}
