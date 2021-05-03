//https://practice.geeksforgeeks.org/problems/maximum-intervals-overlap5708/1

vector<int> findMaxGuests(int Entry[], int Exit[], int N)
	{
	    sort(Entry,Entry+N);
	    sort(Exit,Exit+N);

	    int i=0,j=0,mx=0,active=0,tim=0;
	    
	    while(i<N && j<N)
	    {
	        if(Entry[i]<=Exit[j])
	        {
	            active++;
	            if (active>mx)
	            {
	                mx=active; tim=Entry[i];
	            }
	            i++;
	        }
	        else
	        {
	            active--;
	            j++;
	        }
	        
	    }
	    vector<int>ans;
	    ans.push_back(mx);
	    ans.push_back(tim);
	    
	    
	    
	   return ans;
	   
	}

// T.C = O(n*logn)
// S.C = O(1)

