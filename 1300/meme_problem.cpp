#include <bits/stdc++.h>
using namespace std;

#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    ll d;
    cin >> d;

    if(d == 0) {
        print_precision;
		cout << "Y " << 0.0 << " " << 0.0 << endl;
		return;
	}
	if(d < 4) {
		cout << "N" << endl;
		return;
	}
	
	long double D = sqrt(d * (d - 4));
	long double a = (d + D) / 2.0;
	long double b = (d - D) / 2.0;
	print_precision;
	cout << "Y " << a << " " << b << endl;
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