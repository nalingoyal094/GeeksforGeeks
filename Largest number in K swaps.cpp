class Solution
{
    public:
    
    string m;
    //Function to find the largest number after k swaps.
    
    void func( string str, int i,int k)
    {
         if (str>m)
        {
            m=str;
        }
        
        if (k==0 || i==str.size()-1 )
          return;
        
       
        char max=str[i];
        
        for (int in=i+1;in<str.size();in++)
        {
            if (str[in]>max)
            {
                max=str[in];
            }
        
        }
        
        if (max!=str[i])
        {
            k--;
        }
        
        for (int in=i;in<str.size();in++)
        {
            if (str[in]==max)
            {
                swap(str[in],str[i]);
                func(str,i+1,k);
                swap(str[in],str[i]);
            }
        }
        
        
        
        
    }
    
    string findMaximumNum(string str, int k)
    {
        m=str;
        
        func(str,0,k);
        
        return m;
       
    }
};

// T.C= O(n^k)
// S.C= O(n) for the output string m