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