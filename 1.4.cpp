//library do input & output stream
#include <iostream>
#include <cmath>


int main()
{


	double a, b, c;//side's of triangel
	double S;//square of triangle
	double P;//perimeter of triangel
	double p;//half_P_triangel
	double g;//expression under the root


	std::cout << "Start to calculate Heron's formula !" << "\n";


	while (true)
	{


		std::cout << "\Enter lenght 'a': ";
		if (std::cin >> a) break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	}



	while (true)
	{


		std::cout << "\Enter widht 'b': ";
		if (std::cin >> b) break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	}




	while (true)
	{


		std::cout << "\Enter thirdSide 'c': ";
		if (std::cin >> c) break;
		std::cin.clear();
		std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


	}



	//mathe fucianal for searching Heron's formula
	P = a + b + c;
	p = P / 2;
	g = p * (p - a) * (p - b) * (p - c);
	S = sqrt(g);


	std::cout << "S = " << S << "\n";

	return 0;
}
