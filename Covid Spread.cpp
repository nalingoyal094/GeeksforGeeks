class Solution {
public:

    int helpaterp(vector<vector<int>> hospital)
    {
        queue<pair<int,int >>q;
        
        for (int i=0;i<hospital.size();i++)
        {
            for (int j=0;j<hospital[0].size();j++)
            {
                if (hospital[i][j]==2)
                {
                    q.push({i,j});
                }
                  
            }
        }
        
        int level=-1;
       // cout<<q.size()<<endl;
      
      
        while(q.empty()==false)
        {
         //   cout<<"level "<<level<<endl;
        
            level++;
            int s=q.size();
         //   cout<<s<<endl;
            
            while(s--)
            {
                int ii=(q.front()).first;
                int jj=(q.front()).second;
                
                q.pop();
                
                
                if (ii+1<hospital.size() and hospital[ii+1][jj]==1 )
                { //  cout<<ii+1<<" "<<jj<<endl;
                    hospital[ii+1][jj]=2; 
                    q.push({ii+1,jj});
                }
       
                if (ii-1>=0 and hospital[ii-1][jj]==1 )
                { //  cout<<ii-1<<" "<<jj<<endl;
                    q.push({ii-1,jj});
                      hospital[ii-1][jj]=2;
                }
                
                if (jj+1<hospital[0].size() and hospital[ii][jj+1]==1 )
                { //  cout<<ii<<" "<<jj+1<<endl;
                    q.push({ii,jj+1});
                     hospital[ii][jj+1]=2;
                }
                
                if (jj-1>=0 and hospital[ii][jj-1]==1 )
                { //  cout<<ii<<" "<<jj-1<<endl; 
                    q.push({ii,jj-1});
                     hospital[ii][jj-1]=2;
                }
            }
            
            for (int i=0;i<hospital.size();i++)
        {
            for (int j=0;j<hospital[0].size();j++)
            {
                //if (hospital[i][j]==1)
                  //cout<<hospital[i][j]<<" ";
            }
           // cout<<endl;
        }
            
            
        }
        
        for (int i=0;i<hospital.size();i++)
        {
            for (int j=0;j<hospital[0].size();j++)
            {
                if (hospital[i][j]==1)
                  return -1;
            }
        }
        return level;
       
    }
};