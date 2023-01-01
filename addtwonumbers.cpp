class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        if(l1==NULL|| l2==NULL)
        return NULL;
        ListNode* r=new ListNode();
        ListNode* t=r;
        int s=0;
        while(l1!=NULL||l2!=NULL){
            if(l1!=NULL){
                s=s+l1->val;
                l1=l1->next;
            }
             if(l2!=NULL){
                s=s+l2->val;
                l2=l2->next;
            }
            t->val=s%10;
            s=s/10;
            if(l1!=NULL||l2!=NULL){
                t->next=new ListNode();
                t=t->next;
            }

        }
        if(s==1)
        t->next=new ListNode(1);
        return r;
        
    }
};
