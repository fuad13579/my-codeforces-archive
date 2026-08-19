#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;

    vector<ll> a(n);
    for(int i=0; i<n; i++) {
        cin>>a[i];
    }

    ll total = 0;
    ll now_min = a[0];
    for(int i=0; i<n; i++) {
        now_min = min(now_min, a[i]);
        total += now_min;
    }
    cout<<total<<"\n";
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