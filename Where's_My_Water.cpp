#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,h;
    cin>>n>>h;

    vector<int>a(n);

    for(auto &x : a){
        cin>>x;
    }
    vector <ll> b;

    for(int i = 0 ; i<n ; i++){

    int l = i , r = i;
    while( l >= 0 && a[l] <=a[i]) l--;
    while( r <n && a[r]<=a[i]) r++;
    l++;
    r--;

    ll water = 0;
    for(int j = l ; j<=r ;j++){
        water += max(0LL, 1LL * h - a[j]);
    }
    b.push_back(water);
    }

    sort (b.begin(),b.end());
    reverse(b.begin(),b.end());

    ll ans = b[0];
    if(b.size()>1) ans +=b[1];

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
