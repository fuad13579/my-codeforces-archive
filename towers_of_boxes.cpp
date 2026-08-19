#include <bits/stdc++.h>
using namespace std;

// using ll = long long;
// using pii = pair<int,int>;
// using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
//#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m,d,ans;
    cin>>n>>m>>d;

    int hm = (d/m)+1;

    int tower = n/hm;

    int left = n%hm;

    if(left>0){
        ans = tower + 1;
    }
    else{
        ans = tower;
    }

    cout<<ans<<endl;


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