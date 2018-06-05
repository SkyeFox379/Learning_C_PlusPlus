#include <iostream>

using namespace std;

//least to greatest
void bubbleSort(int array[], int len)
{
    int i, x, tmp;
    for(i = 0; i < len; i++) {
        for(x = 0; x < len - 1 - i; x++) {
            if(array[x] > array[x + 1]) {
                tmp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = tmp;
            }
        }
    }
}

//greatest to least
void bubbleSort2(int array[], int len)
{
    int i, x, tmp;
    for(i = 0; i < len; i++) {
        for(x = 0; x < len - 1 - i; x++) {
            if(array[x] < array[x + 1]) {
                tmp = array[x];
                array[x] = array[x + 1];
                array[x + 1] = tmp;
            }
        }
    }


}

//least to greatest
void selectionSort(int array[], int len)
{
    int greatestVal, i, x, tmp;
    int greatestLocation;

    for(i = 0; i < len; i++) {
        greatestVal = array[0];
        greatestLocation = 0;
        for(x = 0; x < len - i; x++) {
            if(array[x] > greatestVal) {
                greatestVal = array[x];
                greatestLocation = x;
            }
        }
        array[greatestLocation] = array[len - i - 1];
        array[len - i - 1] = greatestVal;
    }
}

//greatest to least
void selectionSort2(int array[], int len)
{
    int greatestVal, i, x;
    int greatestLocation;

    for(i = 0; i < len; i++) {
        greatestVal = array[len - 1];
        greatestLocation = len - 1;
        for(x = 0 + i; x < len; x++) {
            if(array[x] > greatestVal) {
                greatestVal = array[x];
                greatestLocation = x;
            }
        }
        array[greatestLocation] = array[i];
        array[i]= greatestVal;
    }
}


int main() 
{
    int i;
    int nums[5] = {2, 5, 3, 10, 7};

     cout << "------Bubble Sort-------" << endl;
    
    bubbleSort(nums, 5);
    cout << "Least to Greatest: ";
    for(i = 0; i < 5; i++)
        cout << nums[i] << " ";
    cout << endl;

    bubbleSort2(nums, 5);
    cout << "Greatest to Least: ";
    for(i = 0; i < 5; i++) 
        cout << nums[i] << " ";
    cout << endl;
    
    cout << "-----Selection Sort-----" << endl;

    selectionSort(nums, 5);
    cout << "Least to Greatest: ";
    for(i = 0; i < 5; i++)
        cout << nums[i] << " ";
    cout << endl;

    selectionSort2(nums, 5);
    cout << "Greatest to Least: ";
    for(i = 0; i < 5; i++)
        cout << nums[i] << " ";
    cout << endl;

    return 0;
}