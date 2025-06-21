#include <iostream>
using namespace std;

int main() {
    int n;
    cout << "Enter the number : ";
    cin >> n;
    for(int i=1; i<=n; i++) {
        int m = i-1;
        for(int j=i; j<n; j++) {
            cout<<"  ";
        }
        for(int k=1; k<=i; k++) {
            cout<<k<<" ";
        }
        for(int l=1; l<i; l++) {
            cout<<m<<" ";
            m--;
        }
        cout<<endl;
    }
    return 0;
}