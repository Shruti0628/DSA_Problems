/*
4 4 4 4 4 4 4 
4 3 3 3 3 3 4
4 3 2 2 2 3 4
4 3 2 1 2 3 4
4 3 2 2 2 3 4
4 3 3 3 3 3 4
4 4 4 4 4 4 4
*/

#include<iostream>
using namespace std;
void SquareNumberPattern(int n){
    for(int i=0; i< 2*n-1 ; i++){
        for(int j=0; j<2*n-1; j++){
            int top = i;
            int left = j;
            int bottom = ( 2 * n - 2) - i;
            int right = ( 2 * n - 2) - j;
            int currVal = n - min(min(top,left), min (bottom,right));
            cout<<currVal<<" ";
        }
        cout<<endl;
    }
}

int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    SquareNumberPattern(n);
    return 0;
}