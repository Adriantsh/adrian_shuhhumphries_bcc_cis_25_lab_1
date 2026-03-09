/*
    Declares an integer variable named points and a string variable named name.
    Assigns a number and your name to these variables.
    Prints a message to the console that says "Hello, [name]! The computer has seen fit to assign you [points] points.”
*/
#include <iostream>
#include <string>
using namespace std;

int main()
{
    int points;
    string name;

    name = "Adrian Shuh-Humphries";
    points = 1729;

    cout << "Hello, " << name 
         << "! The computer has seen fit to assign you "
         << points << " points.\n";

    return 0;
}