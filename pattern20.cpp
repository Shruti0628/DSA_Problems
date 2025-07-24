/*
**********
****  ****
***    ***
**      **
*        *
*        *
**      **
***    ***
****  ****
**********
//Diamond Pattern
*/
#include<iostream>
using namespace std;
void DiamondPatternUpperHalf(int n){
    //Outer loop for upper half
    for(int i=0; i<n; i++){
        //Stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
        //Spaces
        for(int k=0; k<2*i; k++){
            cout<<" ";
        }
        //Stars
        for(int j=0; j<n-i; j++){
            cout<<"*";
        }
       cout<<endl;
    }
}

void DiamondPatternLowerHalf(int n){
    //Outer loop for lower half
    for(int i=0; i<n; i++){
        //Stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
        //Spaces
        for(int k=0; k<2*(n-i-1); k++){
            cout<<" ";
        }
        //Stars
        for(int j=0; j<=i; j++){
            cout<<"*";
        }
       cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    DiamondPatternUpperHalf(n);
    DiamondPatternLowerHalf(n);
    return 0;
}