/*
    A B C D E
    A B C D
    A B C
    A B
    A
*/
#include<iostream>
using namespace std;
char count = 'A';
void printPatternReverse(int n){
    for(int i=0; i<n; i++){
        for(int j=n-1; j>=i; j--){
            cout<<count<<" ";
            count++;
        }
        cout<<endl;
        count = 'A';
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    printPatternReverse(n);
    return 0;
}