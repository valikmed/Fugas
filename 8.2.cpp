#include <iostream>
#include <cstring>

class Vector
{

private:
	int x;
	int y;
	int result;

public:
	
	void resultVector()
	{

		std::cout << "Choose '+' or '-' :" << std::endl;
		std::string input;
		std::cin >> input;


		if (input == "+")
		{

			result = x + y;
			std::cout << "Result =" << result;

		}

		else if (input == "-")
		{

			result = x - y;
			std::cout << "Result =" << result;


		}
		
		else
		{

			std::cout << "Operation incorrect !" << std::endl;

		}

	};

	


	void userInput()
	{

		std::cout << "Enter x = ";
		std::cin >> x;
		std::cout << std::endl;

		std::cout << "Enter y = ";
		std::cin >> y;
		std::cout << std::endl;


	}
};


int main()
{

	Vector One;
	One.userInput();
	One.resultVector();


	return 0;
};