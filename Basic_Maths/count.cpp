  /*Count the number of digits*/
#include <iostream>
using namespace std;
int count_digits(int n){
    int count = 0;
    int last_digit,rem;
     while(n>0){
        last_digit = n % 10;
        count++;
        n = n/10;
     }
     return count;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    cout<<"Number of digits present in the number is given as:"<< count_digits(n);
    return 0;
}