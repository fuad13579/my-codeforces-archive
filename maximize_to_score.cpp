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
    vector<int> a(2 * n + 1);
    for (int i = 0; i < 2 * n; i++) {
        
        cin >> a[i];
    }
    vector<int> last_idx(2 * n + 1, 0);
    vector< ll > max_score(2 * n + 1, 0);

    for (int i = 1; i <= 2 * n; i++) {
        max_score[i] = max_score[i - 1] + 1;

        int num = a[i];
        if(last_idx[num] != 0){
            int pos = last_idx[num];
            ll this_block_length = i - pos + 1;
            ll score_of_this_block = this_block_length * this_block_length;

            max_score[i] = max(max_score[i], max_score[pos - 1] + score_of_this_block);
        }
        else {
            last_idx[num] = i;
        }

    }

        cout << max_score[2 * n] << endl;
    
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