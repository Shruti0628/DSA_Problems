/* Armstrong Numbers:
    n = 371, when we do it's sum of the cube of the individual numbers which is equals to the original number it's called as "armstrong number".
*/

#include<iostream>
#include<math.h>
using namespace std;
bool armstrong_no (int n){
    long long original = n;
    long long sum = 0;
    long long last_digit = 0;
    while(n != 0){
       last_digit = n % 10;
       sum = sum + pow(last_digit,3);
       n = n / 10;
    }
    if( original == sum){
        return true;
    }
    return false;
}
int main(){
    int n;
    cout<<"Enter a number:";
    cin>>n;
    if(armstrong_no(n)){
        cout<<" It's an armstrong number";
    }
    else{
        cout<< "It's not an armstrong number";
    }
    return 0;
}