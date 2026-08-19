#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;
    string s;
    cin >> s;

    ll n0 = 0, n1 = 0;
    for (char c : s) {
        if (c == '0') n0++;
        else n1++;
    }

    ll diff_n = n0 - n1;

    if(abs(diff_n) > 2){
        cout << -1 << endl;
        return;
    }

    string l;

    for(int i = 0; i < n - 1; i++){
        if(s[i] != s[i + 1]){
            l += s[i];
        }
    }
    l += s[n - 1];

    ll L = l.size();
    
    ll l0 = 0, l1 = 0;
    for (char c : l) {
        if (c == '0') l0++;
        else l1++;
    }

    ll diff_l = l0 - l1;

    ll ans = (n - L) + max(0LL,abs(diff_n - diff_l)-1);

    cout << ans << endl;
    
    
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