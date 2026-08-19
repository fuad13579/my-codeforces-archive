#include<iostream>
#include<algorithm>
#include<bits/stdc++.h>
using namespace std;

void solve(){
    int a[100005];
	int q,k,n;
    cin>>k>>q;
	for(int i=1;i<=k;i++) cin>>a[i];
	for(int i=1;i<=q;i++){
		cin>>n;
		cout<<min(a[1]-1,n)<<' ';
	}
	cout<<endl;
}

int main(){
    int t;
    cin >> t;

    while(t--){
        solve();
    }
}