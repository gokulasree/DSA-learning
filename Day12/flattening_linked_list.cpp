/*
class Node {
public:
    int data;
    Node* next;
    Node* bottom;

    Node(int x) {
        data = x;
        next = nullptr;
        bottom = nullptr;
    }
}; */

class Solution {
  public:
    Node *flatten(Node *root) {
        // code here
        // flatten* temp=root;
        if(root==nullptr) return nullptr;
        vector<int> ans;
        Node* curr=root;
        while(curr!=nullptr){
            Node* temp=curr;
            while(temp!=nullptr){
                ans.push_back(temp->data);
                temp=temp->bottom;
            }
            curr=curr->next;
        }
        sort(ans.begin(),ans.end())
        
        Node* dummy= new dummy(-1);
        Node* tail=dummy;
        
        for(int i=0;i<ans.size;i++){
           Node *nn=new Node(ans[i]);
          tail->bottom=nn;
          tail=tail->bottom;
      }

      return dummy->bottom;
    }
};