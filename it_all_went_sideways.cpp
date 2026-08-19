#include <bits/stdc++.h>
using namespace std;

using ll = long long;

#define fast_io ios::sync_with_stdio(false); cin.tie(nullptr);

void solve() {
    int n;
    cin >> n;

    vector<int> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    vector<int> suf_min(n);
    suf_min[n - 1] = a[n - 1];
    for (int i = n - 2; i >= 0; i--) {
        suf_min[i] = min(a[i], suf_min[i + 1]);
    }

    ll total = 0;
    ll fixed = 0;
    for (int i = 0; i < n; i++) {
        total += a[i];
        fixed += suf_min[i];
    }

    ll ans = total - fixed;

    unordered_map<int, int> seen;
    seen.reserve(n * 2);

    for (int i = 0; i < n; i++) {
        seen[suf_min[i]]++;

        if (a[i] != suf_min[i]) {
            continue;
        }

        ll reduced_fixed = seen[suf_min[i]];
        ans = max(ans, total - 1 - (fixed - reduced_fixed));
    }

    cout << ans << '\n';
}

int main() {
    fast_io;

    int t;
    cin >> t;
    while (t--) {
        solve();
    }

    return 0;
}
