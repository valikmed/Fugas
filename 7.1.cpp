#include <iostream>
#include <string>


void main()
{

	std::cout << " Please enter srting: " << std::endl;
	std::string str;
	std::cin >> str;
	std::string sym = "AEIOUYaeiouy";


	for (int i = 0; i < str.size(); i++)
	{

		for (int j = 0; j < str.size(); j++)
		{
			if (str[i] == sym[j])
			{
				str[i] = '_';
			}
		}
		std::cout << str[i] << " ";
	}


};