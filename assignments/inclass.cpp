#include <iostream>
using namespace std;
#include <math.h>

main(){
    int x; 
    int y;
    cout << "*****************************************************" << endl;
    cout << "Type your first number: "; // Numerator
    cin >> x; // User Input
    cout << "Now type in your second number: "; // Denominator
    cin >> y; // User Input
    cout << "*****************************************************" << endl;
    cout << "1st Number: " << x << "\n" << "2nd Number: " << y << endl;
    cout << "*****************************************************" << endl;
    cout << "The result of the 1st Number / 2nd Number as a whole number is " << x / y  << "." << '\n' << "The remainder is " << x % y << "." << endl;
    cout << "*****************************************************" << endl;
    cout << "The result of the 1st Number * 2nd Number is " << x * y << "." << endl;
}