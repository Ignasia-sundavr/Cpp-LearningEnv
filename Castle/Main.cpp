#include <iostream>

class Entity 
{

private:

	float posX = 0;
	float posY = 0;
	float posZ = 0;

public:

	void Changepos(float x,float y,float z) {

		posX = posX + x;
		posY = posY + y;
		posZ = posZ + z;
	}

	void Position() {

		std::cout << "X = " << posX << std::endl;
		std::cout << "Y = " << posY << std::endl;
		std::cout << "Z = " << posZ << std::endl;

	}

};


int main(){

	Entity e;
	e.Changepos(12, 14, 2);
	e.Position();
	std::cin.get();
}