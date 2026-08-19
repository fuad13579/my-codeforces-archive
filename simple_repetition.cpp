#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()


bool isprime(int n){
    if(n<=1) return false;
    for(int i = 2; i* i <= n ; i++){
        if(n%i  == 0) return false;
    }
    return true;
}

void solve() {
    int n,k;
    cin>>n>>k;
    if(n != 1 && k >=2) cout<<"NO"<<endl;
    else if (n == 1 && k ==2) cout<<"YES"<<endl;
    else if(isprime(n) && k == 1) cout<<"YES"<<endl;
    else cout<<"NO"<<endl;
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