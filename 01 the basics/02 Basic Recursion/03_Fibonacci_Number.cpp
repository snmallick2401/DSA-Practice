#include <bits/stdc++.h>
using namespace std;
int fib(int n) {
    if (n <= 1) return n;
    return fib(n - 1) + fib(n - 2);
}

int main() {
    int n;
    cout << "Enter the number you want Fibonacci number for: ";
    cin >> n;

    cout << "Fibonacci Number: " << fib(n) << endl;

    return 0;
}
