#include <iostream>

class UsualFranction
{

private:
	int numerator;
	int denominator;
	
		
public:

	void fractionCheck()
	{

		if (numerator < denominator)
		{

			std::cout << "Fraction correct!" << std::endl;

		}
		else
		{

			std::cout << "Fraction incorrect!" << std::endl;

		}
	}


	void printFraction()
	{

		std::cout << "Enter numerator="; 
		std::cin >> numerator;
		std::cout << std::endl;

		std::cout << "Enter denominator=";
		std::cin >> denominator;
		std::cout << std::endl;


	}
};


int main()
{

	UsualFranction One;
	One.printFraction();
	One.fractionCheck();

	return 0;
}