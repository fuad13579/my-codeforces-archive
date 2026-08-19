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
    vector<ll> a(n),b(n);
    string s;

    for(auto &x : a) cin>>x;
    cin>>s;

    vector<ll> idx_group(n);
    int groups = 1;
    idx_group[0] = 0;


    for (int i = 0; i < n-1; i++) {
        if (s[i] =='=') idx_group[i+1] = idx_group[i];
        else idx_group[i+1] = groups++;
    }

    vector<ll> l(groups,1),r(groups,1);


    for (int i = 0; i < n-1; i++) {
        if (s[i] =='<') {
            l[idx_group[i+1]] = l[idx_group[i]]+1;
        }
    }

    for (int i = n-2; i >= 0; i--) {
        if (s[i] =='>') {
            r[idx_group[i]] =  r[idx_group[i+1]]+1;
        }
    }

    ll ans = 0;
    

    for (int i = 0; i < n; i++) {
        b[i] = max(l[idx_group[i]], r[idx_group[i]]);
    }
    for(int i = 0 ; i < n; i++){
        ans +=(1LL*a[i]*b[i]);
    }
    cout<<ans<<'\n';

    for(int i = 0 ; i < n; i++){
        cout<<b[i]<<" ";
    }

}

int main() {
    fast_io;

    int t=1;
    //cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
