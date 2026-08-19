#include<iostream>
#include<vector>
#include<algorithm>
using namespace std;

void solve(){
    int n,q;

    cin >> n >> q;

    vector<int> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    sort(a.begin(), a.end());
    reverse(a.begin(), a.end());

    //prefix sum
    for(int i = 1; i <= n; i++){
        a[i] += a[i-1];
    }

    for(int i = 0; i < q; i++){
        int x;
        cin >> x;

        int lb = lower_bound(a.begin(), a.end(), x) - a.begin();
        lb++;
        if(lb>n)
            cout << -1 << "\n";
        else
            cout << lb << "\n";
    }


}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();

    }

}