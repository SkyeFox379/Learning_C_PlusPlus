#include <iostream>
#include <vector>

using namespace std;

int main() 
{
    int scores[5][4], sum = 0;
    vector<int> scoreSum;

    for(int i = 0; i < 5; i++) {
        sum = 0;
        for(int k = 0; k < 4; k++) {
            cin >> scores[i][k];
            sum = sum + scores[i][k];
            //cout << "Sum: " << sum << endl;
        }
        scoreSum.push_back(sum);
    }
    
    //for(int j = 0; j < 5; j++)
    //    cout << "Sum: " << scoreSum[j] << endl;

    if (scoreSum[0] > scoreSum[1] && scoreSum[0] > scoreSum[2] && scoreSum[0] > scoreSum[3] && scoreSum[0] > scoreSum[4]) 
        cout << "1 " << scoreSum[0] << endl;
    else if (scoreSum[1] > scoreSum[0] && scoreSum[1] > scoreSum[2] && scoreSum[1] > scoreSum[3] && scoreSum[1] > scoreSum[4]) 
        cout << "2 " << scoreSum[1] << endl;
    else if (scoreSum[2] > scoreSum[0] && scoreSum[2] > scoreSum[1] && scoreSum[2] > scoreSum[3] && scoreSum[2] > scoreSum[4]) 
        cout << "3 " << scoreSum[2] << endl;
    else if (scoreSum[3] > scoreSum[0] && scoreSum[3] > scoreSum[1] && scoreSum[3] > scoreSum[2] && scoreSum[3] > scoreSum[4]) 
        cout << "4 " << scoreSum[3] << endl;
    else if (scoreSum[4] > scoreSum[0] && scoreSum[4] > scoreSum[1] && scoreSum[4] > scoreSum[2] && scoreSum[4] > scoreSum[3]) 
        cout << "5 " << scoreSum[4] << endl;
    return 0;
}