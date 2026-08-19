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
    vector <int> a(n);
    for ( int i = 0; i<n; i++){
        cin>>a[i];
    }

    vector <int> r;

    int count = 0;
    for(int i = 0; i<n; i++){
        if(a[i]==1){
            count++;
        }
        if(a[i]!=1){
            r.push_back(a[i]);
        }
    }

    if(count==a.size()){
        cout<<1<<endl;
        return 0;
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