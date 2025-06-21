#include <iostream>
using namespace std;

int sumOfAllDigits(int num, int res) {
    if(num < 10) {
        res = res + num;
        return res;
    } else {
        int m = num%10;
        res += m;
        num = num/10;
        sumOfAllDigits(num, res);
    }
}

int main() {
    int num, res = 0;
    cout<<"Enter the number : ";
    cin>>num;
    int result = sumOfAllDigits(num, res);
    cout<<"Sum of all digits of "<<num<<" is "<<result<<endl;
    return 0;
}