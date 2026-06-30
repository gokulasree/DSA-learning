#include <iostream>
#include <vector>
using namespace std;

int binarySearch(vector<int>& arr, int key) {
    int n = arr.size();
    int i = 0;
    int j = n - 1;

    while (i <= j) {
        int mid = i + (j - i) / 2; // safer than (i+j)/2

        if (arr[mid] == key)
            return mid;
        else if (arr[mid] > key)
            j = mid - 1;
        else
            i = mid + 1;
    }

    return -1;
}

int main() {
    vector<int> arr = {1, 3, 5, 7, 9, 11};
    int key = 7;

    int index = binarySearch(arr, key);

    if (index != -1)
        cout << "Element found at index: " << index << endl;
    else
        cout << "Element not found" << endl;

    return 0;
}