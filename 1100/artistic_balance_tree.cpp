#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n,m;

    cin>>n>>m;

    vector <int> a(n);
    vector <int> x(m);

    for(int i = 0; i<n ; i++){
        cin>>a[i];
    }
    for(int i = 0; i<m ; i++){
        cin>>x[i];
    }

    vector <int> odd;
    vector <int> even;
    
    for(int i = 0 ; i<n ; i++){
        if(i%2==0){
            odd.push_back(a[i]);
        }
        else{
            even.push_back(a[i]);
        }
    }

    int modd = 0, meven = 0;

    for(int p : x){
        if(p%2){
            modd++;
        }
        else{
            meven++;
        }
    }

    sort(odd.begin(), odd.end());
    reverse(odd.begin(), odd.end());
    sort(even.begin(), even.end());
    reverse(even.begin(), even.end());

    long long sum = 0;
    for (int i = 0; i < a.size(); i++) {
        sum += a[i];
    }

    long long oddsum = 0;
    if (modd>0 && !odd.empty()) {
        oddsum += odd[0];
        for (int i = 1; i<odd.size()&&i<modd; i++) {
            if (odd[i]<=0) break;
            oddsum += odd[i];
        }
    }

    long long evensum = 0;
    if (meven>0 && !even.empty()) {
        evensum += even[0];
        for (int i = 1; i<even.size()&&i<meven; i++) {
            if (even[i]<=0) break;
            evensum += even[i];
        }
    }

    long long ans = sum - oddsum - evensum;


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
