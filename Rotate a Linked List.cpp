//https://practice.geeksforgeeks.org/problems/rotate-a-linked-list/1#

class Solution
{
    public:
    //Function to rotate a linked list.
    Node* rotate(Node* head, int k)
    {
        Node*last=head;
        
        while(last->next!=NULL)
        {
            last=last->next;
        }
        
        while(k--)
        {
            Node*new_head=head->next;
            
            head->next=NULL;
            
            last->next=head;
            last=head;
            
            head=new_head;
            
        }
        
        return head;
    }
};
