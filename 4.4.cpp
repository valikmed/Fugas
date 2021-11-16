#include <iostream>

int main()
{

	const int length = 3;


	int array[length][length] =
	{
		 {3,2,4},{5,1,5},{6,5,8}

	};


	
	int arrayResult[length][length] = {};
	
	int a = 0;

	for (int i = 0; i < length; i++)
	{

		for (int j = 0; j < length; j++)
		{

			if (j != a)
			{
				array[i][j] = 0;
			}

		}

		a = a + 1;

	};


	for (int i = 0; i < length; i++)
	{

		for (int j = 0; j < length; j++)
		{

			std::cout << array[i][j] << " ";

		}

		std::cout << std::endl;
	}

	return 0;
}