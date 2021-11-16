#include <iostream>
#include <stdio.h>


int main()
{

    int userInput = 0;
    int maxNumber = 0;
    int minNumber = 100;
  


    //get the numbers from the user
    for (int i = 0; i < 3; i++)
    {

        std::cout << "Enter a number: ";
        scanf_s("%d", &userInput);
        std::cout << userInput << "\n";


        if (userInput > maxNumber)
        {

            //the biggest number entered so far is the max number
            maxNumber = userInput;

        }


        if (userInput < minNumber)
        {

            //the lowest number entered so far is the min number
            minNumber = userInput;

        }

    }

    std::cout << "Maximum number = " << maxNumber << "\n";
    std::cout << "Minimum number = " << minNumber << "\n";

    return 0;
}
