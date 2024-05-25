#include<raylib.h>
#include"Game.h" //If I try to write '#include<Game.h>', then it gives error
#include"Laser.h"
int main()
{
	int windowWidth = 800;
	int windowHeight = 650;

	Color backgroundColor = {0,0,51,255}; //Here we are defining our own color called 'backgroundColor', the fourth argument is for transperency of the color, basically this color is blue

	InitWindow(windowWidth, windowHeight, "231192 and 231200 OOP Game Project"); //initializing window

	SetTargetFPS(60); //setting Game frame rate, incase we don't define the frame rate for the game,
					//computer will try to run it as fast as possible depending upon the computer's speed
					//By defining the game frame rate we are ensuring that game will run at the same speed on every computer
					//settting up the frame rate at 60 fps, we are allowing the game 'while' loop to UPDATE the GAME DISPLAY 60 times in a second









	
	Game game;	//Declared outside the game loop
	Laser laser ({100, 100}, 5); // Same as 'Laser laser = Laser({100, 100}, 5);'







	while (WindowShouldClose() == false) { //this while loop ensures that game window will run unless we do not close the window

		laser.Update();
		game.HandleInput();

		BeginDrawing();//setting up the drawing canvas that we will use for drawing

		ClearBackground(backgroundColor);//Question arises that why the function is named 'ClearBackground'
										//So the reason is that when the first frame has passed, the objects/arnaments
										//of the previous (first frame) are removed for the upcoming second frame
										//, to avoid the overlapping of the previouis objects with the next frame objects
		  
		game.Draw();//Calling the Draw Function after clearing the background;
		laser.Draw();
		EndDrawing();//closing the canvas that we will use for drawing
	}


	CloseWindow(); //this will close the window
}