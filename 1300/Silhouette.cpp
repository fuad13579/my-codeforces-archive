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

    vector<int> distinct_b,b(n),freq(n+1,0);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
        freq[b[i]]++;
    }

    sort(all(b));
    for(int i = 1; i <= n; i++) {
        if(b[i-1] != b[i]) {
            distinct_b.push_back(b[i-1]);
        }
    }
    distinct_b.push_back(b[n-1]);

    if(distinct_b.size() == 1 || distinct_b[0] != 0) {
        cout << "-1\n";
        return;
    }

    




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