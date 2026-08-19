#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

bool can_make(ll s, ll m, ll k) {
    ll low = 0, high = 0;

    for (int b = 0; b <= 62; b++) {
        int sb = (s >> b) & 1LL;
        int mb = (m >> b) & 1LL;

        if (mb == 0) {
            ll cmin = low;
            if ((cmin & 1LL) != sb) cmin++;
            ll cmax = high;
            if ((cmax & 1LL) != sb) cmax--;

            if (cmin > cmax) return false;

            low = (cmin - sb) / 2;
            high = (cmax - sb) / 2;
        } else {
            ll nlow;
            if (low >= sb) nlow = (low - sb + 1) / 2;
            else nlow = 0;

            if (high + k < sb) return false;
            ll nhigh = (high + k - sb) / 2;

            if (nlow > nhigh) return false;
            low = nlow;
            high = nhigh;
        }
    }

    return (low <= 0 && 0 <= high);
}

ll min_length(ll s, ll m) {
    if (m == 0) return (s == 0 ? 1 : -1);
    if (s == 0) return 1;

    ll g = m & -m;
    if (s % g != 0) return -1;

    ll lo = 1, hi = s, ans = -1;
    while (lo <= hi) {
        ll mid = lo + (hi - lo) / 2;
        if (can_make(s, m, mid)) {
            ans = mid;
            hi = mid - 1;
        } else {
            lo = mid + 1;
        }
    }
    return ans;
}

void solve() {
    ll s,m;
    cin>>s>>m;
    cout << min_length(s, m) << '\n';

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

