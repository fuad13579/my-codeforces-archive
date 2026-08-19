#include <bits/stdc++.h>
using namespace std;

int odd(int n) {
    while(n % 2 == 0)
        n /= 2;
    return n;
}

int main() {
    int t;
    cin >> t;

    while(t--) {
        int n;
        cin >> n;

        vector<int> a(n+1);
        for(int i = 1; i <= n; i++)
            cin >> a[i];

        int possible = 1;

        for(int i = 1; i <= n; i++) {
            if(odd(i) != odd(a[i])) {
                possible = 0;
                break;
            }
        }

        if(possible)
            cout << "YES\n";
        else
            cout << "NO\n";
    }

    return 0;
}


// #include <bits/stdc++.h>
// using namespace std;

// int main() {
//     int n;
//     cin >> n;

//     vector<int> a(n+1);
//     for(int i = 1; i <= n; i++)
//         cin >> a[i];

//     vector<bool> visited(n+1, false);

//     for(int i = 1; i <= n; i++) {
//         if(!visited[i]) {
//             vector<int> indices;
//             int curr = i;

//             // Traverse the component
//             while(curr <= n && !visited[curr]) {
//                 visited[curr] = true;
//                 indices.push_back(curr);
//                 curr *= 2;
//             }

//             vector<int> values;
//             for(int idx : indices)
//                 values.push_back(a[idx]);

//             sort(indices.begin(), indices.end());
//             sort(values.begin(), values.end());

//             if(indices != values) {
//                 cout << "NO\n";
//                 return 0;
//             }
//         }
//     }

//     cout << "YES\n";
//     return 0;
// }
