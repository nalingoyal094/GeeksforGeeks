class Solution
{
    public:
    //Function to find most frequent word in an array of strings.
    string mostFrequentWord(string arr[], int n) 
    {
        unordered_map<string ,int > mp;
        int maxx=0;
        for (int i=0;i<n;i++)
        {
            mp[arr[i]]++;
            maxx=max(maxx,mp[arr[i]]);
        }
        
        
        string ans="";
        for (int i=0;i<n;i++)
        {
            if (mp[arr[i]]==maxx)
            {
                ans=arr[i];
                mp[arr[i]]--;
            }
        }
       return ans;
    }
};
