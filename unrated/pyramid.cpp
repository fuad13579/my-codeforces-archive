#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void repeatchar(char ch, int count){
    if (count == 0) return;
    cout << ch;
    repeatchar(ch, count - 1);
}

void pyramid(int n, int row){
    if (row > n) return;
    repeatchar(' ', n - row);
    repeatchar('*', 2 * row - 1);
    cout << endl;
    pyramid(n, row + 1);
}

void solve() {
    int n;
    cin>>n;
    pyramid(n, 1);
}

int main() {
    fast_io;

    int t=1;
    //cin >> t;
    while(t--) {
        solve();
    }

    return 0;
}
