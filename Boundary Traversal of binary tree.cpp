class Solution {
public:

vector<int>v;

void inorder(Node* root)
{    if(!root)
return;
    inorder(root->left);
    if(!root->left && !root->right)
    v.push_back(root->data);
    inorder(root->right);
}
void printLeft(Node* ptr)
{
    while(ptr)
  {    if(ptr->left || ptr->right)
      v.push_back(ptr->data);
      if(ptr->left)
      ptr=ptr->left;
      else{
      ptr=ptr->right;
      }
  }
}
void printRight(Node* ptr)
{
    stack<int> s;
  while(ptr)
  {
      if(ptr->left || ptr->right)
      s.push(ptr->data);
      if(ptr->right)
      ptr=ptr->right;
      else 
      ptr = ptr->left;
  }
  while(!s.empty())
  {
      v.push_back(s.top());
      s.pop();
  }
}
 vector <int> printBoundary(Node *root)
{ 
    v.push_back(root->data);
  printLeft(root->left);
  inorder(root);
  printRight(root->right);
  return v;
  
}
    
};
