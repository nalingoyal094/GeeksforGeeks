//https://practice.geeksforgeeks.org/problems/remove-k-digits/1#

class Solution{
    public:
    string removeKdigits(string s, int k) {
        
        stack<char>st;
        
        int i=0;
        
        string ans="";
        
        while(i<s.size())
        {
            if(st.empty() && s[i]!='0')
            {
                st.push(s[i]);
                i++;
            }
            else if(st.empty() && s[i]=='0')
            {
                i++;
            }
            else if (s[i]>=st.top())
            {
                st.push(s[i]);
                i++;
            }
            else
            {
                if (k>0 && st.empty()==false)
                {st.pop();
                 k--;
                }
                else
                {
                    st.push(s[i]);
                    i++;
                }
            }
        }
        if (k>0)
        while(k>0 and st.empty()==false)
         { st.pop();
          k--;}
        
        while(st.empty()==false)
        {
            ans=st.top()+ans;
            st.pop();
        }
        
        if (ans.size()==0)
          ans="0";
        
        return ans;
        
     
        
        
        
}
};
//T.C= O(N)
//S.C= O(N)
