#include <iostream>
#include <cstdlib>

int main(int argc, char** argv)
{
    if(argc != 1)
        std::cout << "You Entered " << argc << " Arguments\n";
    for(int i = 0; i < argc; i++)
        std::cout << argv[i] << "\n";
    return 0;
}