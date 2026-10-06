/**
 * Definition for singly-linked list.
 * struct ListNode {
 *     int val;
 *     ListNode *next;
 *     ListNode() : val(0), next(nullptr) {}
 *     ListNode(int x) : val(x), next(nullptr) {}
 *     ListNode(int x, ListNode *next) : val(x), next(next) {}
 * };
 */
class Solution {
public:
    ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
        ListNode* temp=new ListNode();
        ListNode* head=temp;
         if(list1==NULL&&list2==NULL){
            return NULL;
        }
        while(list1!=NULL || list2!=NULL){
           if(list1==NULL){
            while(list2!=NULL){
                temp->val=list2->val;
                list2=list2->next;
                if(list2!=NULL){
                 temp->next=new ListNode();
                temp=temp->next;
    }
            }
           }
            if(list2==NULL){
            while(list1!=NULL){
                temp->val=list1->val;
                 list1=list1->next;
               if(list1!=NULL){
                temp->next=new ListNode();
                temp=temp->next;
               }
               
            }
           }
           if(list1!=NULL && list2!=NULL){
            if(list1->val<list2->val){
                temp->val=list1->val;
                list1=list1->next;
            }
            else if(list1->val>list2->val){
                temp->val=list2->val;
                list2=list2->next;
            }
            else if(list1->val==list2->val){
                temp->val=list2->val;
                temp->next=new ListNode();
                temp=temp->next;
                temp->val=list1->val;
                list2=list2->next;
                list1=list1->next;
            }
            if(list1||list2){
             temp->next=new ListNode();
                temp=temp->next;
            }
           }
        }
       
        return head;
    }
};