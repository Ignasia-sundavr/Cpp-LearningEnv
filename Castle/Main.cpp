#include <iostream>

class Entity 
{
private:
	
	float posX = 0.0f;
	float posY = 0.0f;
	float posZ = 0.0f;

	public:

	void Changepos(float x,float y,float z) {
		posX += x;
		posY += y;
		posZ += z;
	}

	void Position() {
		std::cout << "X = " << posX << std::endl;
		std::cout << "Y = " << posY << std::endl;
		std::cout << "Z = " << posZ << std::endl;
	}

};


int main(){

	Entity castle;
	castle.Changepos(12, 14, 2);
	castle.Position();
	std::cin.get();
}