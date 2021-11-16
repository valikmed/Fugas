#include <sstream>
#include <iostream>


void main()
{

    std::cout << " Please enter srting: " << std::endl;
    std::string s;
    getline(std::cin, s);
    std::stringstream ss(s);
    std::string max;

    std::cout << " Max word: " << std::endl;
    while (ss >> s)
        if (s.size() > max.size())
            max = s;

    std::cout << max << std::endl;

};
