#include <iostream>
using namespace std;

//default value function example, the default value has to be last
int addNums (int num1, int num2 = 0) {
    int sum;
    sum = num1 + num2;
    return sum;
}

//able to overload functions (not good practice), you can use the same name with different parameters
int addNums (int num1, int num2, int num3) {
    return num1 + num2 + num3;
}

//recursive function (need more practice)
int getFactorial(int num) {
    int sum;
    if(num == 1)
        sum = 1;
    else
        sum = getFactorial(num - 1) * num;
    return sum;
}


int main()
{
    int sum1, sum2, factorial;
    sum1 = addNums(1);
    sum2 = addNums(1, 5, 6);
    cout << "first sum is " << sum1 << endl;
    cout << "second sum is " << sum2 << endl;
    factorial = getFactorial(3);
    cout << "the factorial of 3 is " << factorial << endl;

    return 0;
}