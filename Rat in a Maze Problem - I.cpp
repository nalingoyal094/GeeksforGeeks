class Solution{
    public:
    
    vector<string>v;
    
    void path(vector<vector<int>> &m, int n,string  ans,int i,int j,vector<vector<int>> visited)
    {
        if (i==n-1 && j==n-1)
        {
            if (m[i][j]==1)
            {v.push_back(ans);}
            
            
            
            return;
        }
        
        
        
        
        if (i+1<n && m[i+1][j]==1 && visited[i+1][j]==0)
        {
            ans+='D';
            visited[i+1][j]=1;
            path(m,n,ans,i+1,j,visited);
            visited[i+1][j]=0;
            ans.erase(ans.size()-1,1);
            
         }
        if (i-1>=0 && m[i-1][j]==1 && visited[i-1][j]==0)
        {
            ans+='U';
            visited[i-1][j]=1;
            path(m,n,ans,i-1,j,visited);
            visited[i-1][j]=0;
            ans.erase(ans.size()-1,1);
            
        }
        if (j+1<n && m[i][j+1]==1 && visited[i][j+1]==0)
        {
            ans+='R';
            visited[i][j+1]=1;
            path(m,n,ans,i,j+1,visited);
            visited[i][j+1]=0;
            ans.erase(ans.size()-1,1);
            
            
        }
        if (j-1>=0 && m[i][j-1]==1 && visited[i][j-1]==0)
        {
            ans+='L';
            visited[i][j-1]=1;
            path(m,n,ans,i,j-1,visited);
            visited[i][j-1]=0;
             ans.erase(ans.size()-1,1);
        }
        
    }
    
    
    
    
    
    
    vector<string> findPath(vector<vector<int>> &m, int n) {
        
           vector<vector<int>> visited=m;
           for (int i=0;i<n;i++)
           {
               for (int j=0;j<n;j++)
               {
                   visited[i][j]=0;
               }
           }
           visited[0][0]=1;
            string ans=""; 
            v.resize(0);
            if (m[0][0]==0)
            {
                return v;
            }
            
            
            path(m,n,ans,0,0,visited);
            sort(v.begin(),v.end());
            
            
            
            return v;
            
    }
};
