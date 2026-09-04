#include <iostream>
#include "head.h"
void fuckoff(int x);

int main()
{   
    std::cout << "what? \n";
    int x{callint()};
    
    fuckoff(x);
    return 0;
}

void fuckoff(int x)
{
    for(int i = 0; i < x; i++)
    {
        std::cout << "OH FUCK OFF!!\n";
    }
}

