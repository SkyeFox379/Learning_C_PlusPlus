#include <iostream>
#include <cstdlib>

using namespace std;

int main(int argc, char** argv)
{
    if(argc != 1)
        cout << "You Entered " << argc << " Arguments\n";
    for(int i = 0; i < argc; i++)
        cout << argv[i] << "\n";
    return 0;
}