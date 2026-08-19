#include <bits/stdc++.h>
using namespace std;


#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve() {
    int n;
    cin >> n;
    vector<int> a(n), freq(1005,0);

    int sum = 0;

    for(int i=0; i<n; i++) {
        cin >> a[i];
        freq[a[i]]++;
        sum += a[i];
    }

    int max_freq = 0;
    int max_freq_num = 0;
    for(int i=1; i<freq.size(); i++){
        if(freq[i] > max_freq){
            max_freq = freq[i];
            max_freq_num = i;
        }
    }

    if(n==1){
        cout << a[0] << endl;
        return;
    }
    bool same = true;
    for(int i=0; i<n-1; i++){
        if(a[i] != a[i+1]){
            same = false;
            break;
        }
    }

    if(same){
        cout << a[0] + a[1] << endl;
        return;
    }

    int rest = n - max_freq;

    int max_possible = min(max_freq, rest + 2);

    int ans = sum - max_freq_num * max_freq + max_possible * max_freq_num;
    cout << ans << endl;
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