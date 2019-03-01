//#pragma once 

#include <iostream>

using namespace std;

#include <string>

int main (){
    class Vector2d{

public:
Vector2d(const float x, const float y);
float getx() const;
float getY() const;
const std::string to_string() const;

private:
const float x;
const float y;

};

cout<<"Agregar valores: ";
cout<<std::to_string <<std::endl;
}
