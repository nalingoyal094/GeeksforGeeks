class Solution{
public:
    //Function to find the days of buying and selling stock for max profit.
    vector<vector<int> > stockBuySell(vector<int> A, int n){
        vector<vector<int> >ans;
        for (int i=1;i<n;i++)
        {
            vector<int >v;
            
            //find contiguous sequence that is increasing
            
            if (A[i-1]<A[i])
            {
                v.push_back(i-1);
                
                while(i<n && A[i-1]<A[i])
            {
                i++;
                
            }
            
            v.push_back(i-1);
            ans.push_back(v);
                
            }
            
            
        }
      return ans;
      
      
    }
};
