//Reverse a number 
#include<iostream>
using namespace std;
int reversed_no(int n){
    int res = 0;
    int last_digit, rem;
    while(n > 0){
        last_digit = n % 10;
        res = res * 10  + last_digit;
        n = n / 10;
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"The reveresed of the original number is given as:"<<reversed_no(n);
    return 0;
}