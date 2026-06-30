
// this code is for merging two sorted linked lists suggested by vs code assistant
// time complexity is O(n+m) where n and m are the lengths of the two linked lists
// space complexity is O(1) as we are using constant extra space
// class Solution {
// public:
//     ListNode* mergeTwoLists(ListNode* list1, ListNode* list2) {
//         if (!list1) return list2;
//         if (!list2) return list1;

//         if (list1->val < list2->val) {
//             list1->next = mergeTwoLists(list1->next, list2);
//             return list1;
//         } else {
//             list2->next = mergeTwoLists(list1, list2->next);
//             return list2;
//         }
//     }
// };
class Solution {
    public ListNode mergeTwoLists(ListNode list1, ListNode list2) {
        ArrayList<Integer>res=new ArrayList<>();
        if(list1==null) return list2;
        if(list2==null) return list1;
        ListNode temp=list1;
        while(temp!=null)
        {
            res.add(temp.val);
            temp=temp.next;
        }

        ListNode temp1=list2;
        while(temp1!=null)
        {
            res.add(temp1.val);
            temp1=temp1.next;
        }        
        Collections.sort(res);
        
        ListNode dummy=new ListNode(-1);
        ListNode tail=dummy;
        for(int i=0;i<res.size();i++)
        {
            ListNode newNode=new ListNode(res.get(i));
            tail.next=newNode;
            tail=tail.next;
        }
        return dummy.next;
        
    }
}
