#include <iostream>
#include <string>


void main()
{

    char s[50];
    std::cout << " Enter string;" << std::endl;
    std::cin.getline(s, 50);
    s[0] = toupper(s[0]);
    std::cout << std::endl;


    std::cout << " String was changed:" << std::endl;
    for (int i = 2; i < strlen(s); i++)
    {

        if (s[i] != ' ' && s[i - 1] == ' ')
        {

            s[i] = toupper(s[i]);

        }

    }

    std::cout << s;

};