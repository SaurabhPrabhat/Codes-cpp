string strsub(string s,int k){
    int n=s.size();
    string t(n,'0'),ans;
    t[n-1]=k+'0';
    for(int i=n-1;i>=0;i--){
        int cur=(s[i]-'0');
        int l=t[i]-'0';
        int diff=0;
        if(cur>=l){
            diff=cur-l;
        }
        else {
            diff=cur-l+10;
           int j=i-1;
           while(j>=0&&s[j]=='0'){s[j]='9';j--;}
            if(j>=0)s[j]--;
        }
        ans=to_string(diff)+ans;
    }
    while(ans.size()>1&&*ans.begin()=='0')ans.erase(ans.begin());
  return ans;
}
