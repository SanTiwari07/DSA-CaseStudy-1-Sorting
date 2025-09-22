#include <iostream>
#include <vector>
#include <algorithm> // For sort, stable_sort, find, lower_bound

using namespace std;

void display(const vector<int>& arr) {
    for (int x : arr) cout << x << " ";
    cout << endl;
}

int main() {
    int n;
    cout << "Enter number of products: ";
    cin >> n;

    vector<int> arr(n);
    cout << "Enter product prices: ";
    for (int i = 0; i < n; i++) cin >> arr[i];

    cout << "\nOriginal Product Prices: ";
    display(arr);

    // Sorting
    if (n <= 20) {
        cout << "\nDataset is SMALL → Using stable_sort (Insertion Sort equivalent)." << endl;
        stable_sort(arr.begin(), arr.end());
    } else {
        cout << "\nDataset is LARGE." << endl;
        cout << "Nature of input? (1 = Already Sorted, 2 = Random/Reverse): ";
        int nature; cin >> nature;

        if (nature == 1) {
            cout << "Using stable_sort (efficient for sorted input)." << endl;
            stable_sort(arr.begin(), arr.end());
        } else {
            cout << "Is stability required? (1 = Yes, 0 = No): ";
            int stable; cin >> stable;

            if (stable) {
                cout << "Using stable_sort (stable Merge Sort)." << endl;
                stable_sort(arr.begin(), arr.end());
            } else {
                cout << "Using sort (fast QuickSort/IntroSort)." << endl;
                sort(arr.begin(), arr.end());
            }
        }
    }

    cout << "\nSorted Product Prices: ";
    display(arr);

    // Searching
    int target;
    cout << "\nEnter a product price to search: ";
    cin >> target;

    cout << "Search Method? (1 = Linear, 2 = Binary): ";
    int choice; cin >> choice;

    if (choice == 1) {
        auto it = find(arr.begin(), arr.end(), target);
        if (it != arr.end())
            cout << "Found at index: " << (it - arr.begin()) << endl;
        else
            cout << "Not Found!" << endl;
    } else if (choice == 2) {
        auto it = lower_bound(arr.begin(), arr.end(), target);
        if (it != arr.end() && *it == target)
            cout << "Found at index: " << (it - arr.begin()) << endl;
        else
            cout << "Not Found!" << endl;
    } else {
        cout << "Invalid choice!" << endl;
    }

    return 0;
}
