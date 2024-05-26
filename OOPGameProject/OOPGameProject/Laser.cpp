#include "Laser.h"
#include<iostream>
Laser::Laser(Vector2 position, int speed)
{
	this->speed = speed;
	this->position = position;
	active = true;
	//The "this" pointer is used to distinguish between the parameter and the class member, which have the same name.
	//The second speed, position is the Constructor argument, the speed in 'this->speed' is the private member of the class Laser
/*
	The above two lines of code are same as
Laser::Laser(Vector2 p, int s)
{
	speed = s;     // Assign the parameter 's' to the member variable 'speed'
	position = p;  // Assign the parameter 'p' to the member variable 'position'
}
*/
}
void Laser::Draw() {
	if (active)
	{
		DrawRectangle(position.x, position.y, 4, 15, { 123, 234, 213, 231 });
		/*
		Draw Rectangle is Raylib function that Creates a rectangle with the parameters as;
		x-coordinate, y-coordinate, width, height, and color in rgba format
		*/
	}
}

bool Laser::IsActive()
{
	return active;
}

void Laser::Update() {
	position.y = position.y + speed;
	if (position.y > GetScreenHeight() || position.y < 0) //For both (spaceship and enemy lasers) //that's why it is being checked if the laser has passed the lowar and upper part of screen window
	{
		active = 0; //If laser moves outside the window, then it will be considered as inactive
	}
}
