#pragma once
#include"Spaceship.h"
class Game {
public:
	Game();
	~Game();
	void Draw();	//This draw is not the 'Draw()' of 'Spaceship.h'
	//Whereas this Draw() contains the "spaceship.Draw();"
	void Update();	//Update the game objects
	void HandleInput();

private:
	Spaceship spaceship;	//To use the 'Spaceship' class objects in Game implementation file we have created the object here.
};

