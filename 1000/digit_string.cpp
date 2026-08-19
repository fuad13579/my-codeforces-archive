#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    string s;
    cin>>s;
    int n = s.size();
    
    string nofour = "";
    int rem_four = 0;
    for(char c : s){
        if(c == '4'){
            rem_four++;
        } 
        else{
            nofour += c;
        }
    }

    int total_2 = 0;
    int total_13 = 0;
    for(char c : nofour){
        if(c == '2') total_2++;
        else {
            total_13++;
        }
    }
    int mx = total_13;

    int now_2 = 0;
    int now_13 = 0;

    for( char c : nofour){
        if(c == '2') now_2++;
        else {
            now_13++;
        }

        int k = now_2 + (total_13 - now_13);
        mx = max(mx, k);
    }

    cout<<n - mx<<endl;
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