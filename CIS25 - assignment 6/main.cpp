
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
    cout << "enter your street: " << endl;
    cin >> street;
    cout << "enter your city: " << endl;
    cin >> city;
    cout <<"enter your state: " << endl;
    cin >> state;
    cout <<"enter your zip code: " <<endl;
    cin >> zip;
    cout << street << endl;
    cout << city << "," << state << "," << zip;
    return 0;
    
}
