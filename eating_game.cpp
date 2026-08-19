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

    vector<int> a(n);
    for (int i = 0; i < n; i++) cin >> a[i];

    vector<pair<int,int>> v;
    v.reserve(n);
    for (int i = 0; i < n; i++) v.emplace_back(a[i], i);

    sort(v.begin(), v.end()); 

    int maxval = v.back().first;
    int count = 0;
    for (int i = n - 1; i >= 0 && v[i].first == maxval; i--) {
        count++;
    }
    cout << count << endl;
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
