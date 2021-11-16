#include <iostream>

int main()
{
    int numbers[4]{ 1,2,3,4 };
    int max = numbers[0];
    int min = numbers[0];
    int value = sizeof(numbers)/sizeof(numbers[0]);
    
    for (int i = 0; i < value; i++)
    {

        if (max > numbers[i])
        {
            max = numbers[i];
        }
        if (min < numbers[i])
        {
            min = numbers[i];
        }
       
    }
    std::cout << "Maximum number = " << max << "\n";
    std::cout << "Minimum number = " << min << "\n";
    
   
    return 0;
}