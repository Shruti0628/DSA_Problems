/*
    1
    1 2
    1 2 3
    1 2 3 4
    1 2 3 4 5
*/

#include<iostream>
using namespace std;
void printNumberPattern(int n){
    for(int i=1; i<=n; i++){
        for(int j=1; j<=i; j++){
            cout<<j<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    printNumberPattern(n);
    return 0;
}