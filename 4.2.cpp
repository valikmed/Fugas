#include <iostream>

int main()
{
	const int row = 2;
	const int col = 4;


	int array1[row][col] =
	{
		 {5,26,36,1},
		 {25,-1,6,77}
	};


	int array2[row][col] =
	{
		 {6,5,8,-8},
		 {25,66,87,1}
	};

	int result = 0;
	

	for (int i = 0; i < row; i++)
	{

		for (int j = 0; j < col; j++)
		{
			result= array1[i][j] + array2[i][j];
			std::cout << result << "\n";
		}

	}

	return 0;
}