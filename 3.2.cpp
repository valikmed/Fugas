#include <iostream>

int main()
{

    int numbers[4]{ 1,2,3,-4 };
    double positive = 0;
    int value = sizeof(numbers)/sizeof(numbers[0]);
    
    for (int i = 0; i < value; i++)
    {

        if (numbers[i] > 0)
        {
            positive += numbers[i];
          
        }
        
    }


    double average = positive / value;
    std::cout << "Average  numbers = " << average << "\n";
   

    return 0;
}

