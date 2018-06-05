#include <iostream>
#include <string>
using namespace std;

int main()
{
    string yourName, wholeName, firstName;
    yourName = "Skye Hagen";
    wholeName.assign(yourName); //copies yourName into wholeName
    firstName.assign(wholeName, 0 , 4); //start at index 0 and take 4 characters
    cout << "My name is: " << yourName << endl;
    cout << "My name again: " << wholeName << endl;
    cout << "Just my first name: " << firstName << endl;

    int lastNameIndex;
    lastNameIndex = yourName.find("Hagen", 0); //look for Hagen starting at index 0
    cout << "Index for Last Name: " << lastNameIndex << endl;
    yourName.insert(4, " Nichole"); //adds my middle name
    cout << "My full name: " << yourName << endl;
    yourName.erase(5,8); //takes out middle name starting at index 5 and erasing 8 characters
    cout << "My name: " << yourName << endl;
    yourName.replace(5, 5, "Voeller"); //replaces last name starting at index 5 and replacing 5 characters
    cout << "What my name could have been: " << yourName << endl;

    //2D array
    //compile this with -std=c++11
    int j, k;
    char myName[2][6] = { {'S', 'k', 'y', 'l', 'a', 'r'}, {'H', 'a', 'g', 'e', 'n'} };
    for (j = 0; j < 2; j ++) {
        for (k = 0; k < 6; k++)
            cout << myName[j][k];
        cout << endl;
    }

   //adding strings together
    string birthdayString = " Birthday";
    string happyString = "Happy";
    cout << happyString + birthdayString << endl;
    cout << happyString.append(" Birthday!!!!!!!") << endl; //append will change happyString to now be "happy birthday!!!!!"
    
    //checking string size
    int size, empty;
    size = happyString.size();
    cout << "size of string: " << size << endl;
    empty = happyString.empty();
    if (empty == 1)
        cout << "String is empty" << endl;
    else
        cout << "String is not empty" << endl;
    cout << happyString << endl;

    //Guessing Game
    string numGuessed;
    int guess = 0;
    do{
	    cout << "guess between 1 and 10 ";
	    getline (cin, numGuessed);
	    guess = stoi(numGuessed);
	    cout << guess << endl;
        if (guess == 4)
            cout << "Correct" << endl;
    }while(guess != 4);

    return 0;
}