#include <iostream>

using namespace std;

int main()
{
    int numOfArticles, impactGoal, minScientists;
    cin >> numOfArticles;
    cin >> impactGoal;

    minScientists = impactGoal * numOfArticles;
    cout << minScientists << endl;

    return 0;
}