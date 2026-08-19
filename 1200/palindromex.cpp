#include <bits/stdc++.h>
using namespace std;

using ll = long long;
using pii = pair<int,int>;
using pll = pair<ll,ll>;

#define fast_io ios::sync_with_stdio(false); cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

bool covers_palindrome(int center_sum, int left, int right, const vector<int>& odd, const vector<int>& even) {
    if (center_sum % 2 == 0) {
        int c = center_sum / 2;
        int radius = odd[c] - 1;
        return left >= c - radius && right <= c + radius;
    }

    int c = (center_sum + 1) / 2;
    int radius = even[c];
    return left >= c - radius && right <= c + radius - 1;
}

bool try_center(int mex, int center_sum, const vector<pii>& pos, const vector<int>& a,
                const vector<int>& odd, const vector<int>& even) {
    bool used_single = false;
    int left = (int)a.size(), right = -1;

    int center_pos = -1;
    if (center_sum % 2 == 0) {
        center_pos = center_sum / 2;
    }

    for (int x = 0; x < mex; x++) {
        int l = pos[x].first;
        int r = pos[x].second;

        if (l + r == center_sum) {
            left = min(left, l);
            right = max(right, r);
            continue;
        }

        if (!used_single && center_pos != -1 && (l == center_pos || r == center_pos)) {
            used_single = true;
            left = min(left, center_pos);
            right = max(right, center_pos);
            continue;
        }

        return false;
    }

    if (right == -1) {
        return true;
    }

    return covers_palindrome(center_sum, left, right, odd, even);
}

bool check(int mex, const vector<pii>& pos, const vector<int>& a,
           const vector<int>& odd, const vector<int>& even) {
    if (mex == 0) {
        return true;
    }
    if (mex == 1) {
        return true;
    }

    vector<int> candidates = {pos[0].first + pos[0].second};
    if (mex > 1) {
        candidates.push_back(pos[1].first + pos[1].second);
    }

    for (int center_sum : candidates) {
        if (try_center(mex, center_sum, pos, a, odd, even)) {
            return true;
        }
    }

    return false;
}

vector<int> manacher_odd(const vector<int>& a) {
    int n = (int)a.size();
    vector<int> d1(n);
    int l = 0, r = -1;
    for (int i = 0; i < n; i++) {
        int k = (i > r) ? 1 : min(d1[l + r - i], r - i + 1);
        while (0 <= i - k && i + k < n && a[i - k] == a[i + k]) {
            k++;
        }
        d1[i] = k;
        if (i + k - 1 > r) {
            l = i - k + 1;
            r = i + k - 1;
        }
    }
    return d1;
}

vector<int> manacher_even(const vector<int>& a) {
    int n = (int)a.size();
    vector<int> d2(n);
    int l = 0, r = -1;
    for (int i = 0; i < n; i++) {
        int k = (i > r) ? 0 : min(d2[l + r - i + 1], r - i + 1);
        while (0 <= i - k - 1 && i + k < n && a[i - k - 1] == a[i + k]) {
            k++;
        }
        d2[i] = k;
        if (i + k - 1 > r) {
            l = i - k;
            r = i + k - 1;
        }
    }
    return d2;
}

void solve() {
    int n;
    cin>>n;
    vector <int> a(2*n);
    vector<pii> pos(n, {-1, -1});
    for ( int i = 0; i<2*n; i++){
        cin>>a[i];
        if (pos[a[i]].first == -1) {
            pos[a[i]].first = i;
        } else {
            pos[a[i]].second = i;
        }
    }

    vector<int> odd = manacher_odd(a);
    vector<int> even = manacher_even(a);

    int low = 0, high = n, ans = 0;
    while(low<=high){
        int mid = low + (high-low)/2;
        if(check(mid, pos, a, odd, even)){
            ans = mid;
            low = mid+1;
        }
        else{
            high = mid-1;
        }

    }
    cout<<ans<<endl; 
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
