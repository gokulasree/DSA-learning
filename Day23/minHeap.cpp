#include <iostream>
#include <vector>

using namespace std;

class PriorityQueue {
    vector<int> heap;
    // default constructor
    public:
    priorityQueue() {}
    int getSize() {
        return heap.size();
    }
    bool isEmpty() {
        /* check if the heap is empty, if it is then return true else return false */
        if(heap.empty()){
            return heap.size() == 0;
        }
    }
    int getMin(){
        /* check if the heap is empty, if it is then return -1  */
        /* else return the first element of the heap*/
        if(heap.empty())
            return -1;
        else
            return heap[0];
    }
    void insert(int element) {
        /* insert an element into the heap */   
        heap.push_back(element);
        /* heapify up */
        int childIndex = heap.size() - 1;
        /*child index is the index of the element we just inserted */
        while (childIndex > 0) {
            /* parent index is the index of the parent of the element at childIndex */
            int parentIndex = (childIndex - 1) / 2;
            /* if the child is smaller than the parent, swap them and continue heapifying up */
            if (heap[childIndex] < heap[parentIndex]) {
                swap(heap[childIndex], heap[parentIndex]);
                childIndex = parentIndex;
            } else {
                break;
            }
            /*parent index is the index of the parent of the element at childIndex */
            childIndex = parentIndex;
        }
    }
    int removeMin(){
        /* remove and return the minimum element from the heap */
        if(heap.empty())
            return -1;
            /*store the minimum element in a variable ans*/
        int ans = heap[0];
      
        /* here we just swap the first and last element then pop the last element and the last 
        element is now at the root and the last element also present in that place too  */
        heap[0] = heap[heap.size() - 1];
        heap.pop_back();
        /*here we heapify the first element to its correct position */
        int parentIndex = 0;
        int leftChild = 2 * parentIndex + 1;
        int rightChild = 2 * parentIndex + 2;
        while (leftChild<heap.size()) {
            
            int minIdx = parentIndex;
            
            }
            if (heap[leftChild] < heap[minIdx]) {
                minIdx = leftChild;
            }
            if (rightChild < heap.size() && heap[rightChild] < heap[minIdx]) {
                minIdx = rightChild;
            }
            if (minIdx == parentIndex) {
                break;
            }
            swap(heap[parentIndex], heap[minIdx]);
            parentIndex = minIdx;
            leftChild = (2 * parentIndex) + 1;
            rightChild = (2 * parentIndex) + 2;
        }
        return ans;
    }
};
int main() {
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
    cout<<"Element in the heap: "<<pq.getSize()<<endl;
    cout<<"Minimum element: "<<pq.getMin()<<endl;
    while(!pq.isEmpty()){
        cout<<"Removed element: "<<pq.removeMin()<<endl;
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