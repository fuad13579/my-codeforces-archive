#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin >> n;

    vector<int> a(n+1);
    for(int i = 1; i <= n; i++){
        cin >> a[i];
    }

    //sort(a.begin(), a.end());

    for(int i = 1; i <= n; i++){
        a[i] += a[i-1];
    }

    int m;
    cin >> m;

    while(m--){
        int x;
        cin >> x;

        int lb = lower_bound(a.begin(), a.end(), x) - a.begin();
        
        if(lb>n)
            cout << -1 << "\n";
        else
            cout << lb << "\n";
    }


}