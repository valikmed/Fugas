#include <iostream>

int numberDrgree(int, int);


int main()
{

    int number;
    int square;

    std::cout << "Enter number :";
    std::cin >> number;

    std::cout << "Enter square the number :";
    std::cin >> square;

    std::cout << "Result: " << numberDrgree(number, square) << std::endl;


}

int numberDrgree(int value, int amount)
{
    int result = value;

    for (int i = 1; i < amount; i++)
    {

        result *= value;

    }
    return result;
};