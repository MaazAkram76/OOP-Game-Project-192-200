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
	bool active;	//laser is active when it is inside the window, if it gets outside, which it will get, then it will be active=false

};