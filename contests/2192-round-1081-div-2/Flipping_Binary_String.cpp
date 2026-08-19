#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    ll n;
    cin >> n;

    vector<char> s(n);
    for(int i = 0; i < n; i++)
        cin >> s[i];

    vector <int> one;
    vector <int> zero;
    for(int i = 0; i < n; i++){
        if(s[i] == '1'){
            one.push_back(i+1);
        }
        else{
            zero.push_back(i+1);
        }
    }

    int ones = one.size();
        int zeros = zero.size();

        
        if(zeros % 2 == 1) {
            cout << zeros << endl;
            for(int idx : zero)
                cout << idx << " ";
            cout << endl;
        }
        else if(ones % 2 == 0) {
            cout << ones << endl;
            for(int idx : one)
                cout << idx << " ";
            cout << endl;
        }
        else {
            cout << -1 << endl;
        }

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

