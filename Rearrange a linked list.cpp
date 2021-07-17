class Solution
{
    public:
    void rearrangeEvenOdd(Node *head)
    {
       if (head==NULL || head->next==NULL || head->next->next==NULL)
         return;
        
        // I have atleast 3 nodes now
        
        Node*temp1=head;
        Node*q=temp1;
        Node*temp2=head->next;
        Node*w=temp2;
        Node*temp=head->next->next;
        
        while(temp!=NULL)
        {
            temp1->next=temp;
            
            temp2->next=temp->next;
            
            if (temp->next==NULL || temp->next->next==NULL)
            {
                temp=NULL;
            }
            else
            temp=temp->next->next;
            temp1=temp1->next;
            temp2=temp2->next;
        }
        
        
        temp1->next=w;
        return;
        
    }
};
