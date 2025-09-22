#include <iostream>
#include "sort.h"
using namespace std;

int main() {
    int n;
    cout << "Enter number of elements: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter elements: ";
    for(int i=0; i<n; i++) cin >> arr[i];

    cout << "Dataset size large? (1=Yes, 0=No): ";
    int large; cin >> large;

    if(!large) {
        cout << "Using Bubble/Selection/Insertion Sort (small dataset)." << endl;
        insertionSort(arr); // simplest choice for small
    } else {
        cout << "Nature of input? (1=Sorted, 2=Random/Reverse): ";
        int nature; cin >> nature;

        if(nature == 1) {
            cout << "Using Insertion Sort (efficient for sorted input)." << endl;
            insertionSort(arr);
        } else {
            cout << "Is stability required? (1=Yes, 0=No): ";
            int stable; cin >> stable;

            if(stable) {
                cout << "Using Merge Sort (stable)." << endl;
                mergeSort(arr, 0, n-1);
            } else {
                cout << "Using Quick Sort (fast)." << endl;
                quickSort(arr, 0, n-1);
            }
        }
    }

    cout << "Sorted array: ";
    printArray(arr);
    return 0;
}
