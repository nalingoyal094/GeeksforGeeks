 Node *copyList(Node *head)
     {
         Node*iter=head;
         
         while(iter!=NULL)
         {
             Node*t=new Node(iter->data);
             Node*n=iter->next;
             iter->next=t;
             t->next=n;
             iter=n;
             
         }
         
         iter=head;
         
         
         Node*front=iter->next->next;
         
         while(iter!=NULL)
         {
             if (iter->arb)
             iter->next->arb=iter->arb->next;
            
            iter=iter->next->next;
            
         }
         
         Node*copy=new Node(0);
         Node*ps=copy;
         iter=head;
         
         while(iter!=NULL)
         {
             copy->next=iter->next;
             iter->next=iter->next->next;
             copy=copy->next;
             iter=iter->next;
         }
         
         return ps->next;
         
         
         
    }
