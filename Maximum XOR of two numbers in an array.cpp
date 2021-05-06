class Solution
{
    // node of Trie
    struct node
    {
        node*left;
        node*right;
    };
    
    public:
    
    void insert(int x, node* head)
   {
    // Store the head
    node* curr = head;
 
   // as our number is 32 bit..we are checking for each bit 0..31 
    for (int i = 31; i >= 0; i--) {
 
        // val is bit at ith position
        
        int val = (x >> i) & 1;
 
        if (val == 0) {
 
            // If curr->left is NULL
            if (!curr->left)
                curr->left = new node();
 
            // Update curr to curr->left
            curr = curr->left;
        }
        else {// i.e val is 1 
 
            // If curr->right is NULL
            if (!curr->right)
                curr->right = new node();
 
            // Update curr to curr->right
            curr = curr->right;
        }
    }
}
 
    
    
    int max_xor(int arr[] , int n)
    {
        node* head = new node();
 
    // Insert each element in trie
    for (int i = 0; i < n; i++) {
        insert(arr[i], head);
    }
 
    // Stores the maximum XOR value
    int ans = 0;
 
    // Traverse the given array
    for (int i = 0; i < n; i++) {
 
        // Stores the XOR with current
        // value arr[i]
        int curr_xor = 0;
 
        //int M = pow(2, 30);
 
        node* curr = head;
 
        for (int j = 31; j >= 0; j--) {
 
            // Finding ith bit
            int val = (arr[i] >> j) & 1;
 
            // Check if the bit is 0
            if (val == 0) {
                
                // we will check of 1 bit in tree as 0xor1=1;
                
                // If right node exists
                if (curr->right) {
 
                    // Update the currentXOR
                    int M=pow(2,j);// 1000= 2^3
                    curr_xor += M;
                    curr = curr->right;
                }
 
                else {
                    curr = curr->left;
                }
            }
 
            else {// bit is 1 
 
                // Check if left node exists
                // we will check of 0 bit in tree as 0xor1=1;
                if (curr->left) {
 
                    // Update the currentXOR
                    int M=pow(2,j);
                    curr_xor += M;
                    curr = curr->left;
                }
                else {
                    curr = curr->right;
                }
            }
 
        }
 
        // Update the maximum XOR
        ans = max(ans, curr_xor);
    }
 
    // Return the maximum XOR found
    return ans;
    }
    
};
