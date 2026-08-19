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

    bool k = false;

    for(int i = 0 ; i< n; i++){
        int a;
        cin>>a;

        if(a==100){
            k = true;
        }
    }

    if(k){
        cout<<"Yes"<<endl;
    }
    else{
        cout<<"No"<<endl;
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