#include <iostream>
#include <climits>
using namespace std; 

int main() {
    int arr[] = {1,2,3,4,5,6,7,7};
    int size = sizeof(arr)/sizeof(arr[0]);
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    for(int i=0; i<size; i++) {
        if(arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] < largest & arr[i] > secondLargest) {
            secondLargest = arr[i];
        }
    }
    cout<<secondLargest;
    return 0; 
}