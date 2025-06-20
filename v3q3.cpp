#include <iostream>
using namespace std;

int main() {
    int n;
    // int m = 0;
    char ch = 'A';
    cout<< "Enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        // m++;
        for(int j=1; j<=i; j++) {
            // cout<<m<<" ";
            cout<<ch<<" ";
        }
        ch = ch + 1;
        cout<<endl;
    }
    return 0;
}