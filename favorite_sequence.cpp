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
    vector<int> b(n);
    for(int i = 0; i < n; i++) {
        cin >> b[i];
    }

    vector<int> a(n);


    int l = 0, r = n-1, i = 0;

    while(l <= r){
        a[i++] = b[l++];
        if(l <= r){
            a[i++] = b[r--];
        }
    }

    for(int i = 0; i < n; i++){
        cout << a[i] << " ";
    }
    cout << "\n";
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