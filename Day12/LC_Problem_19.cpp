class Solution {
public:
    ListNode* removeNthFromEnd(ListNode* head, int n) {
        if(head == NULL) return NULL;
        int len=0;
        ListNode* temp=head;
        while(temp!=NULL){
            len++;
            temp=temp->next;
        }
        if(n == len){
            return head->next;
        }
        temp=head;
        int i=1;
        while(i<len-n){
            temp=temp->next;
            i++;
        }
        
        temp->next=temp->next->next;
         return head;
    }
};
// time complexity is O(n)
// space complexity is O(1)