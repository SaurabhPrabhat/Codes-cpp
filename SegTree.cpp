class SegTree{
public:
    vector<int> seg;
     SegTree(int n){
        seg.resize(4*n);
    }
    void merge(int &par,int &c1,int &c2){
       
        par=c1+c2;
        
    }
    void build(int ind,int low,int high,vl&a){
        if(low==high){
            seg[ind]=a[low];
            return;
        }
        int mid=(low+high)/2;
        build(2*ind+1,low,mid,a);
        build(2*ind+2,mid+1,high,a);
        merge(seg[ind],seg[2*ind+1],seg[2*ind+2]);
        
    }
    void update(int ind,int low,int high,int i,int val){
         
           if(low==high){
             seg[ind]=val;
            
             return;
           }
          int mid=(low+high)/2;
          if(i<=mid)
           update(2*ind+1,low,mid,i,val);
         else 
           update(2*ind+2,mid+1,high,i,val);
            merge(seg[ind],seg[2*ind+1],seg[2*ind+2]);
    }
    int query(int ind,int low,int high,int l,int r){
          if(low>r||high<l){
            return 0;
          }
          if(l<=low&&high<=r)return seg[ind];
            
            int mid=(low+high)/2;
             
              int left=  query(2*ind+1,low,mid,l,r);
             
            int right= query(2*ind+2,mid+1,high,l,r);
             return left+right;
          
    }
};
