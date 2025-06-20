#include <iostream>
using namespace std;

int main() {
    int num, count = 0;
    cout<< "Enter the number : ";
    cin>> num;
    for(int i=2; i<num; i++) {
        if(num%i == 0) {
            count++;
        }
    }
    if(count == 0) {
        cout<<num<< " is a prime number."<<endl;
    } else {
        cout<<num<< " is not a prime number."<<endl;
    } 
    return 0;
}