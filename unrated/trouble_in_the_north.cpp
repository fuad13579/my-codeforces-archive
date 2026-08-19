#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int a,b,c,d;
    cin>>a>>b>>c>>d;

    int A,B,C,D;


    int s = a + b + c + d;

    A = s - 3*a;
    B = s - 3*b;
    C = s - 3*c;
    D = s - 3*d;

    cout<<A<<" "<<B<<" "<<C<<" "<<D<<endl;


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