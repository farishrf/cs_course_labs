#include <iostream>
using namespace std;

int main() {
    /*
     * Task 4 - LAB8
     * Write a program that reads single integer array size and all elements one by one , sort all numbers ascending and print (unsorted and sorted) array values.
     */
    int size, temp;
    cout << "Please, Enter array size";
    cin >> size;
    int arrNums[size];
    cout << "Enter [" << size << "] numbers" << endl;
    for(int i=0; i < size; i++){
        cout << "Enter value - [" << i+1 <<  "]" << endl;
        cin >> arrNums[i];
    }
    cout << "Result is" << endl;
    for (int i = 0; i < size; ++i) {
        cout << arrNums[i] << " ";
    }

    // sort ascending
    for (int i = 0; i < size; ++i) {
        for(int j = i+1; j < size; j++) {
            if(arrNums[i] > arrNums[j]) {
                temp = arrNums[i];
                arrNums[i] = arrNums[j];
                arrNums[j] = temp;
            }
        }
    }
    cout << endl;

    for (int i = 0; i < size; ++i) {
        cout << arrNums[i] << " ";
    }

    return 0;
}
