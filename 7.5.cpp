#include<iostream>
#include<cstring>


void main()
{

    char str[100];
    int i, numwrds = 0;

    std::cout << "Enter String : ";
    std::cin.getline(str, 100);


    for (int i = 0; str[i] != '\0'; i++)
    {

        if (str[i] == ' ')
            numwrds++;

    }

    std::cout << "Total words = " << numwrds + 1;

};