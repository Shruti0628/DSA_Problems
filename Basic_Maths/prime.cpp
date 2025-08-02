//Check whether a number is prime or not
#include<iostream>
using namespace std;
bool is_prime(int n){
if(n <= 1){
        return false;
    }
else {
    for(int i = 2; i <= n; i++){
        if(n % i == 0){
                return false;
            }
        else {
                return true;
        }}
    }
 return true;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    is_prime(n) ? cout<<"Number is prime." : cout<<"Number is not prime.";
    return 0;
}
