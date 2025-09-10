// Reverse an array using recursion

#include <bits/stdc++.h>
using namespace std;

void reverseArray(int i, int arr[], int n) {
    if (i >= n / 2) return;  // base case
    swap(arr[i], arr[n - i - 1]); 
    reverseArray(i + 1, arr, n); 
}

int main() {
    int n;
    cout << "Enter the size of the array: ";
    cin >> n;

    int arr[n];
    cout << "Enter " << n << " elements:" << endl;
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    reverseArray(0, arr, n);

    cout << "Reversed array: ";
    for (int i = 0; i < n; i++) {
        cout << arr[i] << " ";
    }
    cout << endl;

    return 0;
}
