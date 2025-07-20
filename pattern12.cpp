/*
    E
    D E
    C D E
    B C D E
    A B C D E
*/

#include<iostream>
using namespace std;
void printReverseAlpha(int n){
    for(int i=0; i<n; i++){
        for(int j=0; j<=i;j++){
            cout<<char('E'-i+j)<<" ";
        }
        cout<<endl;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    printReverseAlpha(n);
    return 0;
}