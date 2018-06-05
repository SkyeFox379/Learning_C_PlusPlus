#include <iostream>
#include <vector>
#include <algorithm>

using namespace std;

int main()
{
    int len, k, x, tmp, partyDay;
    cin >> len;
    vector<int> trees;

    //fills vector with the number of days it takes to grow each seedling
    for(k = 0; k < len; k++) {
        cin >> x;
        trees.push_back(x);
    }

    //sorts vector smallest to largest
    sort(trees.begin(), trees.end());
    //sorts vector largest to smallest
    reverse(trees.begin(),trees.end());
    
    partyDay = trees[0] + 2;
    for(k = 1; k < len; k++){
        if(partyDay < trees[k] + 2 + k)
            partyDay = trees[k] + 2 + k;
    }
    cout << partyDay << endl;

    return 0;
}