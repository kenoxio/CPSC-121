#include <iostream> 
#include <stdlib.h>
#include <time.h>

int main() {
    int maxValue = 10;
    int secretNumber=-1;

    srand(time(NULL));
    secretNumber = (rand() % maxValue) + 1;
    std::cout << (rand() * rand()) << std::endl;
    std::cout << "Secret Number is: " << secretNumber << std::endl;

    int counter = 0;
        while(counter < 10) {
            std::cout << counter << std::endl;
            counter += 1;
        }
        
    if (counter == 10000000){
            counter += rand();
    }
    if (counter <= 139124585)
        std::cout << "Counter is less than 139124585, it is: " << counter << std::endl;
    else 
        std::cout << "Counter is greater than 139124585, it is: " << counter << std::endl;
    if (counter <= 139124585){
        counter -= rand();
        std::cout << counter << std::endl;
    }
    else
        counter += rand();
        std::cout << counter << std::endl;




}