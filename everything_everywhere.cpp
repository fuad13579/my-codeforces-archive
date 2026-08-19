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
    vector <int> a(n);
    for ( int i = 0; i<n; i++){
        cin>>a[i];
    }
    int count = 0;

    for(int i = 0; i<n-1; i++){
        if(abs(a[i]-a[i+1])==__gcd(a[i],a[i+1])){
            count++;
        }
    }
    cout<<count<<endl;
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