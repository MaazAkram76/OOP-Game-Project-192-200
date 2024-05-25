#include "Spaceship.h"
//This is the implementatiaon file for the Constructor 'Spaceship' declared in 'Spaceship.h (header file)'
Spaceship::Spaceship()
{
	image = LoadTexture("Images/spaceship.png");	//Giving the image of Sapceship
	//LoadTexture function is used to load the Graphics and then we are assiging that image to 'image' datamember

	position.x = (GetScreenWidth() - image.width) / 2;	//The explaination is given in notes 
	position.y = (GetScreenHeight() - image.height);	//Notes reference: 1.0
}
Spaceship::~Spaceship() {
	UnloadTexture(image); //Unloading image to free up space after the program closes
							//We are unloading the image to ensure that if we change the picture if 'spaceship' int our game then the new image does not overlaps with the new picture we loaded for the spaceship.
}

void Spaceship::Draw() { //for drawwing the Spaxceship
	DrawTextureV(image, position, WHITE);
}
void Spaceship::MoveLeft() {
	position.x = position.x - 5; //On Pressing the left key one time the sapcxeship image will move 5 pixels to the decreasing side of x i.e left side in computer-coordinate systems
	if (position.x < 0)	//To check whether the spaceship in our game is decreasing than the x=0 coordinate (i.e. the left side of the screen)
	{
		position.x = 0;		//This moves or restricts the spaceship by moveing it to (0,y) coordinate.
	}
}
void Spaceship::MoveRight() {
	position.x = position.x + 5; //On Pressing the right key one time the sapcxeship image will move 5 pixels to the increasing side of x i.e right side in computer-coordinate systems
	if (position.x > GetScreenWidth() - image.width)	//To check whether the spaceship in our game is exceding the 'screen width - image.width' (from right side)
	{
		position.x = GetScreenWidth() - image.width;		//This moves or restricts the spaceship by moveing it to (GetScreenWidth() - image.width,y) coordinate...To know more about "GetScreenWidth() - image.width" Kindly chack notes 1.0.
	}
}