#include <bits/stdc++.h>
using namespace std;

int main() {
    ios_base::sync_with_stdio(false);
    cin.tie(nullptr);

    int n = 0;
    long long t = 0;
    cin >> n >> t;

    vector<long long> time(n);
    for (int i = 0; i < n; i++) {
        cin >> time[i];
    }

    long long low = 0;
    long long high = 1;

    while (true) {
        long long product = 0;
        for (long long x : time) {
            product += high / x;
            if (product >= t) break;
        }
        if (product >= t) break;
        if (high > LLONG_MAX / 2) {
            high = LLONG_MAX;
            break;
        }
        high *= 2;
    }

    long long time_needed = high;
    while (low <= high) {
        long long mid = low + (high - low) / 2;
        long long product = 0;

        for (long long x : time) {
            product += mid / x;
            if (product >= t) break;
        }

        if (product >= t) {
            time_needed = mid;
            high = mid - 1;
        } else {
            low = mid + 1;
        }
    }

    cout << time_needed;
    return 0;
}
