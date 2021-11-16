#include <iostream>


int factorial(int n)
{

		
	if (n < 1)
	{
			
		return 1;
			
	}
		
	else 
			
		return factorial(n - 1) * n;

}


void main()
{

	std::cout << "Enter n! = ";
	int number;
	std::cin >> number;
	std::cout << "Factorial " << number << "! " << " =  " << factorial(number);


};

