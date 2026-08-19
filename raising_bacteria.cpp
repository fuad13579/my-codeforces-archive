#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()



int main() {
    fast_io;

    int n;
    cin >> n;
    int count = 0;

    while(n >0){
        if(n & 1) count++;
        n = n>>1;
    }
    cout << count << endl;
    return 0;
}