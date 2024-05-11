
#include <iostream>

int Multiply(int a, int b)
{
	return a * b;
}

void Calculate(int a, int b)
{
	int result = Multiply(a, b);
	std::cout << result << std::endl;
}
