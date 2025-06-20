#include <iostream>
using namespace std;

int main() {
    // int n;
    // cout<< "Enter the number : ";
    // cin>>n;
    // for(int i=1; i<=n; i++) {
    //     int m = i;
    //     for(int j=1; j<=i; j++) {
    //         cout<<m<<" ";
    //         m--;
    //     }
    //     cout<<endl;
    // }
    int n;
    cout<< "Enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        for(int k=1; k<i; k++) {
            cout<<" ";
        }
        for(int j=i; j<=n; j++) {
            cout<<i;
        }
        cout<<endl;
    }
    return 0;
}