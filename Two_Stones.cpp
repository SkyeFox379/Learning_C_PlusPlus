#include <iostream>
using namespace std;

int main()
{
    int x;
    cin >> x;

    if(x % 2 == 1)
        cout << "Alice" << endl;
    else
        cout << "Bob" <<  endl;

    return 0;
}