#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<ll> a(n);
    for (int i = 0; i < n; i++) {
        cin >> a[i];
    }

    sort(all(a));

    vector<ll> ans;
    if (!a.empty()) {
        ans.push_back(a[0]);
        for (int i = 1; i < n; i++) {
            if (a[i] == a[i - 1] || a[i] > a[i - 1] + 1) {
                ans.push_back(a[i]);
            }
        }

        vector<ll> filtered;
        filtered.push_back(ans[0]);
        for (int i = 1; i < (int)ans.size(); i++) {
            if (ans[i] != filtered.back() + 1) {
                filtered.push_back(ans[i]);
            }
        }
        ans.swap(filtered);
    }

    cout << ans.size() << '\n';
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
