#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

const int MOD = 1e9 + 7;

ll modpow(int a, int b) {
    int res = 1;
    while (b) {
        if (b & 1) res = (1LL * res * a) % MOD;
        a = (1LL * a * a) % MOD;
        b >>= 1;
    }
    return res;
}

int modinverse(int a) {
    return modpow(a, MOD - 2);
}

int nCk(int n, int k) {
    if (k < 0 || k > n) return 0;
    ll res = 1;
    for (int i = 1; i <= k; i++) {
        res = (res * (n - i + 1)) % MOD;
        res = (res * modinverse(i)) % MOD;
    }
    return res;
}

void solve() {
    ll n;
    cin >> n;

    //ll q = nCk(n, 3);

    ll q = n * n * n;


    ll p = (n-1)*(n-1)/4;

    ll ans = (p * q) % MOD;

    cout << ans << '\n';
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