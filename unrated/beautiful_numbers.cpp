#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()


void solve() {
    ll x;
    cin >> x;
    if (x == 0) {
        cout << 0 << endl;
        return;
    }

    vector<int> digits;
    while (x > 0) {
        digits.push_back((int)(x % 10));
        x /= 10;
    }
    reverse(all(digits));

    int s = 0;
    for (int d : digits) s += d;

    if (s <= 9) {
        cout << 0 << endl;
        return;
    }

    int need = s - 9;
    vector<int> cap;
    cap.push_back(digits[0] - 1);
    for (int i = 1; i < (int)digits.size(); i++) {
        cap.push_back(digits[i]);
    }

    sort(cap.begin(), cap.end());
    reverse(cap.begin(), cap.end());


    int got = 0, ans = 0;
    for (int c : cap) {
        if (got >= need) break;
        got += c;
        ans++;
    }

    cout << ans << endl;

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
