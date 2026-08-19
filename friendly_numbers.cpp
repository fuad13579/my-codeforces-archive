#include<iostream>
#include<bits/stdc++.h>
using namespace std;

int sumdigits(long long n){
    int sum = 0;
    while(n>0){
        sum+=(n%10);
        n/=10;
    }
    return sum;
}

int main(){
    int t;
    cin>>t;

    while(t--){
        long long x;
        cin>>x;
        
        int count = 0;

        for(int y = x;y<=x+81;y++){
            if(y-sumdigits(y)==x){
                count++;
            }
        }
        cout<<count<<endl;
    }   
}

