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
    string a,b;
    cin >> a >> b;


    if(a == b) {
        cout << "YES\n";
        return;
    }

    if(n == 1 || n ==2 && a!=b){
        cout << "NO\n";
        return;
    }

    int count_a[2] = {0}, count_b[2] = {0};

    for(int i=0; i<n; i++) {
        if(a[i] == '1') count_a[i % 2]++;
        if(b[i] == '1') count_b[i % 2]++;
    }

    if(count_a[0] == count_b[0] && count_a[1] == count_b[1]) {
        cout << "YES\n";
    } 
    else {
        cout << "NO\n";
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