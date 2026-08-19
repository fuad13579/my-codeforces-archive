#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,a,b;
    cin>>n>>a>>b;
    ll groups = n / 3;
    ll rem = n % 3;

    ll cost = groups * min(3*a,b);
    if(rem == 1) cost += min(a,b);
    else if(rem == 2) cost += min(2*a,b);

    cout<<cost<<endl;

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