#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    ll x1,y1,r1;
    cin>>x1>>y1>>r1;
    ll x2,y2,r2;
    cin>>x2>>y2>>r2;

    ll k;
    cin>>k;

    ll dx = x1-x2;
    ll dy = y1-y2;

    ll dist2 = dx*dx + dy*dy;
    long double d = sqrt((long double)dist2);

    long double max_route;

    if(d > r1 + r2) {
        max_route = max(2.0*r1 , 2.0*r2);
    }
    else if (d < abs(r1 - r2)){
        max_route = 2.0*max(r1,r2);
    }
    else{
        max_route = r1 + d + r2;
    }

    if( k <= max_route) {
        cout<<"YES\n";
    } else {
        cout<<"NO\n";
    }
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
