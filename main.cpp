#include <iostream>
#include "bubbleSort.hpp"
#include "printArray.hpp"
using namespace std;

int main() {

    int numberOfIntegers;
    cout << "how many numbers do you want to give me? -> ";
    cin >> numberOfIntegers;

    int arrayOfNumbers[numberOfIntegers];

    for (int i = 0; i < numberOfIntegers; i++) {
        cout << "Enter your number: ";
        cin >> arrayOfNumbers[i];
    }

    cout << "\n";

    printArray(arrayOfNumbers, numberOfIntegers);

    bubbleSort(arrayOfNumbers, numberOfIntegers);

    printArray(arrayOfNumbers, numberOfIntegers);

    return 0;

}
