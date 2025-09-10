#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Write the number you want to reverse : " << endl;
    cin >> x;

    int ans = 0;
    while (x != 0) {
        int d = x % 10;
        if (ans > INT_MAX / 10 || (ans == INT_MAX / 10 && d > 7)) {
            cout << "Overflow! Cannot reverse." << endl;
            return 0;
        }
        if (ans < INT_MIN / 10 || (ans == INT_MIN / 10 && d < -8)) {
            cout << "Underflow! Cannot reverse." << endl;
            return 0;
        }

        ans = ans * 10 + d;
        x /= 10;
    }

    cout << "Reversed number : " << ans << endl;
    return 0;
}
