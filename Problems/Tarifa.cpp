#include <iostream>

using namespace std;

int main()
{
    int numOfMonths, monthlyMegabyte, megabyteLimit;
    int megabyteUsed, megabytesLeft, sum = 0;

    cin >> monthlyMegabyte;
    cin >> numOfMonths;
    megabyteLimit = monthlyMegabyte * (numOfMonths + 1);

for(int i = 0; i < numOfMonths; i++){
    cin >> megabyteUsed;
    sum = sum + megabyteUsed;
} 
    megabytesLeft = megabyteLimit - sum;
    cout << megabytesLeft << endl;
    
    return 0;
}