#include <iostream>
using namespace std;

int main() {
    int n, i, j, k, l;
    cout<<"Enter the number : ";
    cin>> n;
    for(i=0; i<n; i++) {
        for(j=i; j<n-1; j++) {
            cout<<"  ";
        }
        for(k=0; k<1; k++) {
            cout<<"* ";
        }
        for(l=0; l<(2*i-1); l++) {
            cout<<"  ";
        }
        if(i != 0) {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=0; i<n-1; i++) {
        for(j=0; j<i+1; j++) {
            cout<<"  ";
        }
        cout<<"* ";
        for(k=0; k<2*(n-i)-5; k++) {
            cout<<"  ";
        }
        if(i<n-2) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}