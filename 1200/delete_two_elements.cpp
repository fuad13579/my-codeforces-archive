#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;

    vector<ll> a(n);
    ll sum = 0;

    for (ll &x : a) {
        cin >> x;
        sum += x;
    }

    if ((2 * sum) % n != 0) {
        cout << 0 << '\n';
        return;
    }

    ll target = (2 * sum) / n;
    sort(a.begin(), a.end());

    ll ans = 0;
    int l = 0, r = n - 1;

    while (l < r) {
        ll currentSum = a[l] + a[r];

        if (currentSum < target) {
            l++;                
        }
        else if (currentSum > target) {
            r--;               
        }
        else {

            if (a[l] == a[r]) {
                ll count = r - l + 1;
                ans += count * (count - 1) / 2;
                break;
            }

            ll leftcount = 0;
            ll rightcount = 0;
            ll leftvalue = a[l];
            ll rightvalue = a[r];

            while (l <= r && a[l] == leftvalue) {
                leftcount++;
                l++;
            }

            while (l <= r && a[r] == rightvalue) {
                rightcount++;
                r--;
            }

            ans += leftcount * rightcount;
        }
    }

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