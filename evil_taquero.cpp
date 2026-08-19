#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;

    cin>>s;

    string ans = "";

    for (int i = 0; i < s.length();){
        if(i + 6 <= s.length() && s.substr(i,6) == "mesero"){
            ans += "taquero";
            i += 6;
        } else {
            ans += s[i];
            i ++;
        }
    }
        cout<<ans<<"\n";

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