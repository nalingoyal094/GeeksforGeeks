class Solution
{
    public:
    string lookandsay(int n) {
        // code here
        if(n == 1)
        return "1";
        
        if(n == 2)
        return "11";
        
        string s = "11";
        
        for(int i = 3; i <= n; i++){
            
            string curr="";
            s += '&';
            int counter = 1;
            
            for(int j = 1; j < s.length(); j++){
                if(s[j] != s[j-1]){
                    
                    curr+=to_string(counter);
                    curr+=s[j-1];
                    
                    counter=1;
                }
                else{
                    counter++;
                }
            }
            s = curr;
        }
        return s;
    }   
};
