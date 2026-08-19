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
    vector<ll>a(n);

    vector<int> primes;
    primes.reserve(n + 1);
    for (int x = 2; (int)primes.size() < n + 1; ++x) {
        bool ok = true;
        for (int p : primes) {
            if (1LL * p * p>x) break;
            if (x % p == 0) {
                ok = false;
                break; 
            }
        }
        if (ok){
            primes.push_back(x);
        }
    }

    for (int i =0; i < n; i++) {
        a[i] = 1LL * primes[i] * primes[i+1];
    }

    for (int i = 0; i < n; ++i) {
        cout << a[i] << " ";
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
