#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int sum;
    vector<int> a(7);

    for(int i = 0; i<7; i++){
        cin>>a[i];
    }
    sort(all(a));
    sum = a[6];

    for(int i = 0; i<6; i++){
        sum -= a[i];
    }
    
    cout<<sum<<endl;
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
