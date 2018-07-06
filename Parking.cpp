#include <iostream>
#include <cmath>
#include <vector>
#include <algorithm>

using namespace std;

int walkingDistance(vector<int> stores, int len) {
    int difference, distance = 0;
    int k;

    for(k = 0; k < len - 1; k++) {
        difference = abs(stores[k] - stores[k+1]);
        distance = distance + difference; 
    }

    distance = distance + abs( (stores[0] - stores[len - 1]) );

    return distance;
}


int main()
{
    int cases, stores, storeLoc, distance;
    int k;
    vector<int> locations;

    cin >> cases;

    for(int x = 0; x < cases; x++) {
        locations.clear();
        cin >> stores;
        for(k = 0; k < stores; k++) { 
            cin >> storeLoc;
            locations.push_back(storeLoc);
        }
        sort(locations.begin(), locations.end());
        distance = walkingDistance(locations, stores);
        cout << distance << endl;
    }
    
    return 0;
}