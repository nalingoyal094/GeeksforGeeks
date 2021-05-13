// https://practice.geeksforgeeks.org/problems/word-ladder/1#

class Solution {
public:
    int wordLadderLength(string startWord, string targetWord, vector<string>& wordList) 
    {
        //find(wordList.begin(),wordList.end(),startWord)==wordList.end()|| 
        if (find(wordList.begin(),wordList.end(),targetWord)==wordList.end())
           return 0;
        
        if (startWord==targetWord)
          return 0;
          int flag=0;
        set<string>se;
        queue<string >q;
        q.push(startWord);
        se.insert(startWord);
        
        int ans=0;
        while(!q.empty())
        {
            ans++;
            int size=q.size();
            while(size--)
            {string s=q.front();
            q.pop();
            
            
            if(s==targetWord)
            {
                flag=1;
                break;
            }
            
            for (auto st:wordList)
            {
                int cnt=0;
                for (int i=0;i<st.size();i++)
                {
                    if (st[i]!=s[i])
                      cnt++;
                }
                if (cnt==1 and se.find(st)==se.end())
                {
                    q.push(st);
                    se.insert(st);
                }
                
            }
            }
            
            if (flag==1)
              break;
            
            
            
        }
        
        //cout<<"flag"<<flag<<endl;
        
        if (flag==0)
         ans=0;
        
        return ans;
        
        
        
        
    }
};

// T.C = O(n*n*m).. n is the size of vector wordList and m is the size of each word 
// S.C = O(n*m)  n strings and size of each string is m 

