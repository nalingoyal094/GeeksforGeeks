class Solution{
    public:
    vector<double> findPoint(int A[], int B[], int C[])
    {
        double d1x= A[0]+B[0]-C[0];
          double d1y=A[1]+B[1]-C[1];
        
         double d2x=A[0]-B[0]+C[0];
        double d2y=A[1]-B[1]+C[1];
        
        double d3x=-A[0]+B[0]+C[0];
        double d3y=-A[1]+B[1]+C[1];
        
        vector<pair<double,double >>v;
        
        v.push_back({d1x,d1y});
        v.push_back({d2x,d2y});
        v.push_back({d3x,d3y});
        
        sort(v.begin(),v.end());
        vector<double> ans;
        ans.push_back(v[0].first);
        ans.push_back(v[0].second);
        return ans;
        
    } 
};
