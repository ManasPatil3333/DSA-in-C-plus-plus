#include <iostream>
using namespace std;

int fact(int num) {
    int res = 1;
    for(int i=1; i<=num; i++) {
        res *= i;
    }
    return res;
}

int findBinomial(int n, int r) {
    int num1 = fact(n);
    int num2 = fact(r);
    int num3 = fact(n-r);
    int result = num1/(num2*num3);
    return result;
}

int main() {
    int n, r;
    cout<<"Enter 'n' value : ";
    cin>>n;
    cout<<"Enter 'r' value : ";
    cin>>r;
    int soln = findBinomial(n, r);
    cout << "The binomial coefficient for n : "<< n << " and r : "<< r << " is "<< soln<<endl;
    return 0;
}