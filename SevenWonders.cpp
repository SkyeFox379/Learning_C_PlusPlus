#include <iostream>

using namespace std;

int main()
{
    int numC=0, numT=0, numG=0, pairs=0, len, sum;
    string score;
    cin >> score;
    len = score.size();

    for(int x = 0; x < len; x++) {
        if(score[x] == 'T')
            numT++;
        else if(score[x] == 'C')
            numC++;
        else if(score[x] == 'G')
            numG++;
    }

    //looks for pairs
    for(int x = 1; x <= len; x++) {
        if(numT >= x && numC >= x && numG >= x)
            pairs++;
    }

    //for each pair, player gets 7 points
    pairs = pairs * 7;
    sum = (numT * numT) + (numC * numC) + (numG * numG) + pairs;
    cout << sum << endl;

    return 0;
}