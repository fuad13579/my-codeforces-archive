#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;

    while(t--){
        long long n;
        cin>>n;

        long long ans = n + (n/2)*2 + (n/3)*2;

        cout<<ans<<"\n";
    }
}