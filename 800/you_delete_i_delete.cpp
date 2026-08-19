#include <bits/stdc++.h>
using namespace std;

#define print_precision cout << fixed << setprecision(9)

using ll = long long;
using pii = pair<int, int>;
using pll = pair<ll, ll>;

#define fast_io                  \
    ios::sync_with_stdio(false); \
    cin.tie(NULL);
#define all(x) (x).begin(), (x).end()

void solve()
{
    string s;
    cin >> s;

    int n = s.size();

    for (int i = 0; i < n - 1; i++)
    {
        if (s[i] == '0' && s[i + 1] == '1' || s[i] == '1' && s[i + 1] == '0')
        {
            s.erase(i, 2);
            break;
        }
    }

    cout << s << "\n";
}

int main()
{
    fast_io;

    int t = 1;
    cin >> t;
    while (t--)
    {
        solve();
    }

    return 0;
}