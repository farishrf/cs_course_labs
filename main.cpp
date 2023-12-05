#include <iostream>
using namespace std;

int main() {
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
