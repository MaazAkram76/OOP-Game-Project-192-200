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
}

void Spaceship::Draw() { //for drawwing the Spaxceship
	DrawTextureV(image, position, WHITE);
}
void Spaceship::MoveLeft() {
	position.x = position.x - 5;
}
void Spaceship::MoveRight() {
	position.x = position.x + 5;
}