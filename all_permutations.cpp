#include<bits/stdc++.h>
using namespace std;

void solve(int a[],vector<int>&v,vector<int>&vis,int n){
    if(v.size()==n){for(auto i:v){cout<<i<<" ";}cout<<endl;  return ;}

    for(int i=0;i<n;i++){
        if(!vis[i]){
            v.push_back(a[i]);
            vis[i]=1;
            solve(a,v,vis,n);
            v.pop_back();
             vis[i]=0;
        }
    }
}
int main(){
     
     int a[]={1,2,3};
     int n=3;
     vector<int>v;
     vector<int>vis(n,0);    
     solve(a,v,vis,n);

}
