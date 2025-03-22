class DSU{
public:
    vi parent,size;
    DSU(int n){
        size.resize(n,1);
        parent.resize(n);
        iota(all(parent),0);
    }
    int finduparent(int u){
        if(parent[u]==u)return u;
        return parent[u]=finduparent(parent[u]);
    }
    void merge(int u,int v){
        int pu=finduparent(u);
        int pv=finduparent(v);
        if(pu==pv)return;
        if(size[pu]>size[pv])swap(pu,pv);
           parent[pu]=pv;
           size[pv]+=size[pu];
        }
};
