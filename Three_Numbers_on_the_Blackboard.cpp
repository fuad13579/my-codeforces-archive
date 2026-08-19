#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c;
    cin>>a>>b>>c;
    vector<int>v = {a,b,c};
    sort(all(v));

    if(v[0] == v[1] && v[1] == v[2]) {
        cout << 0 << "\n";
        return;
    }

    int ans = 0;
    
    if(v[0] + v[1] > v[2]) ans = v[2] - v[0];
    else ans = v[1];
    cout << ans << "\n";
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