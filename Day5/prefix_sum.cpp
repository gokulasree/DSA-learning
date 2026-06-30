#include <bits/stdc++.h>
using namespace std;

const int N = 100000;
vector<int> prefix(100000, 0);

int calculatePrefixSum(int start, int end, int n){
    // start = l, end = r
    int output = -1;
    if(start != 0){
        output = prefix[end] - prefix[start - 1];
    }else{
        output = prefix[end];
    }
    return output;
}

void build(vector<int>& arr, int n){
    // array elements stored in arr
    prefix[0] = arr[0];
   
    for(int i = 1; i < n; i++){
        prefix[i] = prefix[i - 1] + arr[i];
    }
}

int main(){
   

    // we have to build the prefixSum array only once
    int n;
    cout << "Enter n:" << endl;
    cin >> n;
    cout << "Enter array elements: " << endl;
    vector<int> arr(n, 0);
    for(int i = 0; i < n; i++){
        cin >> arr[i];
    }

    // build the prefix sum array
    build(arr, n);


    int q;
    // take queries input
    cout << "Enter q " << endl;
    cin >> q;
    while(q--){
        // start and end (range of the query)
        int start, end;
        cout << "Start " << " " << "end" << endl;
        cin >> start >> end;
        int ans = calculatePrefixSum(start, end, n);
        cout << "query: " << q << " " << ans << endl;
    }

}