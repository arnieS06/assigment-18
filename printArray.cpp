#include <iostream>
using namespace std;

void printArray(int arrayOfNumbers[], int numberOfIntegers) {

    for (int i = 0; i < numberOfIntegers; i++) {
        cout << arrayOfNumbers[i];
        
        if (i < numberOfIntegers - 1) {
            cout << ", ";
        }
        
        else if (i = numberOfIntegers - 1) {
            cout << ".";
        }
    }
    
}