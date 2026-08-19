#include <bits/stdc++.h>
using namespace std;

int main() {
    string s = "NILE LE A BAMVOOG";
    string vowels = "AEIOU";
    vector<char> v;
    vector <int> j;

    for (int i = 0; i < (int)s.size(); i++) {
        char x = s[i];
        if (x == ' ') continue;
        bool isvowel = false;
        for(auto &c : vowels) {
            if (x == c) {
                isvowel = true;
                break;
            }
        }
        if (!isvowel) {
            v.push_back(x);
            j.push_back(i);
        }
}

    reverse(v.begin(), v.end());
    for (int k = 0; k < (int)v.size(); k++) {
        s[j[k]] = v[k];
    }

    cout << s;
    return 0;
}
