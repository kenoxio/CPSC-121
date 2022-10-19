#include <iostream>
#include <stdlib.h>
#include <time.h>
using namespace std;

/*
CPSC 121 - In Class Exercise:

Is a random number in a range of numbers?


Step 1: Generate a random number in 1..1000
Step 2: Determine if that random number is within a range of numbers:

	Is it greater than x and lower than y?

	Let’s assume x is 150 and y is 210

Step 3: print out the number and whether it is in the range x < number < y

Next phase: multiple ranges

Step 4: Let’s see if the number is within two different ranges

	x < number < y AND j < number < k

	x = 150
	y = 210
	j = 635
	k = 792

Step 5: print out if the number is in either range
 */

int main(){
    int maxValue = 999;
    int randomVal=-1;
    srand(time(NULL));
    randomVal = (rand() % maxValue) + 1;
    cout << "Random value 1-1000: " << randomVal << endl;

    int x = 150;
    int y = 210;

    if((randomVal >= x) && (randomVal <= y)){
        cout << "Your random variable is inbetween x, " << x << ", and y, " << y << "." << endl;
    }
    else
        cout << "Your random variable is not between x, " << x << ", and y, " << y << "." << endl;
    cout << "****************************************************" << endl;

    int j = 636;
    int k = 792;

    if((randomVal >= j) && (randomVal <= k)){
        cout << "Your random variable is inbetween j, " << j << ", and k, " << k << "." << endl;
    } 
    else
        cout << "Your random variable is not inbetween j, " << j << ", and k, " << k << "." << endl;
}