#include <iostream>
using namespace std; 

bool isSorted(int arr[], int size) {
    for(int i=0; i<size-1; i++) {
        if(arr[i] > arr[i+1]) {
            return false;
            break;
        }
    }
    return true;
}

int main() {
    int arr1[] = {1,2,3,4,5,6,7};
    int arr2[] = {2,5,1,3,7,4};
    if(isSorted(arr1, 7)) {
        cout<< "Sorted";
    } else {
        cout<<"Unsorted";
    }
    if(isSorted(arr2, 6)) {
        cout<< "Sorted";
    } else {
        cout<<"Unsorted";
    }
    return 0;
}
