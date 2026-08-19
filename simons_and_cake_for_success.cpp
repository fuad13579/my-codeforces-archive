#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve(){
    ll n;
    cin>>n;

    ll temp = n;
    ll k = 1;
    for(ll p=2; p*p<=temp; p++){
        if(temp%p==0){
            k*=p;
            while(temp%p==0){
                temp/=p;
            }
        }
    }
    if(temp>1){
        k*=temp;
    }
    
    cout<<k<<endl;
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
