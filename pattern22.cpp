/*
Square Pattern
    ****
    *  *
    *  *
    *  *
    ****
*/
#include<iostream>
using namespace std;
void SquarePattern(int n){
     for(int i=0; i<n; i++){
        for(int j=0; j<n; j++){
            if(i == 0 || j == 0 || i== n-1 || j == n-1){
                cout<<"*";
            }
            else{
                        cout<<" ";
                }
            }   
        cout<<endl;
    }
}

int main()
{
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    SquarePattern(n);
    return 0;
}