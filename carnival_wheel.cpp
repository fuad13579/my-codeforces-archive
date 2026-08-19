#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        long long l, a, b;
        cin >> l >> a >> b;

        if (b == 0) {
            cout << a << '\n';
        } else {
            long long g = gcd(l, b);
            cout << (l - g) + (a % g) << '\n'; //max_section = (l - g) + (a % g)

        }
    }

    return 0;
}
