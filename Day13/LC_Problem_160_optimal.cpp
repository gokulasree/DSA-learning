class Solution {
public:
  ListNode *getIntersectionNode(ListNode *headA, ListNode *headB) {
    ListNode* temp1=headA;
    ListNode* temp2=headB;
    while(temp1!=temp2){
        if(temp1==NULL){
            temp1=headB;
        }
        else{
            temp1=temp1->next;
        }

        if(temp2==NULL){
            temp2=headA;
        }
        else{
            temp2=temp2->next;
        }
    }
    return temp1;
    }
};
// time complexity is O(n+m) where n and m are the lengths of the two linked lists
// space complexity is O(1) as we are using constant extra space