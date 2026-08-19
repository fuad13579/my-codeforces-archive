#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int factorial(int n){
    if(n==0 || n==1) return 1;
    return n*factorial(n-1);
}

int nCr(int n, int r){
    return factorial(n)/(factorial(r)*factorial(n-r));
}


int main(){
    int t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;

        for(int i=0; i<n; i++){
            int x;
            cin>>x;
        }

        int used = 10 - n;
        
        int pair = nCr(used, 2);

        int ans = pair * nCr(4,2);

        cout<<ans<<"\n";
    }
}

