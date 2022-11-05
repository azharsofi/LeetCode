class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        ListNode* o=head;
        ListNode* ne=head;
    for(int i=1;i<=n+1;i++){
        if(o==NULL)
        return head->next;
            o=o->next;
        }
        while(o!=NULL){
        
            o=o->next;
            ne=ne->next;
        }
        ne->next=ne->next->next;
        return head;
    }
};