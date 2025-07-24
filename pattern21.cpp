/*

*        *
**      **
***    ***
****  ****
**********
****  ****
***    ***
**      **
*      *

*/
#include<iostream>
using namespace std;
void SymmetryStarProblem(int n){
    //Upper Half
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
void SymmetryStarProblemLowerHalf(int n){
    //Lower Half
    for(int i=0; i<n; i++){
        //Stars
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        //Spaces
        for(int k=0; k<(2*i)+2; k++){
            cout<<" ";
        }
        //Stars
        for(int j=0; j<n-i-1; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    SymmetryStarProblem(n);
    SymmetryStarProblemLowerHalf(n);
    return 0; 
}