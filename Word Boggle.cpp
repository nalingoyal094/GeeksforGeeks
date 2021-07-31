// naive solution
// t.c= O(row*col*no._of_words)

class Solution{
public:

   vector<pair<int,int>>dir={{1,0},{0,1},{-1,0},{0,-1},{-1,-1},{-1,1},{1,1},{1,-1}};

   bool solve1(string s,vector<vector<int >>vis, vector<vector<char> > board,int m,int n,int index,int i,int j )
   {
       //cout<<s[index]<<endl;
       if (index==s.size())
       {
           return true;
       }
       
       
           for (auto p: dir)
           {
               int f=i+p.first;
               int se=j+p.second;
               
              // cout<<f<<" "<<se<<endl;
               //cout<<board[1][0]<<endl;
               
               
               if (f>=0 && f<m && se>=0 && se<n)
               {
                   //cout<<"andar"<<f<<se<<endl;
                   if (board[f][se]==s[index] && vis[f][se]==0)
                   {
                 //      cout<<s[index]<<endl;
                       vis[f][se]=1;
                       if (solve1(s,vis,board,m,n,index+1,f,se))
                       {
                           return true;
                       }
                       vis[f][se]=0;
                   }
               }
               
               
               
           }
           return false;
       
       
       
       
       
   }

    bool solve(string s,vector<vector<int >>vis, vector<vector<char> > board,int m,int n,int index )
    {
        if (index==s.size())
        {
            return true;
        }
        
        for (int i=0;i<m;i++)
        {
            for (int j=0;j<n;j++)
            {
                if (board[i][j]==s[index] && vis[i][j]==0)
                {
                  //  cout<<s[index]<<endl;
                   vis[i][j]=1;
                    
                    
                    if (solve1(s,vis,board,m,n,index+1,i,j))
                       return true;
                    
                    vis[i][j]=0;
                    
                    
                }
                
            }
        }
        return false;
        
    }
      

	vector<string> wordBoggle(vector<vector<char> >& board, vector<string>& dictionary) {
	    
	    int m=board.size();
	    int n=board[0].size();
	    
	    vector<vector<int >>vis(m,vector<int>(n,0));
	    
	    vector<string>v;
	    
	    for (string s: dictionary)
	    {
	        if (solve(s,vis,board,m,n,0))
	        {
	            v.push_back(s);
	        }
	    }
	    return v;
	    
	    
	    
	}
};
