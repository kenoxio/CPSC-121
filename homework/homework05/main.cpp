#include <iostream>
#include <math.h>
#include <chrono>
#include <thread>

using namespace std;
using namespace std::this_thread; // sleep_for, sleep_until
using namespace std::chrono; // nanoseconds, system_clock, seconds

int main() {
    int altitude_M = 50;
    int velocity_M = 10;
    
    cout << "Beginning pumpkin drop simulation." << endl;
    cout << "Part 1: Fixed velocity drop." << endl;
    
    cout << "Time (ms): 0 -- Altitude: " << altitude_M << " -- Velocity: -" << velocity_M << endl;

    for (altitude_M = 50; altitude_M > 0; (altitude_M - velocity_M))
        cout << "What up" << endl;
    int delayOneSecond_ms = 1000;
    int delayThreeSeconds_ms = 3000;
    cout << "Starting - wait 1 second" << endl;
    // wait 1 second (1000 millseconds)
    sleep_for(milliseconds(delayOneSecond_ms));

    cout << "Now waiting 3 more seconds" << endl;
    // wait 3 seconds (3000 milliseconds)
    sleep_for(milliseconds(delayThreeSeconds_ms));
    cout << "Done." << endl;
}