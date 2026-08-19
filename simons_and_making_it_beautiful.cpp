#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;

    vector<int> p(n+1);

    for(int i=1;i<=n;i++){
        cin>>p[i];
    }
    int pos = 1;
    for (int i = 1; i <= n; i++) {
        if (p[i] == n) {
            pos = i;
            break;
        }
    }
    swap(p[1], p[pos]);

    for (int i = 1; i <= n; i++) {
        cout << p[i] << " ";
    }
    cout<<endl;
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
