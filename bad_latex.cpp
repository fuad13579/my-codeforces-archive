#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;

    cin >> n;

    cin.ignore();

    vector <string> s(n);

    for(int i=0; i<n; i++) {
        getline(cin, s[i]);
    }

    for(int i=0; i<n; i++) {
        for(int j=0; j<s[i].size(); j++) {
            if(s[i][j] == ' '  &&  s[i][j+1] == '1') {
                    
                }
                else {
        
    }

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
