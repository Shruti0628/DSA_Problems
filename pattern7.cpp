/*
    12345
    1234
    123
    12
    1
*/

#include<iostream>
using namespace std;
int count = 0;
void printNumberPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i; j--){
            count++;
            cout<<count<<" ";
        }   
        cout<<endl;
        count = 0;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    printNumberPattern(n);
    return 0;
}