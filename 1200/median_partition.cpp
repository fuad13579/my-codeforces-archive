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
    vector <int> b(n);

    for(int i = 0; i<n ; i++){
        cin>>a[i];
        b[i] = a[i];
    }
    sort(b.begin(),b.end());

    int median = b[n/2];

    int count = 0;
    int ge_balance = 0;
    int gt_balance = 0;
    int len = 0;

    for(int i = 0; i<n ; i++){
        len++;

        if(a[i] >= median) ge_balance++;
        else ge_balance--;

        if(a[i] > median) gt_balance++;
        else gt_balance--;

        if(len % 2 == 1 && ge_balance > 0 && gt_balance < 0){
            count++;
            ge_balance = 0;
            gt_balance = 0;
            len = 0;
        }
    }

    cout<<count<<endl;
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
