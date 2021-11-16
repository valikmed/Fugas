// library do input& output stream
#include <iostream>
#include <cmath>


	int main()
	{


		double mass, accelaerate;


		std::cout << "Start to calculate F = ma " << "\n";


		while (true)
		{

			std::cout << "Enter mass ' m ': ";
			if (std::cin >> mass) break;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');

		}


		while (true)
		{


			std::cout << "Enter accelaerate ' a ': ";
			if (std::cin >> accelaerate) break;
			std::cin.clear();
			std::cin.ignore(std::numeric_limits<std::streamsize>::max(), '\n');


		}



		std::cout << "F = " << mass * accelaerate << " H\n";


		return 0;
	}

