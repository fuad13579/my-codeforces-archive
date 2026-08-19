#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

int countones(const string& s) {
    return count(all(s), '1');
}

void makeone(string& s) {
    string t = s;
    for (int i = 1; i + 1 < (int)s.size(); i++) {
        if (s[i - 1] == '1' && s[i + 1] == '1') {
            t[i] = '1';
        }
    }
    s = t;
}

void makezero(string& s) {
    for (int i = 1; i + 1 < (int)s.size(); i++) {
        if (s[i - 1] == '1' && s[i + 1] == '1') {
            s[i] = '0';
        }
    }
}

void solve() {
    int n;
    cin>>n;
    string s;
    cin>>s;

    string one = s;
    makeone(one);

    string zero = one;
    makezero(zero);

    
    cout << countones(zero) << ' ' << countones(one)  << '\n';
    
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
