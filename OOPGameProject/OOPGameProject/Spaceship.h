#pragma once
//An implementation file contains the actual code, i.e., the definitions of the functions declared in the header file.
//The functions written in header files Are defined in the imlementation file (.cpp) file..

#include<raylib.h> //This contains the 'Texture2D' and 'Vector2D'
class Spaceship {
public:
    Spaceship();
    ~Spaceship();

    void Draw(); 
    void MoveLeft();
    void MoveRight();
    void FireLaser();
private:
    Texture2D image; //image
    Vector2 position; //In raylib Vector2 is a datatype which represents 2D point with x and y components
    //position datamember is for positioning the Spaceship object
};
