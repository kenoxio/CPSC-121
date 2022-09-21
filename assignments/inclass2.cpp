#include <iostream>
using namespace std;

main(){

    int x;
    cout << "Please enter a 3 digit number: ";
    cin >> x;
    cout << "The number you've entered is: " << x << "." << '\n';

    int y = x / 100; // if the entered digit is 123 this gives 1
    int z = x - (y * 100); // then 123 minus 1 * 100 = 23
    int a = z / 10; // then 23 / 10 = 2
    int b = z - (a * 10); // 23 minus 2 * 10 = 3
    // y 
    cout << "The number you've entered has: " << y << " hundreds, " << a << " tens, " << b << " ones." << endl;
}