#include <iostream>


void table(int);


int main()
{
		
	std::cout << "Enter the number: ";
	int input;
	std::cin >> input;
	table(input);

}

void table(int numTable) 
{

	for (int i = 1; i <= 10; i++) 
	{

		std::cout << numTable << " * " << i << " = " << numTable * i << std::endl;
	
	}

};