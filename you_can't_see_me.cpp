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
    vector<int>a(n);
    for(auto &x : a){
        cin>>x;
    }

    ll ans = 1;
    for(int i : a){
        ans += i - 1;
    }
    cout<<ans<<"\n";
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