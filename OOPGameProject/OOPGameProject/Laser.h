#pragma once
#include<raylib.h>
class Laser {
public:
	Laser(Vector2 position, int speed);
	void Update();
	void Draw();
private:
	Vector2 position;
	int speed;		//speed is the speed of the laser in y-axis
};