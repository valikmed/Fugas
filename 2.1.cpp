#include <iostream>


int main()
{

    int string;
    char symbol = '*';


    std::cout << "Enter the number of rows: ";
    std::cin  >>  string;
    std::cout <<  std::endl;
    

    //rule how many srings it is
    for (int coutStrings = 0; coutStrings < string; coutStrings++)
    {

        //rule input symbol
        for (int coutSymbol = 0; coutSymbol <= coutStrings; coutSymbol++)
        std::cout << symbol;
        std::cout << std::endl;

    }
    return 0;
}
