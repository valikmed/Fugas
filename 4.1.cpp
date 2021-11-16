#include <iostream>

int main()
{
	const int row = 2;
	const int col = 4;


	int array[row][col] =
	{
		 {5,26,36,1},
		 {25,-1,6,77}
	};

	int result = 0;
	int max = array[0][0];
	int min = array[0][0];
	

	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{

			if (array[i][j] > max)
			{

				max = array[i][j];

			}
			if (array[i][j] < min)
			{

				min = array[i][j];

			}

		}


		std::cout << "Maximum number = " << max << "\n";
		std::cout << "Minimum number = " << min << "\n";

	}

	return 0;
}