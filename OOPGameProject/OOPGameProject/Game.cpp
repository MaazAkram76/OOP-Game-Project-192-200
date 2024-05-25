#include "Game.h"

Game::Game()
{

}

Game::~Game()
{

}
void Game::Draw() {
	spaceship.Draw();	//This 'Draw()' method is defined in 'Spaceship.h'
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
}