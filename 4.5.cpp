#include <iostream>

int main()
{

	const int length = 3;


	int array[length][length] =
	{
		 {3,2,4},{5,1,5},{6,5,8}

	};

	int result;

	result = array[0][0] * (array[1][1] * array[2][2] - array[1][2] * array[2][1])
		- array[0][1] * (array[1][0] * array[2][2] - array[1][2] * array[2][0])
		+ array[0][2] * (array[1][0] * array[2][1] - array[1][1] * array[2][0]);

	std::cout << result << std::endl;

	return 0;
}