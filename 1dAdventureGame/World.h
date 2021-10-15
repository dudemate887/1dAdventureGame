#pragma once

class World {
public:  // Functions
	void setAllZero();
	void drawWorld();
public: // Variables
	static const int worldSize = 100;
	char world[worldSize];

	class UI {
	public:  // Functions
		void drawUI();
	public: // Variables
	};
};