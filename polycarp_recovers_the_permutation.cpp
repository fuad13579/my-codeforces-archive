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
    cin >> n;

    vector<int> a(n);
    for (int &x : a) cin >> x;

    if (a[0] != n && a[n - 1] != n) {
        cout << -1 << '\n';
        return;
    }

    if (a[0] == n) {
        cout << n << ' ';
        for (int i = n - 1; i >= 1; i--) {
            cout << a[i] << ' ';
        }
    } 
    else {
        for (int i = n - 2; i >= 0; i--) {
            cout << a[i] << ' ';
        }
        cout << n;
    }

    cout << '\n';

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