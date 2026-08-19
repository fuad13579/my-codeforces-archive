#include<iostream>
#include<bits/stdc++.h>
#include<vector>
using namespace std;

int main(){
    int n,k;
    cin>>n>>k;

    long long arr[n];

    for(int i=0;i<n;i++){
        cin>>arr[i];
    }
    vector<pair<int,int>>v;

    for(int i=0;i<n;i++){
        pair<int,int>p;
        p.first = arr[i];
        p.second = i+1;
        v.push_back(p);
    }

    sort(v.begin(),v.end());

    vector<int>indices;

    for(int i=0;i<n;i++){
        if(v[i].first<=k){
            indices.push_back(v[i].second);
            k-=v[i].first;
        }
        else{
            break;
        }
        

    }

    cout<<indices.size()<<endl;

        for(int i=0;i<indices.size();i++){
            cout<<indices[i]<<" ";
        }
        cout<<endl;

        return 0;




}


