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

    int c1 = 0 , c2 = 0, c0 = 0;

    for(auto &x : a){
        cin>>x;
        if(x == 1) c1++;
        else if(x == 2) c2++;
        else c0++;
    }

    if(c0 == n){
        cout<<n<<endl;
        return;
    }

    int m = min(c1,c2);

    cout<<m + c0<<endl;

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