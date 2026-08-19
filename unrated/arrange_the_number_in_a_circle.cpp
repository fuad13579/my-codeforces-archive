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
    ll sum = 0;
    int count = 0;
    int count_one = 0;

    for(int i = 0 ; i < n ; i++){
        int x;
        cin>>x;

        if(x >= 2){
            sum += x;
            count++;
        } else if(x == 1){
            count_one++;
        }
    }

    ll ans;

    if(count == 0){
        ans = 0;
    }
    else if( count == 1){
        if(count_one > 0){
            ans = sum + 1;
        }
        else{
            ans = sum;
        }
    }

    cout<<ans<<endl;

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