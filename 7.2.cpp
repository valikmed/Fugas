#include <iostream>
#include <string>


void main()
{
	char str[6] = "abcdf";
	std::cout << " Non reves string:"<< str << std::endl;
	
	std::cout << "Reves string :";

		for (int i = 5; i != -1; i--)
		{
			std::cout << str[i] << ' ';

		}

};