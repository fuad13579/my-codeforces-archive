#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,k;
    cin >> n >> k;
    vector<signed long long> a(n);
    for(int i=0; i<n; i++) {
        cin >> a[i];
    }

    sort(all(a));

    if(n == 1 && a[0] == k){
        cout << "YES\n";
        return;
    }
    else if(n == 1 && a[0] != k){
        cout << "NO\n";
        return;
    }

    bool possible = false;

    int i = 0, j = 1;
    while(j < n and i < n) {
    	if(a[i] + abs(k) == a[j]) {
    		possible = true;
    		break;
    	}
    	else if(a[i] + abs(k) < a[j]) i++;
    	else j++;
    }

    if(possible) {
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