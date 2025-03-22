class Node{
public:
	Node*links[26];
	int sw=0;
	int sl=1e9;
	int si=1e9;
};
class Trie{
     Node*root;
 public:
 	Trie(){
 	 root=new Node();
 	}
 void insert(string s,int ind){
 		Node *temp=root;
 	for(int i=0;i<s.length();i++){
 		if(temp->links[s[i]-'a']==NULL){
 			Node*temp1=new Node();
             temp->links[s[i]-'a']=temp1;
             temp=temp1;
 		}
 		else {
 			 temp=temp->links[s[i]-'a'];
 		}
             temp->sw++;
             if(s.length()<temp->sl){temp->sl=s.length();temp->si=ind;}

 	}
 	 // temp->ew++;
 	 
 }
  int cntPrefix(string s){
 		Node *temp=root;
 	for(int i=0;i<s.length();i++){
 		if(temp->links[s[i]-'a']==NULL){
 			break;
 		}
 		else {
 			 temp=temp->links[s[i]-'a'];
 		}
            

 	}
 	 return temp->si;
 }

};
