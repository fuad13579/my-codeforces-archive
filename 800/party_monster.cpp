#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin>>n;

    vector <char> s(n);
    for(int i=0; i<n; i++){
        cin>>s[i];
    }
    int l = 0, r = 0;
    for(auto i : s){
        if(i == '('){
            l++;
        }
        else{
            r++;
        }
    }

    if(l == r){
        cout<<"YES"<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
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