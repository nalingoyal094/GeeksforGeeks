// https://practice.geeksforgeeks.org/problems/minimum-cost-of-ropes-1587115620/1#

class Solution
{
    public:
    //Function to return the minimum cost of connecting the ropes.
    long long minCost(long long arr[], long long n) {
        priority_queue<long long ,vector<long long >,greater<long long > >q;
        
        for (int i=0;i<n;i++)
        {
            q.push(arr[i]);
        }
        long long  cost=0;
        while(q.size()>1)
        {
            long long  f=q.top();
            q.pop();
            long long  s=q.top();
            q.pop();
            cost+=s+f;
            q.push(s+f);
            
        }
        return cost;
        
        
        
    }
};
