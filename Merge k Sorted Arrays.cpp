class Solution
{
    public:
    //Function to merge k sorted arrays.
    vector<int> mergeKArrays(vector<vector<int>> arr, int K)
    {
         vector<int>ans;
        vector<int>index(K, 0);
        
        priority_queue<pair<int, int>, vector<pair<int, int>>, greater<pair<int, int>>>pq;
        for(int i = 0; i < K; i++)
        {
            pq.push({arr[i][0], i});
        }
        int idx = 0;
        while(!pq.empty())
        {
            pair<int, int>p = pq.top();
            pq.pop();
            ans.push_back(p.first);
            idx++;
            if(index[p.second] + 1 < K)
              // why arr[p.second].size() in place of K is not working
            {
                index[p.second] += 1;
                pq.push({arr[p.second][index[p.second]], p.second});
            }
        }
        return ans;
        
    }
};
