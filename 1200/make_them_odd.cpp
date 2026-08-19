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

    vector<int> a(n);
    set<int> even;
    for(int i=0; i<n; i++) {
        cin >> a[i];
        if(a[i] % 2 == 0) {
            even.insert(a[i]);
        }
    }

    int move = 0;
    while(even.size() > 0) {
        int x = *even.rbegin();
        even.erase(x);
        x /= 2;
        if(x % 2 == 0) {
            even.insert(x);
        }
        move++;
    }

    cout << move << "\n";

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