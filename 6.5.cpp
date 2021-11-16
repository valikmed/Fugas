#include <iostream>

void main()
{

	int row, col, max;
	std::cout << "Enter the number rows:";
	std::cin >> row;

	std::cout << "Enter the number cols:";
	std::cin >> col;


	int** arr = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr[i] = new int[col];

	}


	std::cout << "Non sorted matrix: " << std::endl;
	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			arr[i][j] = rand() % 10;
			std::cout << arr[i][j] << " ";
		}

		std::cout << std::endl;
	}
	std::cout << std::endl;



	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{

			for (int k = 0; k < col; k++)
			{

				if (arr[i][k] > arr[i][j])
				{
					max = arr[i][k];
					arr[i][k] = arr[i][j];
					arr[i][j] = max;
				}

			}

		}


	}



	std::cout << "Sorted matrix: " << std::endl;
	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			std::cout << arr[i][j] << " ";
		}

		std::cout << std::endl;
	}

	std::cout << std::endl;


	for (int i = 0; i < row; i++)
	{
		delete[] arr[i];
	}

	delete[] arr;


};
