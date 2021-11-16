#include <iostream>


int main()
{

    int userInput;
   



    std::cout << "Enter a number: ";
    std::cin >> ("%d", userInput);
   



    for (int i = userInput -1; i <= userInput; i--)
    {

        for (int j = 2; j <= i; j++)
        {
            if (i % j == 0)
                break;
            else if (i == j + 1)
                std::cout << " " << i;
        }
    }

    return 0;
}
