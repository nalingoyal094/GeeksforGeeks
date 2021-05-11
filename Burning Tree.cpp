//https://practice.geeksforgeeks.org/problems/burning-tree/1#

class Solution {
    public:
    
    map<Node*,Node* >mp;
    set<int >s;
    
    Node*t=NULL;
    int T;
    
    void parent(Node*root)
    {
        if (root==NULL)
          return;
        
        if (root->data==T)
        {
            t=root;
        }
        
        if (root->left)
        {mp[root->left]=root;
         parent(root->left);
        }
        
        if (root->right)
        {mp[root->right]=root;
         parent(root->right);
        }
        
        
        
        
    }
    
    int minTime(Node* root, int target) 
    {
        mp[root]=root;
        T=target;
        parent(root);
        
        for (auto i: mp)
        {
     //       cout<<i.first->data<<" "<<i.second->data<<endl;
        }
        
        
        queue<Node*>q;
        int ans=-1;
        
        q.push(t);
        s.insert(t->data);
       // cout<<t->data<<endl;
        
        while(!q.empty())
        {
          //  cout<<"hello"<<endl;
            ans++;
            int si=q.size();
         //   cout<<"size"<<si<<endl;
            while(si--)
            {
                
            Node*temp=q.front();
           // cout<<"temp"<<temp->data<<endl;
                        q.pop();
            if (temp->left && s.find(temp->left->data)==s.end())
            {q.push(temp->left);s.insert(temp->left->data);
             //   cout<<"left"<<temp->left->data<<endl;
            }
            if (temp->right && s.find(temp->right->data)==s.end())
            {
               // if (temp->data==9)
                 //cout<<"yes"<<endl;
                q.push(temp->right);s.insert(temp->right->data);
            //    cout<<"right"<<temp->right->data<<endl;
            }
            if (temp!=root && s.find(mp[temp]->data)==s.end())
            {q.push(mp[temp]);s.insert(mp[temp]->data);
              //  cout<<"parent"<<mp[temp]->data<<endl;
            }
            
            }
        }
        
        
        return ans;
        
        
    }
};
