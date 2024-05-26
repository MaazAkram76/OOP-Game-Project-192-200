#include "Game.h"

Game::Game()
{

}

Game::~Game()
{

}

void Game::Update() {
	for (auto& laser : spaceship.lasers)
	{
		laser.Update();
	}
}

void Game::Draw() {
	spaceship.Draw();	//This 'Draw()' method is defined in 'Spaceship.h'

	for (auto& laser : spaceship.lasers) //No idea what is happening in this range-based (for-each) loop.
	{
		laser.Draw();
	}
}
void Game::HandleInput() {
	if (IsKeyDown(KEY_LEFT)) //The built in Function of Raylib "IsKeyDown" checks for any keys pressed
		//And "IsKeyDown(KEY_LEFT)" checks whether left key was pressed?
	{
		spaceship.MoveLeft();	//Moves the 'Spaceship' class object, 'spaceship', to the Left.
		//We then modify the function "MoveLeft" in the Spaceship Class implementation file to our own criteria
		//MoveLeft function is defined in the header file of Spaceship.
	}
	else if (IsKeyDown(KEY_RIGHT))
	{
		spaceship.MoveRight();	//Moves the 'Spaceship' class object, 'spaceship', to the Left.
	}
	else if (IsKeyDown(KEY_UP))
	{
		spaceship.MoveUp();
	}
	else if (IsKeyDown(KEY_DOWN))
	{
		spaceship.MoveDown();
	}
	else if (IsKeyDown(KEY_SPACE)) //Difference between IsKeyPressed and IsKeyDown is that Pressed does only single move at a tinme, BUT IsKeyDown does as long as key is pressed. so it's for continous and 'IsKeyPressed' if for discrete 
	{
		spaceship.FireLaser();
	}
}