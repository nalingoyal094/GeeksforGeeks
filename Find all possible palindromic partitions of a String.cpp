class Solution {
  public:
  
  vector<vector<string>>v;
  
  
  bool palin(string s, int i,int j)
  {
      while(i<j)
      {
          if (s[i]!=s[j])
          {
              return false;
          }
          else
          {
              i++;
              j--;
          }
      }
      return true;
  }
  
  
   void backtrack(string s,string ans,vector<string>v1)
  {
      if (s=="")
      {
          v.push_back(v1);
      }
      
      for(int i=0;i<s.size();i++)
      {
          if (palin(s,0,i))
          {
              v1.push_back(s.substr(0,i+1));
              string anss=ans+s.substr(0,i+1);
              string ss=s;
              ss.erase(0,i+1);
              
              backtrack(ss,anss,v1);
              v1.pop_back();
              
          }
      }
      
  }
   
  
    vector<vector<string>> allPalindromicPerms(string s) {
        string ans="";
        vector<string >v1={};
        backtrack(s,ans,v1);
        return v;
        
    }
};
