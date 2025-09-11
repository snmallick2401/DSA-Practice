// Check if a string is palindrome or not
#include <bits/stdc++.h>
using namespace std;

int main() {
    string s;
    cout << "Write your sentence to check whether it is a Valid Palindrome or not:" << endl;
    getline(cin, s);

    int left = 0, right = s.length() - 1;

    while (left < right) {
        while (left < right && !isalnum(s[left])) left++;
        while (left < right && !isalnum(s[right])) right--;

        if (tolower(s[left]) != tolower(s[right])) {
            cout << "Your sentence is NOT a valid palindrome" << endl;
            return 0;
        }

        left++;
        right--;
    }

    cout << "Your sentence IS a valid palindrome" << endl;
    return 0;
}
