#include<raylib.h>

int main()
{
	int windowWidth = 800;
	int windowHeight = 650;

	InitWindow(windowWidth, windowHeight, "231192 and 231200 OOP Game Project"); //initializing window
	SetTargetFPS(55); //setting Game frame rate, incase we don't define the frame rate for the game,
					//computer will try to run it as fast as possible depending upon the computer's speed
					//By defining the game frame rate we are ensuring that game will run at the same speed on every computer
					//settting up the frame rate at 60 fps, we are allowing the game 'while' loop to UPDATE the GAME DISPLAY 60 times in a second



	while (WindowShouldClose() == false) { //this while loop ensures that game window will run unless we do not close the window
		BeginDrawing();//setting up the drawing canvas that we will use for drawing



		EndDrawing();//closing the canvas that we will use for drawing
	}


	CloseWindow(); //this will close the window
}