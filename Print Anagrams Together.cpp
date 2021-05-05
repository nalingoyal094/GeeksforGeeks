//https://practice.geeksforgeeks.org/problems/print-anagrams-together/1

vector<vector<string> > Anagrams(vector<string>& string_list) 
{
   vector<string>v=string_list;
   for (int i=0;i<v.size();i++)
   {
       sort(v[i].begin(),v[i].end());
   }
   
   vector<vector<string>>ans;
   
   unordered_map<string ,int >mp;
   int index=0;
   for (int i=0;i<v.size();i++)
   {
       if (mp[v[i]]==0)
       {
           vector<string>s;
           s.push_back(string_list[i]);
           ans.push_back(s);
           index++;
           mp[v[i]]=index;
       }
       else
       {
           ans[mp[v[i]]-1].push_back(string_list[i]);
           
       }
       
   }
   return ans;  
}

//Time Complexity: O(N*|S|*log|S|), where |S| is the length of the strings.
//Auxiliary Space: O(N*|S|), where |S| is the length of the strings.
