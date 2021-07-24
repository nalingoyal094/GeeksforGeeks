class Solution {
  public:
  
  void make_tree(int arr[], int n,int &index,int min,int max)
  {
      if (index>=n)
      return;
      
      if (arr[index]>=min && arr[index]<=max)
      {
          int data=arr[index];
          
          index++;
          
          make_tree(arr,n,index,min,data);
          make_tree(arr,n,index,data,max);
          
      }
      return;
      
      
  }
  
  
  
  
    int canRepresentBST(int arr[], int n) {
        
        int index=0;
        int min=INT_MIN;
        int max=INT_MAX;
        
        make_tree(arr,n,index,min,max);
        
        if (index==n)
        return true;
        else
        return false;
        
        
    }
};
