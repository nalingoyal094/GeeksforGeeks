#include<bits/stdc++.h>

class Solution
{
    public:
    //Function to add two numbers represented by linked list.
    struct Node* addTwoLists(struct Node* first, struct Node* second)
    {
        stack<int >s1;
        stack<int >s2;
        
        Node*temp1=first;
        Node*temp2=second;
        
       
        while(temp1!=NULL)
        {
            s1.push(temp1->data);
            temp1=temp1->next;
        }
        
        while(temp2!=NULL)
        {
            s2.push(temp2->data);
            temp2=temp2->next;
        }
         
        stack<int >s3;
        int carry=0;
        
         while(!s1.empty() && !s2.empty() )
        {
            int a=s1.top();
            s1.pop();
            int b=s2.top();
            s2.pop();
            
            int res=a+b+carry;
            carry=0;
            
            if (res<=9)
            {
                s3.push(res);
                
            }
            else
            {
                carry=1;
                s3.push(res%10);
            }
            
        }
        
        while(!s1.empty())
        {
            int a=s1.top();
            s1.pop();
            int res=a+carry;
            carry=0;
             if (res<=9)
            {
                s3.push(res);
                
            }
            else
            {
                carry=1;
                s3.push(res%10);
            }
            
            
            
        }
        
        while(!s2.empty())
        {
             int a=s2.top();
            s2.pop();
            int res=a+carry;
            carry=0;
             if (res<=9)
            {
                s3.push(res);
                
            }
            else
            {
                carry=1;
                s3.push(res%10);
            }
            
        }
        
        if (carry==1)
        {
            s3.push(carry);
        }
        
        
        Node*head=new Node(0);
       
        if (!s3.empty())
        {
            head=new Node(s3.top());
           // cout<<s3.top()<<endl;
            //cout<<prev->data<<endl;
            s3.pop();
        }
         Node*prev=head;
        while(!s3.empty())
        {
            Node * temp= new Node(s3.top());
            head->next=temp;
            head=temp;
           // cout<<s3.top()<<endl;
            s3.pop();
        }
        
        return prev;
        
    }
};
