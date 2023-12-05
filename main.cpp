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
     * Write a C ++ program which takes two arrays of 5 integers each , arrA and arrB , the user
        will enter the values of arrays. arrC is a third integer array with size (10), the program should
        put into arrC the values of arrA and arrB in order. Then the program will display arrC
        elements.
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

    /*
     * Task 3 - LAB8
     * Write a program that reads in ten numbers and displays the number of
        distinct numbers and the distinct numbers separated by exactly one
        space (i.e., if a number appears multiple times, it is displayed only once).
        Hint: Read a number and store it to an array if it is new. If the number is
        already in the array, ignore it.) After the input, the array contains the
        distinct numbers.
     */
    int arr[10], count = 0;

    for(int i =0; i < 10; i++) {
        bool isDist = true; // Assuming by default the number is district
        int num;
        cin >> num;

        // check current number
        for(int j =0; j < i; j++) {
            if(num == arr[j]) {
                isDist = false;
                break;
            }
        }

        if(isDist) {
            arr[count++] = num;
        }

    }

    for(int i = 0; i<count; i++) {
        cout << arr[i] << " ";
    }

    /*
     * Task 4 - LAB8
     * Write a program that reads single integer array size and all elements one
by one , sort all numbers ascending and print (unsorted and sorted)
array values.
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
