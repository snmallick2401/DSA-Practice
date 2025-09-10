#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Enter a number : " << endl;
    cin >> x;

    int original = x;
    int ans = 0;

    while (x != 0) {
        int d = x % 10;
        ans = (ans * 10) + d;
        x /= 10;
    }

    if (ans == original) {
        cout << "Your number " << original << " is a Palindrome" << endl;
    } else {
        cout << "Your number " << original << " is not a Palindrome" << endl;
    }
    return 0;
}
