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

    vector<char> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];

    int count = 0;

    for(int i = 0; i < n; i++){
        if( s[i] != s[(i+1)%n] ){
            count++;
        }
    }

    int ans;

    if(count == n){
        ans = n;
    }
    else{
        ans = count + 1;
    }

    cout << ans << "\n";
    

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