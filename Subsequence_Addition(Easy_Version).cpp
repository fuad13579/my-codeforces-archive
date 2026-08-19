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
    vector<int> c(n);
    for(int i=0; i<n; i++) {
        cin >> c[i];
    }

    sort(all(c));

    if(n == 1 && c[0] != 1) {
        cout << "NO\n";
        return;
    }
    else if(n == 1 && c[0] == 1) {
        cout << "YES\n";
        return;
    }

    ll sum = 1; 

    for (int i = 1; i < n; i++) {
        if (c[i] > sum) {
            cout << "NO\n";
            return;
        }

        sum += c[i];
    }

    cout << "YES\n";

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