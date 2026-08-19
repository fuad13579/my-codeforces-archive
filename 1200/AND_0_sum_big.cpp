#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

long long findpowmod(long long a, long long b, long long mod){
    if(b == 0) return 1;
    if(b%2 == 0){
        long long half = findpowmod(a, b/2, mod);
        return (half*half)%mod;
    }
    else{
        long long half = findpowmod(a, b/2, mod);
        return ((half*half)%mod * a) % mod;
    }
}

void solve() {
    int n,k;
    cin>>n>>k;
    long long ans = findpowmod(n, k, 1000000007);

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