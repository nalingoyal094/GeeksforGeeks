class Solution {
public:
    vector<int> inOrder(Node* root)
    {
        vector<int >ans;
        stack<Node*>s;
        Node*curr=root;
        while(curr!=NULL || s.empty()==false)
        {
            while(curr)
            {
                s.push(curr);
                curr=curr->left;
                
            }
            
            curr=s.top();
            s.pop();
            //ans.push_back(1);
            //return ans;
            ans.push_back(curr->data);
            curr=curr->right;
            
        }
        return ans;
        
        
        
    }
};
