/*
    1
    2 3
    4 5 6
    7 8 9 10
    11 12 13 14 15
*/

#include<iostream>
using namespace std;
int count = 1;
void printNumberPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<count<<" ";
            count++;
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