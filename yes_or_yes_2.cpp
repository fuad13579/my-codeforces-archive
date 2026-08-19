#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
        cin >> s;

        int count_Y = 0;

        for (char ch : s) {
            if (ch == 'Y') {
                count_Y++;
            }
        }

        if (count_Y <= 1) {
            cout << "YES\n";
        } else {
            cout << "NO\n";
        }
}

int main() {
    fast_io;

    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}