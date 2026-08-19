#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()   

void solve() {
    ll n;
    cin>>n;
    vector<ll>a(n);
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    ll diff = 0;
    for(int i = 0; i < n-1; i++){
        if(a[i] > a[i+1]){
            diff = max(diff, a[i] - a[i+1]);
        }
    }

    if(diff == 0){
        cout<<"yes"<<endl;
        return;
    }

    bool k = true;
    bool zero = true;
    for(int i = 0; i < n-1; i++){
        bool next0 = false;
        bool nextk = false;

        if(zero){
            if(a[i] <= a[i+1]) next0 = true;
            if(a[i] - a[i+1] <= diff) nextk = true;
        }

        if(k){
            if(a[i]+diff <= a[i+1]) next0 = true;
            if(a[i]+diff <= a[i+1]+ diff) nextk = true;
        }

        zero = next0;
        k = nextk;

        if(zero==false && k==false){
            cout<<"no"<<endl;
            return;
        }



    
}

    if(zero || k){
        cout<<"yes"<<endl;
    }
    else{
        cout<<"no"<<endl;
    }

}

int main() {
    fast_io;

    int t=1;
    cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
