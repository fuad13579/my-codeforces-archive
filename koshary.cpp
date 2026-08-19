#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int x,y;

    cin>>x>>y;

    if(x%2==1 && y%2==0 || x%2==0 && y%2==1 || x%2==0 && y%2==0){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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