#include<iostream>
#include <bits/stdc++.h>
using namespace std;

long long  findpowbinary (long long a,long long b){
    if (b==0){
        return 1;
    }
    if(b==1){
        return a;
    }

    int x = findpowbinary(a,b/2);
    int ans = 0;
    if(b%2==1){
        ans = x*x*a;
    }
    else{
        ans = x*x;
    }

    return ans;
}


int main(){
    long long n,m;
    cin>>n>>m;

    if(n>30){
        cout<<m<<endl;
    }
    else{
        long long exp = findpowbinary(2,n);
        long long ans = m%exp;
        cout<<ans<<endl;
    }
    
    return 0;

}

