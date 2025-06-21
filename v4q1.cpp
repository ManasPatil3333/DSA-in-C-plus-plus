#include <iostream>
using namespace std;

int findFactorial(int num) {
    int res = 1;
    for(int i=1; i<=num; i++) {
        res *= i;
    }
    return res;
}

int main() {
    int num;
    cout<<"Enter the number to find it's factorial : ";
    cin>>num;
    int result = findFactorial(num);
    cout<<"The factorial of the "<<num<<" is "<<result<<endl;
    return 0;
}