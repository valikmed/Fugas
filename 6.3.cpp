#include <iostream>

void main()
{
	
	int row = 0;
	std::cout << "Enter the number rows:";
	std::cin >> row;

	int col = 0;
	std::cout << "Enter the number cols:";
	std::cin >> col;


	int** arr1 = new int* [row];
	for (int i = 0; i < row; i++)
	{
		arr1[i] = new int[col];

	}


	int** arr2 = new int* [col];
	for (int i = 0; i < col; i++)
	{
		arr2[i] = new int[row];

	}

	for (int i = 0; i < row; i++)
	{


		for (int j = 0; j < col; j++)
		{
			arr1[i][j] = rand() % 9 + 1;
			arr2[j][i] = arr1[i][j];
			std::cout << arr1[i][j] << " ";
		}
		std::cout << std::endl;
	}
	std::cout << std::endl;

	arr1 = arr2;

	for (int i = 0; i < col; i++)
	{
		for (int j = 0; j < row; j++)
			std::cout << arr1[i][j] << " ";
		std::cout << std::endl;
	}

	for (int i = 0; i < row; i++)
	{
			delete[] arr1[i];
	}

	delete[] arr1;


	system("pause");

}
