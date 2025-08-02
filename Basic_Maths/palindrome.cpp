//Check if a number is a palindrome or not
#include<iostream>
using namespace std;
bool is_palindrome(int n ){
    int original = n;
    int rem=0;
    int reversed = 0;

    while(n>0){
        rem = n % 10;
        reversed = reversed * 10 + rem;
        n = n / 10;
    }
    if(original == reversed){
        return true;
    }
    return false;

}

int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    is_palindrome(n) ? cout<<"The number is a palindrome." : cout<<"The number is not a palindrome.";
    return 0;
}