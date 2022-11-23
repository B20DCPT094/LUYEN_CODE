#include <bits/stdc++.h>

using namespace std;

int t;
long long l, r;
long long countDiv(int x) {
    return (r / x) - ((l - 1) / x);
}

int main() {
    ios_base::sync_with_stdio(false);
    cin >> t;
    while (t--) {
        cin >> l >> r;
        long long res = countDiv(4) + countDiv(7) + countDiv(11) - countDiv(28) - countDiv(44) - countDiv(77) + countDiv(308);
        if (l == 0) res++;
        cout << res << '\n';
    }
    return 0;
}