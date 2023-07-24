//// recursive  o(logn)
class Solution {
public:
    double myPow(double x, int n) {
        if(n==-1)return 1/x;
        if(n==0)return 1;
        if(x==0)return 0;
       
        double res=myPow(x,n/2);
        if((n&1)==1){
          if(n<0)return (res*res*1/x);
        return res*res*x;
        }
      
        return res*res;
            }
};

//////iterative o(n)
class Solution {
public:
    double myPow(double x, long long int n) {
      if(n==0||x==1)return 1;
   
      else if(n<0){
          x=1/x;
          n=-n;
      } 
      double ans=1;
      int t=0;
      ans*=x;
      n--;
      while(n){
          t++;
          if(t<n){
              ans*=ans;
              n-=t;
              t+=t;
          }
          if(n>0){
              ans*=x;
              n--;
             
          }
      }
      return ans;

    }
};
