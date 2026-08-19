#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    string s;
    cin >> n >> s;

    int blocks = 1;

    for (int i = 1; i < n; i++) {
        if (s[i] != s[i - 1]) {
            blocks++;
        }
    }

    int decrease = 0;

    for (int i = 1; i < n - 1; i++) {
        if (s[i - 1] == s[i + 1] && s[i] != s[i - 1]) {
            decrease = 2;
        } 
        else if (s[i] != s[i - 1] && s[i] != s[i + 1]) {
            decrease = max(decrease, 1);
        }
    }

    cout << blocks - decrease << '\n';
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