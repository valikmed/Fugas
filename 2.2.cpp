#include <iostream>


int main() 
{

	int sum = 0;
	int num = 0;

	std::cout << "Enter the number: ";
	std::cin  >> num;


	for (int i = 1; i <= num; i++)
	{
		sum += i;
	}
	std::cout << sum;

	return 0;
}
