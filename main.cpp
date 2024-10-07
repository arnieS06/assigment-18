#include <iostream>
using namespace std;

void bubbleSort(int arrayOfNumbers[], int numberOfIntegers);

int main() {

    int numberOfIntegers;
    cout << "how many numbers do you want to give me? -> ";
    cin >> numberOfIntegers;

    int arrayOfNumbers[numberOfIntegers];

    for (int i = 0; i < numberOfIntegers; i++) {
        cout << "Enter your number: ";
        cin >> arrayOfNumbers[i];
    }


}

void bubbleSort(int arrayOfNumbers[], int numberOfIntegers) {
    for (int i = 0; i < numberOfIntegers; i++) {
        if (arrayOfNumbers[i] > arrayOfNumbers[i + 1]) {
            


        }
    }
}
