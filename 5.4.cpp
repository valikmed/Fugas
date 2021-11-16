#include <iostream>


void factorial(int);


int main()
{

	std::cout << "Enter n! = ";
	int input;
	std::cin >> input;
	factorial(input);

}
void factorial(int n)
{
	int result = 1;

	for (int i = 1; i <= n; i++)
	{

		result = result * i;

	}

	std::cout << result;

};