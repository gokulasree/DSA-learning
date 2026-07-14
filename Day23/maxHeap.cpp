#include<iostream>
#include<vector>

using namespace std;

class PriorityQueue{
    vector<int> heap;
    public:
    PriorityQueue(){}

    int getSize(){
        return heap.size();
    }

    bool isEmpty(){
        if(heap.empty()){
            return heap.size()==0;
        }
    }

    int getMax(){
        if(isEmpty())
            return -1;
        else
            return heap[0];
    }

    void insert(int element){
        heap.push_back(element);
        int childIndex=heap.size()-1;
        while(childIndex>0){
            int parentIndex=(childIndex-1)/2;
            if(heap[childIndex]>heap[parentIndex]){
                swap(heap[childIndex],heap[parentIndex]);
                childIndex=parentIndex;
            }else{
                break;
            }
            childIndex=parentIndex;
        }
    }
    int removeMax(){
        if(heap.empty())
            return -1;
        int ans=heap[0];
        heap[0]=heap[heap.size()-1];
        heap.pop_back();
        // down heapify
        int parentIndex=0;
        while(parentIndex<heap.size()){
            int leftChildIndex=2*parentIndex+1;
            int rightChildIndex=2*parentIndex+2;
            int maxIndex=parentIndex;
            if(heap[leftChildIndex]>heap[maxIndex]){
                maxIndex=leftChildIndex;
            }
            if(rightChildIndex<heap.size() && heap[rightChildIndex]>heap[maxIndex]){
                maxIndex=rightChildIndex;
            }
            if(maxIndex==parentIndex){
                break;
            }
            swap(heap[parentIndex],heap[maxIndex]);
            parentIndex=maxIndex;
            leftChildIndex=2*parentIndex+1; 
            rightChildIndex=2*parentIndex+2;
        }
        return ans;
    }
};
int main(){
    PriorityQueue pq;
    cout << "Insert elements in min heap: " << endl;
    int n;
    cout<< "Enter the element in min heap: " << endl;
    cin >> n;
    for (int i = 0; i < n; i++) {
        int element;
        cout << "Enter the element: " << endl;  
        cin >> element;
        pq.insert(element);
    }
    cout<<"Size of the heap: "<<pq.getSize()<<endl;
    cout<<"Maximum element: "<<pq.getMax()<<endl;
    while(!pq.isEmpty()){
        cout<<"Removed element: "<<pq.removeMax()<<endl;
    }
    cout<<endl;
    return 0;
    vector<int> sortedArray=pq.SortedArray(n);
    cout<<"Sorted Array: ";
    for(int i=0;i<sortedArray.size();i++){
        cout<<sortedArray[i]<<" ";
    }
    cout<<endl;
}