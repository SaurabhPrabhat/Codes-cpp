#include<bits/stdc++.h>
using namespace std;

struct node {
    int data;
    node *left;
    node *right;
    node (int data){
        this->data=data;
        this->left=NULL;
        this->right=NULL;
    }
};

node * buildtree(node *root){
    cout<<"enter data "<<endl;
    int d; 
    cin>>d;
    root=new node(d);
    if(d==-1)return NULL;
    cout<<"enter left child of "<<d<<endl;
    root->left=buildtree(root->left);
    cout<<"enter right child of "<<d<<endl;
    root->right=buildtree(root->right);
    return root;
}
void buildtreelevelorder(node *&root){
     queue<node*>q;
     cout<<"enter data for root"<<endl;
     int d; 
     cin>>d;
     root=new node(d);
    q.push(root);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        cout<<"enter left child of "<<temp->data<<endl;
        int lc;
        cin>>lc;
        if(lc!=-1){temp->left=new node(lc);q.push(temp->left);}
         cout<<"enter right child of "<<temp->data<<endl;
        int rc;
        cin>>rc;
        if(lc!=-1){temp->right=new node(rc);q.push(temp->right);}
    }
}

void printlevelorder(node *root){
    queue<node*>q;
    q.push(root);
    q.push(NULL);
    while(!q.empty()){
        node *temp=q.front();
        q.pop();
        if(temp==NULL){
            cout<<endl;
            if(!q.empty())
            q.push(NULL);
        }
        else {
        cout<<temp->data<<" ";
        
        if(temp->left){
            q.push(temp->left);
        }
        if(temp->right){
            q.push(temp->right);
        }}
        
        
    }
}
void preorderprint(node *root){
    if(root==NULL)return;
    cout<<root->data<<" ";
    preorderprint(root->left);
    preorderprint(root->right);
}
void inorderprint(node *root){
    if(root==NULL)return;
   
    inorderprint(root->left);
     cout<<root->data<<" ";
    inorderprint(root->right);
}

int main(){
    node *root=NULL;
   //root=buildtree(root);
    // 1 2 -1 -1 3 4 -1 5 -1 -1 -1
    buildtreelevelorder(root);
    printlevelorder(root);
    // preorderprint(root);cout<<endl;
    // inorderprint(root);


}
