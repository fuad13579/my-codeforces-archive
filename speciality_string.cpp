#include <bits/stdc++.h>
using namespace std;

static void solve() {
    int n;
    string s;
    cin >> n >> s;

    vector<int>f(26,0);
    bool possible = false;

    for(char c:s){
        f[c-'a']++;
        if(f[c-'a']>=2){
            possible = true;
            break;
        }
    }
    if(possible)
        cout<<"YES\n";
    else
        cout<<"NO\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int tc;
    cin >> tc;
    while (tc--) solve();
    return 0;
}
