#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

long long binarytoDecimal(string n, long long m , long long mod) {
    string num = n;
    long long dec_value = 0;
    long long base = 1;

    for (int i = num.length() - 1; i >= 0; i--) {
        if (num[i] == '1') dec_value += base;
        dec_value %= mod;
        base *= m;
        base %= mod;
    }
        
    

    return dec_value;
}

string decToBinary(long long n) {
    string s;
    while (n > 0) {
        s += char((n % 2) + '0');
        n /= 2;
    }
    reverse(all(s));
    return s;
}

void solve() {
    long long n,k;
    cin>>n>>k;
    string bin = decToBinary(k);
    long long ans = binarytoDecimal(bin, n,1000000007);
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
