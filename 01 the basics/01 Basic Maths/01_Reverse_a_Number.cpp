#include <bits/stdc++.h>
using namespace std;

int main() {
    int x;
    cout << "Write the number you want to reverse : " << endl;
    cin >> x;

    long long ans = 0;
    while (x != 0) {
        long long d = x % 10;
        ans = ans * 10 + d;
        x /= 10;
    }

    if (ans < INT_MIN || ans > INT_MAX) {
        cout << "your number is too big" << endl;
        return 0;
    }

    cout << "Reversed number : " << ans << endl;
    return 0;
}
