class Solution
{
    public:
    //Function to reverse a linked list.
    struct Node* reverseList(struct Node *head)
    {
        if (head==NULL || head->next==NULL)
        {
            return head;
        }
        
        if (head->next->next==NULL)
        {
            Node* a=head;
        Node*b=head->next;
        a->next=NULL;
        b->next=a;
        return b;
            
        }
        
        
        Node* a=head;
        Node*b=head->next;
        Node*c=head->next->next;
        a->next=NULL;
        while(b->next!=NULL)
        {
            
            b->next=a;
            a=b;
            b=c;
            c=c->next;
        }
        b->next=a;
        return b;
    }
    
};
