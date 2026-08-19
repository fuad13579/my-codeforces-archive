#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n, m;
    cin >> n >> m;
    vector<int> s(n);
    for (int i = 0; i < n; i++) {
        cin >> s[i];
    }
    vector<int> t(n);
    for (int i = 0; i < n; i++) {
        cin >> t[i];
    }
    double ans = 0;
    for(int i = 0; i < n; i++){
        ans +=1.0/ t[i] - s[i] + 1;
    }

    cout << fixed << setprecision(10) << ans/n << endl;
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}