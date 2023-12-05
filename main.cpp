#include <iostream>
using namespace std;

int main() {
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

    return 0;
}
