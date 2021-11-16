#include <iostream>


void mile(float);


int main()
{

	std::cout << "Enter the value= ";

	float input;
	std::cin >> input;

	mile(input);

}


void mile(float num)
{

	std::cout << "Value convertation = " << num *0.62 << std::endl;

};