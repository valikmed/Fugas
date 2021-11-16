#include <iostream>

int main()
{
	const int length = 11;
	int numbers[length]{ 0,2,5,2,9,2,0,2,1,1};
	int moda = 0;
	int result = 0;
	for (int i = 0; i < length; i++)
	{
		int a = 0;

			for (int j = 0; j < length; j++)
			{

				if (numbers[i] == numbers[j])
				{ 
					a += 1;
				}
					
			}
			
			if (moda < a)
			{

				result = numbers[i];
				moda = a;
				
			}
			
	}
		std::cout << result << " ";
	return 0;
}