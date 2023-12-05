#include <iostream>
using namespace std;

int main() {
    /*
     * Task 1 - LAB8:
     * Write a C++ program which takes array of integers where the size is
        defined by the user and find the sum , average , largest and the
        smallest number .
    */
    int arrSize, sum = 0;
    cout << "Enter Number arrSize: ";
    cin >> arrSize;
    if(arrSize <= 0) {
        cout << "Enter a valid arrSize please";
        return 1;
    }
    int arrOfNumbers[arrSize];
    cout << "Enter [" << "" << arrSize << "] numbers \n";
    for(int i = 0; i < arrSize; i++) {
        cin >> arrOfNumbers[i];
    }

    cout << "Number of values is: " << arrSize << endl;
    // Assuming first element is max and min
    int max = arrOfNumbers[0];
    int min = arrOfNumbers[0];

    for(int number : arrOfNumbers) {
        cout << number << "  " << endl;
        if(number > max){
            max = number;
        } else {
            min = number;
        }
        sum += number;
    }

    cout << "The sum is: " << sum << endl;
    cout << "The average is: " << (sum / arrSize) << endl;
    cout << "The largest is: " << max << endl;
    cout << "The smallest is: " << min << endl;

    /*
     * Task 2 - LAB8
     * Combine arr1 + arr2
     */

    int arr1[5];
    int arr2[5];
    int arrC[10];
    cout << "please enter array 1" << endl;
    for(int i = 0; i < 5; i++) {
        cin >> arr1[i];
    }
    cout << "please enter array 2" << endl;

    for(int i = 0; i < 5; i++) {
        cin >> arr2[i];
    }

    for(int i =0; i < 5; i++) {
        arrC[i] = arr1[i];
        arrC[i+5] = arr2[i];
    }
    cout << "The value of arrC" << endl;
    for(int n : arrC) {
        cout << n << ", ";
    }

    return 0;
}
