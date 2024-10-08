void bubbleSort(int arrayOfNumbers[], int numberOfIntegers) {
    for (int n = 0; n < numberOfIntegers - 1; n++) {

        for (int i = 0; i < numberOfIntegers - n - 1; i++) {
            if (arrayOfNumbers[i] > arrayOfNumbers[i + 1]) {
                int temp;

                temp = arrayOfNumbers[i];
                arrayOfNumbers[i] = arrayOfNumbers[i + 1];
                arrayOfNumbers[i + 1] = temp;


            }
        }
    }
}