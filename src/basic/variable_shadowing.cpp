#include <iostream>

void fu();
int i=42;
int main(int argc, char const *argv[])
{
    int i=10;
    int j=i;
    std::cout << j << std::endl;
    fu();
    return 0;
}

void fu(){
    std::cout << i << std::endl;
    
}
