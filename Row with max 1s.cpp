// https://practice.geeksforgeeks.org/problems/row-with-max-1s0023/1

class Solution{
public:
	int rowWithMax1s(vector<vector<int> > arr, int n, int m) {
	    
	   int j=arr[0].size()-1;
	    int index=-1;
	    for (int i=0;i<arr.size();i++)
	    {
	        while(j>=0 && arr[i][j]==1)
	        {
	            j--;
	            index=i;
	        }
	        
	    }
	    
	    return index;
	}

};

// T.C= O(n+m)
// S.C= O(1)
