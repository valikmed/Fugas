#include <iostream>

int main()
{
    int numbers[4]={1,3,5,2};
    
    for (int i = 3; i != -1; i--)
    {
        std::cout << numbers[i] << ' ';
    }
    
    return 0;
}
