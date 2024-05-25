#include "Spaceship.h"
//This is the implementatiaon file for the Constructor 'Spaceship' declared in 'Spaceship.h (header file)'
Spaceship::Spaceship()
{
	image = LoadTexture("Images/spaceship.png");	//Giving the image of Sapceship
	//LoadTexture function is used to load the Graphics and then we are assiging that image to 'image' datamember

	position.x = 100;
	position.y = 100;
}
Spaceship::~Spaceship() {
	UnloadTexture(image); //Unloading image to free up space after the program closes
}

void Spaceship::Draw() { //for drawwing the Spaxceship
	DrawTextureV(image, position, WHITE);
}