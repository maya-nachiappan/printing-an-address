
//  CIS25 - assignment 6
//
//  Created by maya nachiappan on 9/15/24.
//
// write a program to ask the user for their street, city, state and zip code and then print it

#include <iostream>
using namespace std;

int main()
{
    string street, city, state;
    int zip;
    cout << "Enter your street: " << endl;
    getline (cin, street);
    cout << "Enter your city: " << endl;
    cin >> city;
    cout <<"Enter your state: " << endl;
    cin >> state;
    cout <<"Enter your zip code: " <<endl;
    cin >> zip;
    cout << "Your address is: " << endl;
    cout << street << endl;
    cout << city << ", " << state << ", " << zip << endl;
    return 0;
    
}
