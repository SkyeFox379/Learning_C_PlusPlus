#include <iostream>

using namespace std;

int main() 
{
    int emmaDice[4], gunnarDice[4];
    int k, emmaSum = 0, gunnarSum = 0;

    for(k = 0; k < 4; k++) {
        cin >> gunnarDice[k];
        gunnarSum = gunnarSum + gunnarDice[k];
    }
    for(k = 0; k < 4; k++) {
        cin >> emmaDice[k];
        emmaSum = emmaSum + emmaDice[k];
    }

    if (gunnarSum > emmaSum)
        cout << "Gunnar" << endl;
    else if (gunnarSum == emmaSum)
        cout << "Tie" << endl;
    else 
        cout << "Emma" << endl;
    return 0;
}