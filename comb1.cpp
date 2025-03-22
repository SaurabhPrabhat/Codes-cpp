
ll power(ll n,ll x){
    ll res=1;
    n%=mod;
    while(x){
    if(x&1)res=res*n%mod;
    x>>=1;
    n=n*n%mod;
}
return res;
}
ll modinv(ll n){
    return power(n,mod-2);
}
vector<ll> fact,invfact;
void set_fact(int n){
    fact.resize(n+1,1);
    invfact.resize(n+1,1);
     for(int i=2;i<=n;i++)fact[i]=(fact[i-1]*i)%mod;
    invfact[n]=modinv(fact[n]);
    for(int i=n-1;i>=0;i--)invfact[i]=invfact[i+1]*(i+1)%mod;
}
ll comb(ll n,ll r){
    if(r>n||r<0)return 0;
    if(r==n||r==0)return 1;
    return fact[n]*invfact[r]%mod*invfact[n-r]%mod;
}




vector<vl> mul(vector<vl> &a,vector<vl> &b){
     int n=a.size();
    vector<vl>res(n,vl(n));
    for(int i=0;i<n;i++){
      for(int j=0;j<n;j++){
        ll sm=0;
        for(int k=0;k<n;k++){
          sm=(sm+a[i][k]*b[k][j]%mod)%mod;
            }
        res[i][j]=sm;
        }
    }
    return  res;
}
vector<vl> matexp(vector<vl> &a,ll x){
    int n=a.size();
    vector<vl>res(n,vl(n));
    for(int i=0;i<n;i++)res[i][i]=1;
    while(x){
        if(x&1)res=mul(res,a);
        x>>=1;
        a=mul(a,a);
    }
    return res;
}
