//Print all divisors
#include<iostream>
#include<math.h>
using namespace std;

/*Brute-Force Method*/

// void divisors(int n){
//     for(int i = 1; i <= n; i++){
//         if( n % i == 0){
//             cout<< i <<" ";
//         }
//     }
// }

/*Optimized Approach*/

void divisors(int n){
       for(int i = 1; i <= sqrt(n); i++){
       if( n % i == 0){
             cout<< i <<" ";
        if((n/i)!=1){
            cout<< n/i << " ";
        }
        }
    }
 }

int main(){
    int n;
    cout<<"Enter any number to get divisors:";
    cin>>n;
    divisors(n);
    return 0;
}