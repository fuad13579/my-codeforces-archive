#include <bits/stdc++.h>
using namespace std;


using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;
    char a[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            cin >> a[i][j];
        }
    }
    bool b[n][m];
    for(int i=0; i<n; i++) {
        for(int j=0; j<m; j++) {
            if(a[i][j] == '#') b[i][j] = true;
            else b[i][j] = false;
        }
    }

    for (int i = 0; i < n - 1; i++)
        for (int j = i + 1; j < n; j++) {
            bool all_same = true, no_intersect = true;
            for (int k = 0; k < m; k++) {
                if (b[i][k] != b[j][k]) all_same = false;
                if (b[i][k] && b[j][k]) no_intersect = false;
            }
            if (!all_same && !no_intersect) {
                cout << "No" << endl;
                return;
            }
        }

    cout << "Yes" << endl;
    return;
}

int main() {
    fast_io;

    int t=1;
    //cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}