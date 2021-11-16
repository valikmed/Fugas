#include <iostream>

int main()
{
	int numbers[]{ 1,2,5,8,9 };
	 for (int i = 0; i < 5; i++)
	 {
		 if (numbers[i] % 2 == 0)
		 {
			 numbers[i] = 0;
		 }
		 if (numbers[i] % 2 != 0)
		 {
			 numbers[i] = 1;
		 }
		 std::cout << numbers[i]<< " ";
	 }
	return 0;
}