/*
    *****
    ****
    ***
    **
    *
*/

#include<iostream>
using namespace std;
void printStarPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i; j--){
            cout<<"*"<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    printStarPattern(n);
    return 0;
}