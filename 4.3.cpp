#include <iostream>

int main()
{

	const int length = 2;


	int array1[length][length] =
	{
		 {3,2},
		 {5,1}
	};


	int array2[length][length] =
	{
		 {6,5},
		 {2,6}
	};

	int arrayResult[length][length] = {};
	

	for (int i = 0; i < length; i++)
	{

		for (int j = 0; j < length; j++)
		{

			for (int k = 0; k < length; k++)
			{

				arrayResult[i][j] += array1[i][k] * array2[j][k];

			}
		}

	}


	for (int i = 0; i < length; i++)
	{

		for (int j = 0; j < length; j++)
		{

			std::cout << arrayResult[i][j] << " ";

		}

		std::cout << std::endl;
	}

	return 0;
}