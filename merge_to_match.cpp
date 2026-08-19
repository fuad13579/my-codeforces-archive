#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;
    cin >> n >> m;

    

    vector<int> a(n), b(m);
    for(int i=0; i<n; i++) cin >> a[i];
    for(int i=0; i<m; i++) cin >> b[i];

    sort(all(a));
    sort(all(b));

    if(n < m || n < m * 2){
        cout << "NO" << endl;
        return;
    }

    for(int j = 0 ; j < m; j++){
        if(a[j] >= b[j] || a[n - m + j] <= b[j]){
            cout << "NO" << endl;
            return;
        }
    }
    cout << "YES" << endl;
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