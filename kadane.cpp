ll f(vl &a){
    int L=-1,R=-1,n=a.size(),last=-1;
    ll sm=0,mx=0;
    for(int i=0;i<n;i++){
        if(sm==0&&a[i])last=i;
        sm+=a[i];
        if(sm<0)sm=0;
        if(mx<sm){
            mx=sm;
            R=i;
            L=last;
        }
    }
    return mx;
}
