#include <iostream>
using namespace std;

int main() {
    int n, i, j, k, l; 
    cout <<"Enter the number : ";
    cin>> n;
    for(i=0; i<n; i++) {
        for(j=0; j<i+1; j++) {
            cout<<"* ";
        }
        for(k=0; k<2*(n-i)-2; k++) {
            cout<<"  ";
        }
        for(l=0; l<i+1; l++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    for(i=0; i<n; i++) {
        for(j=0; j<n-i; j++) {
            cout<<"* ";
        }
        for(k=0; k<(6-(2*(n-i-1))); k++) {
            cout<<"  ";
        }
        for(l=0; l<n-i; l++) {
            cout<<"* ";
        }
        cout<<endl;
    }
    return 0;
}