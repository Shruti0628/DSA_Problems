/*
    *   
   ***
  *****
 *******
*********
*********
 *******
  *****
   ***
    *
*/
#include<iostream>
using namespace std;
void MixedPattern(int n){
     for(int i=0; i<n; i++){
        for(int j=0; j<n-i-1; j++){
            cout<<" ";
        }
        for(int k=0; k<(2*i+1);k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
void MixedPatternReverse(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<i; j++){
            cout<<" ";
        }
        for(int k=0; k<(2*n-(2*i+1));k++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    MixedPattern(n);
    MixedPatternReverse(n);
    return 0;
}