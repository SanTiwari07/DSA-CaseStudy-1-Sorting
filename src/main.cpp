#include <iostream>
#include "sort.h"
using namespace std;

void display(int arr[], int n) {
    for (int i = 0; i < n; i++) cout << arr[i] << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    int arr[n];
    cout << "Enter product prices: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nOriginal Product Prices: ";
    display(arr, n);

    // Flowchart decision logic
    if (n <= 20) {  
        cout << "\nDataset is SMALL → Using Insertion Sort." << endl;
        insertion(arr, n);
    } 
    else {
        cout << "\nDataset is LARGE." << endl;
        cout << "Nature of input? (1 = Already Sorted, 2 = Random/Reverse): ";
        int nature; 
        cin >> nature;

        if (nature == 1) {
            cout << "Using Insertion Sort (efficient for sorted input)." << endl;
            insertion(arr, n);
        } 
        else {
            cout << "Is stability required? (1 = Yes, 0 = No): ";
            int stable; 
            cin >> stable;

            if (stable) {
                cout << "Using Merge Sort (stable)." << endl;
                merge(arr, n, 0, n - 1);
                display(arr, n);
            } 
            else {
                cout << "Using Quick Sort (fast)." << endl;
                quicksort(arr, 0, n - 1);
                display(arr, n);
            }
        }
    }

    cout << "\nSorted Product Prices: ";
    display(arr, n);

    // Searching feature
    int target;
    cout << "\nEnter a product price to search: ";
    cin >> target;

    cout << "Search Method? (1 = Linear, 2 = Binary): ";
    int searchChoice; 
    cin >> searchChoice;

    if (searchChoice == 1) 
        linear(arr, n, target);
    else if (searchChoice == 2) 
        binary(arr, 0, n - 1, target);
    else 
        cout << "Invalid search choice!" << endl;

    return 0;
}
