/*
    A
    A B
    A B C
    A B C D
    A B C D E
*/

#include<iostream>
using namespace std;
void printAlphaPattern(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i; j++){
            cout<<char('A'+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    printAlphaPattern(n);
    return 0;
}