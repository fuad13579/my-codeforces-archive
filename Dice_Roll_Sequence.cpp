#include <bits/stdc++.h>
using namespace std;

//Dynamic programming solution to find the minimum number of changes needed to make the sequence valid
int adjacent(int x, int y) {
    if(x != y && x + y != 7) return 1;
    return 0;
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t; 

    while(t--) {
        int n;
        cin >> n;
        vector<int> a(n+1);
        for(int i = 1; i <= n; i++) cin >> a[i];

        
        vector<vector<int>> dp(n+1, vector<int>(7, INT_MAX));

        
        for(int x = 1; x <= 6; x++)
            dp[1][x] = (a[1] == x ? 0 : 1);

        for(int i = 2; i <= n; i++) {
            for(int x = 1; x <= 6; x++) { 
                for(int y = 1; y <= 6; y++) { 
                    if(adjacent(x, y)) {
                        dp[i][x] = min(dp[i][x], dp[i-1][y] + (a[i]==x ? 0 : 1));
                    }
                }
            }
        }

        
        int ans = *min_element(dp[n].begin()+1, dp[n].end());
        cout << ans << endl;
    }

    return 0;
}


