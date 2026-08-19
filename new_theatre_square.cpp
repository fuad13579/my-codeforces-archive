#include <bits/stdc++.h>
using namespace std;

using ll = long long;

void solve() {
    int n, m;
    int x, y;
    cin >> n >> m >> x >> y;

    ll answer = 0;

    for (int i = 0; i < n; ++i) {
        string row;
        cin >> row;

        int j = 0;
        while (j < m) {
            if (row[j] == '*') {
                ++j;
                continue;
            }

            int start = j;
            while (j < m && row[j] == '.') ++j;

            int length = j - start;
            ll pairs = length / 2;

            if (y < 2 * x)
                answer += pairs * y + (length % 2) * x;
            else
                answer += 1LL * length * x;
        }
    }

    cout << answer << '\n';
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;
    while (t--) solve();

    return 0;
}
