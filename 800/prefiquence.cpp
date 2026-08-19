#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m,i = 0 , j = 0;
    cin >> n >> m;

    string a,b;
    cin >> a >> b;

    while(i < n && j < m) {
        if(a[i] == b[j]) {
            i++;
            j++;
        } else {
            j++;
        }
    }
    cout << i << "\n";
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