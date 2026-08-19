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
    vector <ll> both;
    vector <ll> only2;
    vector <ll> only3;
    vector <ll> neither;
    for ( int i = 0; i<n; i++){
        ll x;
        cin>>x;

        if(x%2==0 && x%3==0){
            both.push_back(x);
        }
        else if(x%2==0){
            only2.push_back(x);
        }
        else if(x%3==0){
            only3.push_back(x);
        }
        else{
            neither.push_back(x);
        }

    }

    for(auto i : only2){
        cout<<i<<" ";
    }
    for(auto i : neither){
        cout<<i<<" ";
    }
    for(auto i : only3){
        cout<<i<<" ";
    }
    for(auto i : both){
        cout<<i<<" ";
    }
    cout<<endl;
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