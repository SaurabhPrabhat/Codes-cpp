#include<iostream>
#include<vector>
using namespace std;

// time complexity O(n2^n) , auxiliary space O(1)
int main(){
    int a[]={3,4,1};
    int n=3;
    
    for(int i=0;i<=(1<<n)-1;i++){
        vector<int>v;
        for(int j=0;j<n;j++){
            if(1&(i>>j))v.push_back(a[j]);
        }
        for(auto k:v)cout<<k<<" ";cout<<endl;
    }
}
