#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;
void solve(){
    int n;
    cin>>n;
    string s;
    cin>>s;

    int ans = n;

    int c = 0;

    for(int i = 0 ; i<n;i++){
        c++;
        if(s[i]=='1'){
            ans = max(ans,(i+1)*2);
            c++;
        }

    }
        
        ans = max(ans,c);
        reverse(s.begin(),s.end());

        c = 0;

    for(int i = 0 ; i<n;i++){
        c++;
        if(s[i]=='1'){
            ans = max(ans,(i+1)*2);
            c++;
        }

    }
        
        ans = max(ans,c);

        cout<<ans<<endl;
        return;

}


int main(){
    int t;
    cin>>t;

    while(t--){
        solve();
    }

    return 0;

}

