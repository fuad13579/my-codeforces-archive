#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve(){
    int n;
    cin >> n;
    vector <int> a(n+1);
    for(int i = 1; i <= n; i++) {
        cin >> a[i];
    }
    unordered_map <int,int> idx;    
    for(int i = 1; i <= n; i++) {
        idx[a[i]] = i;
    }
    int ans = 0;
    for(auto i : idx){
        for(auto j : idx){
            if(__gcd(i.first, j.first) == 1) {
                ans = max(ans, i.second + j.second); 
            }
        }
    }
    if(ans)cout<<ans<<endl;
    else cout<<-1<<endl;
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