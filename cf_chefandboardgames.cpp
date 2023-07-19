#include<bits/stdc++.h>
using namespace std;
#define ll long long
#define mod 1e9+7
#define pb push_back
#define pi pair<int,int>
#define ppi pair<pair<int,int>,int>
#define umi unordered_map<int,int>
#define mi map<int,int>
#define vi vector<int>
#define vl vector<ll>
#define in(v) for(auto &item : v) cin>>item;


void solve(){
   // here  n is the size of chessboard
   int n;
   cin>>n;
   int ans=0;
   for(int i=1;i<=n;i++){
      // adding number of squares of odd length each odd length 'i' between from 1 to n 
   	if(i&1==1){
   	ans+=(n-i+1)+(n-i+1)*(n-i);}}
   	cout<<ans<<endl;


}
int main(){
    #ifndef ONLINE_JUDGE
    freopen("input.txt","r",stdin);
    freopen("output.txt","w",stdout);
    freopen("Error.txt","w",stderr);
    #endif
   
   int t;
   cin>>t;
   while(t--){
     solve();
   }

}
