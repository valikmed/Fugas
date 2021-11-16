#include <iostream>

void main()
{

	int min = 0;
	int number = 0;
	int* arrNumber = new int[number] {};


	int size = 0;
	std::cout << "Enter the array size =";
	std::cin >> size;


	for (int i = 0; i < size; i++)
	{

		std::cout << "Enter the number array " << i << " = ";
		std::cin >> number;

	}

	std::cout << "Value sizeof =" << sizeof(arrNumber)*size;

};