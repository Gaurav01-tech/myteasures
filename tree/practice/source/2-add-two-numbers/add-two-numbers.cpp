
 
class Solution {
public:
    ListNode* addTwoNumbers(ListNode* l1, ListNode* l2) {
        ListNode* temp=new ListNode();
         ListNode* head=temp;
          int y=0;
        while(l1!=NULL || l2!=NULL||y!=0){
            int x=y;
            if(l1!=NULL){
                x+=l1->val;
                l1=l1->next;
            }
            if(l2!=NULL){
                x+=l2->val;
                l2=l2->next;
            }   
            temp->val=x%10;
            y=x/10;
            if(l1!=NULL || l2!=NULL||y!=0){
                  temp->next=new ListNode();
                  temp=temp->next;  
            }   
        }
        return head;
    }
};