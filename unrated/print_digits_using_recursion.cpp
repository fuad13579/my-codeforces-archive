#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void print_digits(int n) {
    if(n == 0) return;
    print_digits(n/10);
    cout << n%10 << " ";
}
void solve() {
    int n;
    cin >> n;
    if(n == 0) { // edge case
        cout << "0";
    } 
    else print_digits(n);
    cout << "\n";
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