#include <iostream>
#include <vector>
using namespace std;

int main()
{
    int size = 0;
    vector<int> lotteryNumVect(10); //do no always need to initialize a vector size
    int lotteryNumArr[5] = {4, 13, 14, 24, 34};
    //insert an array into a vector, insert function increases the vector's size
    lotteryNumVect.insert(lotteryNumVect.begin(), lotteryNumArr, lotteryNumArr+3); //only inserts first 3 numbers in array
    lotteryNumVect.insert(lotteryNumVect.begin()+5, 44); //inserts 44 to the 5th index of the vector
    cout << "Number is position 5: " << lotteryNumVect[5] << endl; //prints the number at index 5
    cout << "What is stored in vector:" << endl;
    //print vector
    for(int i = 0; i < lotteryNumVect.size(); i++)
        cout << "index " << i << ": " << lotteryNumVect[i] << endl;
    
    //add value to end of vector
    lotteryNumVect.push_back(64);
    cout << "final value " << lotteryNumVect.back() << endl; //prints last value
    cout << "first value " << lotteryNumVect.front() << endl; //prints first value
    //remove final value
    lotteryNumVect.pop_back();

    return 0;
}

/*vector<int> v;
for(int i = 0; i < 10; i++){
    int x;
    cin >> x;
    v.push_back(x);
}*/