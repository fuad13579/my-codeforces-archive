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
    for(int i=0; i<n; i++) cin >> a[i];

    map<int,int> mp;

    int ans = 1;

    int i = 0 , j = 0;

    mp[a[0]]++;

    while(j<n-1){
        j++;
        mp[a[j]]++;

        while(mp[a[j]] > 1){
            mp[a[i]]--;
            i++;
        }

        ans = max(ans , j-i+1);
    }

    cout << ans << "\n";


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