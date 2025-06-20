#include <iostream>
using namespace std;

int main() {
    int n, m = 0;
    cout<< "Enter the number : ";
    cin>>n;
    for(int i=1; i<=n; i++) {
        m++;
        for(int j=1; j<=i; j++) {
            cout<<m<<" ";
        }
        cout<<endl;
    }
    return 0;
}