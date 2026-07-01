#include<iostream>
#include<stack>
using namespace std;

int main(){
    // simple stack implementation using inbuilt stack
   
    // stack<int>st;
    // st.push(10);
    // st.push(20);
    // st.push(30);
    // cout<<st.top()<<endl;
    // st.pop();
    // cout<<st.top()<<endl;
    // cout<<st.size()<<endl;
    // cout<<st.empty()<<endl;

    int n;
    cout<<"Enter n"<<endl;
    cin>>n;

    while(n--){
        int elem;
        cout<<"Enter element one by one: "<<endl;
        cin>>elem;
        st.push(elem);

        // top() - return top elem
        st.top();
        // pop() - remove top elem
        st.pop();
        // print all elements of stack
        while(!st.empty()){
            cout<<st.top()<<" ";
            st.pop();
        }
    }
}