// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     ios::sync_with_stdio(false);
//     cin.tie(nullptr);

//     int Q;
//     cin >> Q;

//     while (Q--) {
//         long long n, i, a, b;
//         cin >> n >> i >> a >> b;

//         long long g = std::gcd(a, b);
//         long long first = (i - 1) % g + 1;
//         long long reachable = (n - first) / g + 1;

//         cout << (n - reachable) << '\n';
//     }
//     return 0;
// }

#include <iostream>
#include <algorithm>

using namespace std;

typedef long long ll;

ll gcd(ll a, ll b) {
    while (b) {
        a %= b;
        swap(a, b);
    }
    return a;
}


ll solve_min_k(ll a, ll m, ll l, ll r) {
    if (l > r) return 2e18; 
    a %= m;
    if (a == 0) return (l == 0) ? 1 : 2e18;
    
    
    if ((l + a - 1) / a * a <= r) {
        return (l + a - 1) / a;
    }
    
    
    ll res = solve_min_k(m % a, a, a - (r % a), a - (l % a));
    if (res >= 2e18) return 2e18;
    return (res * m + l + a - 1) / a;
}


ll get_dist(ll start, ll step, ll M, ll N) {
    if (N >= M) return 2e18; 
    
    
    ll L = (N - start + M) % M;
    ll R = (M - 1 - start + M) % M;

    if (L <= R) {
        return solve_min_k(step, M, L, R);
    } else {
        
        return min(solve_min_k(step, M, L, M - 1), solve_min_k(step, M, 0, R));
    }
}

void solve() {
    ll n, i, a, b;
    if (!(cin >> n >> i >> a >> b)) return;

    ll g = gcd(a, b);
    ll r = i % g;
    if (r == 0) r = g;

    ll N = (n - r) / g + 1;  
    ll u = (i - r) / g;      
    ll A = a / g;
    ll B = b / g;
    ll M = A + B;

    ll reachable;
    if (N >= M - 1) {
        reachable = N;
    } else {
        ll kf = get_dist(u, A, M, N); 
        ll kb = get_dist(u, M - A, M, N); 
        reachable = kf + kb - 1;
    }

    cout << n - reachable << "\n";
}

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int q;
    cin >> q;
    while (q--) {
        solve();
    }
    return 0;
}
