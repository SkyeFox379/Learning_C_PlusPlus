#include <iostream>
using namespace std;

int main()
{
    int manyTemps, temps, x, freezing;
    freezing = 0;

    cin >> manyTemps;

    for(x = 0; x<manyTemps; x++)
    {
        cin >> temps;
        if (temps < 0)
            freezing++;
    }    
    cout << freezing << endl;

    return 0;
}