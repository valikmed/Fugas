#include <iostream>


int main()
{

    int userInput1;
    int userInput2;


   
        std::cout << "Enter a number start: ";
        std::cin >> ("%d",userInput1);
        std::cout << "Enter a number end: ";
        std::cin >> ("%d", userInput2);




    for (int i = userInput1; i <= userInput2; i++)
    {

        for (int j = 2; j <= i; j++)
        {
                if (i % j == 0)
                break;
                else if (i == j+1)
                std::cout << " " << i;
        }
    }

    return 0;
}
