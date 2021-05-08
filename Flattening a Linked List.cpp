// https://practice.geeksforgeeks.org/problems/flattening-a-linked-list/1#


Node*merge(Node*head1,Node*head2)
{
  
    Node*temp=new Node(0);
    Node*res=temp;
    
    while(head1!=NULL && head2!=NULL)
    {
        if (head1->data<=head2->data)
        {
            temp->bottom=head1;
            temp=temp->bottom;
            head1=head1->bottom;
        }
        else
        {
            temp->bottom=head2;
            temp=temp->bottom;
            head2=head2->bottom;
        }
        
    }
    
    if (head1!=NULL)
    {
        temp->bottom=head1;
        
    }
    if (head2!=NULL)
    {
        temp->bottom=head2;
        
    }

  Node*head=res->bottom;
  
  while(head->bottom!=NULL)
  {

      head=head->bottom;
  }

    return res->bottom;
    
}


Node *flatten(Node *root)
{
    if (root->next==NULL)
      return root;
    
    return merge(root,flatten(root->next));
    
}


// T.C = O(N*M)..since there are total n*m nodes
// S.C = O(1)
