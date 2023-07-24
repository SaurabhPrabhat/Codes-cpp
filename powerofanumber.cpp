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
