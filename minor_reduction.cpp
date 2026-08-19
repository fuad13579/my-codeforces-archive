#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin >> s;

    int pos = -1;

    for(int i = (int)s.size() - 2; i >= 0; i--){
        int sum = (s[i] - '0') + (s[i + 1] - '0');
        if(sum >=10){
            pos = i;
            break;
        }
    }

    if(pos == -1){
        pos = 0;
    }

    int sum = (s[pos] - '0') + (s[pos + 1] - '0');

        cout << s.substr(0, pos) << sum << s.substr(pos + 2) << '\n';
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