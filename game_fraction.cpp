#include<iostream>
#include<bits/stdc++.h>
using namespace std;



int main(){
    int t;
    cin>>t;

    while(t--){
        long long p,q;
        cin>>p>>q;

        long long x = 3*p - 2*q;
        
        if(x==0)cout<<"Bob"<<endl;
        else if(x<0)cout<<"Alice"<<endl;
        else {
            if(p<q){
                cout<<"Bob"<<endl;
            }
            else{
                cout<<"Alice"<<endl;
            }
        }
    }
    return 0;
}

