#include <bits/stdc++.h>
using namespace std;

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin >> t;

    while (t--) {
        int n;
        cin >> n;
        vector<int> p(n), a(n);
        for (int i = 0; i < n; i++) cin >> p[i];
        for (int i = 0; i < n; i++) cin >> a[i];

        vector<int> compressed_a;


        for(int i = 0; i < n; i++) {

            if (i == n - 1 || a[i] != a[i+1]) compressed_a.push_back(a[i]);
        }

        int m = compressed_a.size();
        int j = 0;
        for(int i=0;i<n;i++){
            if(j < m && p[i] == compressed_a[j]) j++;
        }
        if(j == m) cout << "YES\n";
        else cout << "NO\n";
    }
    
    return 0;
}
