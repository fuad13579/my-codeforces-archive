#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

bool check_prime (int n ){

    if (n == 0 || n==1) return false;
        for(int i=2;i*i<=n;i++){
            if(n%i==0){
                return false;
            }
        }

        return true;
}

int main(){
    int n;
    cin>>n;

    int m = n-2;

    bool idn = check_prime(m);

    if (idn){
        cout<<2<<" "<<m;
    }
    else{
        cout<<-1;
    }

}