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
    vector<int>a(3*n);
    vector<int>ans(3*n);

    for(int i = 0;i < 3*n; i++){
        a[i]= i+1;
    }
    for(int i = 0; i < n; i++){
        ans[3*i] = a[i];
        ans[3*i + 1] = a[n + 2*i];
        ans[3*i + 2] = a[n + 2*i + 1];
    }

    for(int i = 0; i < 3*n; i++){
        cout << ans[i] <<" ";
    }

    cout<<endl;
    
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
