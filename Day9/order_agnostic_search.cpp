#include<iostream>
#include<vector>
using namespace std;
int binarysearch(vector<int>&arr,int key){
    bool isAscending=false;
    int start=0;
    int end=arr.size()-1;
    if(arr[start]<arr[end]){
        isAscending=true;
    }
    while(start<=end){
        int mid=start+(end-start)/2;
        if(arr[mid]==key){
            return mid;
        }
        if(isAscending){
            if(arr[mid]<key){
                start=mid+1;
            }
            else {
                end=mid-1;
            }
        }
        else {
            if(arr[mid]<key){
                end=mid-1;
            }
            else
            {
                start=mid+1;
            }
        }
    }
    return -1;
}
int main(){
    vector<int>arr={1,2,3,4,5};
    int bs=binarysearch(arr,2);
    cout<<bs;
}