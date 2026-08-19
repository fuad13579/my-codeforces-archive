#include <bits/stdc++.h>
using namespace std;

int main() {
    long long t;
    cin >> t;

    while (t--) {
        long long n;
        cin >> n;
        vector<long long> a(n);
        for (int i = 0; i < n; i++) cin >> a[i];

        long long invalid = 1;
        long long ans = 0;

        for (int i = 1; i < n; i++) {
            
            if (a[i] == a[i-1] || a[i] + a[i-1] == 7) {
                invalid++; 
            } else {
                if (invalid > 1) ans += invalid / 2;
                invalid = 1; 
            }
        }

        
        if (invalid > 1) ans += invalid / 2;

        cout << ans << endl;
    }
}
