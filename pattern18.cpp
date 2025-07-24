/*
1      1
12    21
123  321
12344321
*/
#include<iostream>
using namespace std;
void PrintNumberPattern(int n){
    int space = 2 * (n-1);
    for(int i=1; i<=n; i++){
        //for numbers
        for(int j=1; j<=i; j++){
            cout<<j;
        }
        //for space
        for(int j=1; j<=space; j++){
            cout<<" ";
        }
        //for numbers
        for(int j=i; j>=1; j--){
            cout<<j;
        }
        cout<<endl;
        space-=2;
    }
}
int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    PrintNumberPattern(n);
    return 0;
}