#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

ll MOD = 1e9 + 7;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;
    
    vector<ll> a(n);

    while(n--){
        string s;
        cin>>s;

        ll mpy = 1;
        ll ops = 0;

        if(s == "for"){
            ll k;
            cin>>k;

            a.push_back(k);
            mpy = (mpy * k)%MOD;

        }

        else if(s == "calc"){
            ll k;
            cin>>k;

            ll cost = (mpy * k)%MOD;
            ops = (ops + cost)%MOD;
        }
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