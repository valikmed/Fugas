#include <iostream>

void main()
{

	int length = 0;
	std::cout << "Enter the number length:";
	std::cin >> length;

	int* arr = new int[length];

	for (int i = 0; i < length; i++)
	{

		arr[i]= rand() % 9 + 1;
		std::cout << arr[i] << " ";

	}

	for (int i = 0; i < length-1; i++)
	{

		for (int j = 0; j < length - 1; j++)
		{

			if (arr[j] > arr[j + 1])
			{

				std::swap(arr[j], arr[j + 1]);

			}

		}

	}

	std::cout << std::endl;

	std::cout << "Sort of array" << std::endl;

	for (int i = 0; i < length; i++)
	{ 

		std::cout << arr[i] << " ";

	}

	std::cout << std::endl;

	delete[] arr;

	system("pause");

};
