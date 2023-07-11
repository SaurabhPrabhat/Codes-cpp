#include <bits/stdc++.h> 
vector<int> divisibleSet(vector<int> &a){
    
    int n=a.size();

  // sorting the original array
   sort(a.begin(),a.end());
   vector<int>v1(a.size(),1);
   vector<int>v2;
   vector<int>ans;

// filling max length of divisible subset possible till index i (v1) and 
     updating the index of the previous element. 

   for(int i=0;i<n;i++)v2.push_back(i);
   for(int i=1;i<n;i++){
       for(int j=0;j<i;j++){
           if(a[i]%a[j]==0&&v1[i]<v1[j]+1){
               v1[i]=v1[j]+1;
               v2[i]=j;
           }
       }
   }
// finding index of largest element in v1 ie the max length of subset possible and finding elements (through element in the given array in problem using found index)
and backtracking via index stored at the respective indices . Elements are stord in ans vector.

    auto k=max_element(v1.begin(),v1.end());
       int ind=k-v1.begin();
       while(v2[ind]!=ind){
           ans.push_back(a[ind]);
           ind=v2[ind];
       }
       ans.push_back(a[ind]);
   return ans;
}
