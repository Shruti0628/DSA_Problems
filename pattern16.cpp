/*
*
**
***
****
*****
****
***
**
*
*/
//Symmetry Pattern
#include <iostream>
using namespace std;
int stars;
void SymmetryPattern(int n){
    for(int i=1; i<=(2*n-1); i++){
        if(i<n){
        stars = i;
    }
        else{
            stars = (2*n-i);
        }
        for(int j=1; j<=stars; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    SymmetryPattern(n);
    return 0;
}