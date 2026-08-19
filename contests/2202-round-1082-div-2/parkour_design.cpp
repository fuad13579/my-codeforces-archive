#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    long long x, y;
    cin >> x >> y;

    if (x-2*y < 0 || (x-2*y) % 3 != 0) {
        cout << "NO\n";
        return;
    }

    long long l = (x-2*y) / 3;
    long long n;
    if(y>0)
        n = 2*0;
    else
        n= 2*(-y);

    if (l >= n) cout << "YES\n";
    else cout << "NO\n";
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
