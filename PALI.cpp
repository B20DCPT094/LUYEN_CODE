#include <bits/stdc++.h>
#include <string>
using namespace std;

bool Palindrome(string s) {
    int i = 0, j = s.length() - 1;
    while (i < j) {
        if (s[i] != s[j])
            return false;
        i++;
        j--;
    }
    return true;
}

int main() {
    int n;
    cin >> n;
    cin.ignore();
    string* l = new string[n];
    for (int i = 0; i < n; i++) {
        cin >> l[i];
    }
    for (int i = 0; i < n; i++) {
        if (Palindrome(l[i]))
            cout << l[i] << " ";
    }
    return 0;
}