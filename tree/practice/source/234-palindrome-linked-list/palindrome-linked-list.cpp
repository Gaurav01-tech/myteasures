class Solution {
public:
    bool isPalindrome(ListNode* head) {
        ListNode* temp = head;
        int count = 0;

        while (temp != NULL) {
            count++;
            temp = temp->next;
        }

        int k = 0, j = count / 2;
        ListNode* temp1 = head;

        if (count > 1) {
            vector<int> a(count / 2);

            while (k < j) {
                a[k] = temp1->val;
                temp1 = temp1->next;
                k++;
            }

            if (count % 2 != 0) {
                temp1 = temp1->next;
            }

            int i = 0;
            while (i < count / 2) {
                if (a[count / 2 - 1 - i] != temp1->val) {
                    return false;
                }
                temp1 = temp1->next;
                i++;
            }
        }

        return true;
    }
};