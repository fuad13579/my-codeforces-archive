#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

string symbols[] = {"I", "V", "X", "L", "C", "D", "M", ""};

string introman(int n, int pos){
    if(pos == 3){
        if(n == 0) return "";
        else if(n == 1) return symbols[0];
        else if(n == 2) return symbols[0] + symbols[0];
        else if(n == 3) return symbols[0] + symbols[0] + symbols[0];
        else if(n == 4) return symbols[0] + symbols[1];
        else if(n == 5) return symbols[1];
        else if(n == 6) return symbols[1] + symbols[0];
        else if(n == 7) return symbols[1] + symbols[0] + symbols[0];
        else if(n == 8) return symbols[1] + symbols[0] + symbols[0] + symbols[0];
        else if(n == 9) return symbols[0] + symbols[2];
    }
    if(pos == 2){
        if(n == 0) return "";
        if(n == 1) return symbols[2];
        else if(n == 2) return symbols[2] + symbols[2];
        else if(n == 3) return symbols[2] + symbols[2] + symbols[2];
        else if(n == 4) return symbols[2] + symbols[3];
        else if(n == 5) return symbols[3];
        else if(n == 6) return symbols[3] + symbols[2];
        else if(n == 7) return symbols[3] + symbols[2] + symbols[2];
        else if(n == 8) return symbols[3] + symbols[2] + symbols[2] + symbols[2];
        else if(n == 9) return symbols[2] + symbols[4];
    }
    
    if(pos == 1){
        if(n == 0) return "";
        if(n == 1) return symbols[4];
        else if(n == 2) return symbols[4] + symbols[4];
        else if(n == 3) return symbols[4] + symbols[4] + symbols[4];
        else if(n == 4) return symbols[4] + symbols[5];
        else if(n == 5) return symbols[5];
        else if(n == 6) return symbols[5] + symbols[4];
        else if(n == 7) return symbols[5] + symbols[4] + symbols[4];
        else if(n == 8) return symbols[5] + symbols[4] + symbols[4] + symbols[4];
        else if(n == 9) return symbols[4] + symbols[6];
    }
    if(pos == 0){
        if(n == 0) return "";
        else if(n == 1) return symbols[6];
        else if(n == 2) return symbols[6] + symbols[6];
        else if(n == 3) return symbols[6] + symbols[6] + symbols[6];
    }

    return "";
}
void solve() {
    int n;
    cin>>n;
    int i = 0;
    int digits[4] = {0};
    while(n>0){
        digits[i] = n%10;
        n/=10;
        i++;
    }
    for(int j = 3; j>=0; j--){
        cout<<introman(digits[j], 3-j);
    }
    

}

int main() {
    fast_io;

    int t;
    cin >> t;
    while(t--) {
        solve();
        cout<<endl;
    }

    return 0;
}