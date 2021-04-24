class Solution{   
public:
    int minxorpair(int N, int a[]){    
       
       int m=INT_MAX;
       
       sort(a,a+N);
       
       for (int i=0;i<N-1;i++)
       {
           m=min(m,(a[i] ^ a[i+1]));
       }
       return m;
    }
};