#include <bits/stdc++.h>

using namespace std;

int main(){
    int n;
    cin >> n;
    while(n--){
        string str;
        cin >> str;
        if(str[0]=='Y' || str[0]=='y'){
            if(str[1]=='E' || str[1]=='e'){
                if(str[2]=='S' || str[2]=='s'){
                    cout << "YES" << endl;
                    continue;
                }
            }
        }
        cout << "NO" << endl;
    }
}