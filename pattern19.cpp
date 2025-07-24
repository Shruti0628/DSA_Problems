/*
     A
    ABA
   ABCBA
  ABCDCBA
 ABCDEDCBA
*/

#include<iostream>
using namespace std;
void PrintAlphaSymmetryPattern(int n){
    for(int i=0; i<n; i++){
    //for spaces
    for(int j=0; j<n-i-1; j++){
        cout<<" ";
    }
    //for alphabets
    char ch = 'A';
    int breakpoint = (2*i+1)/2;
    for(int j=0; j<2*i+1; j++){
        cout<<ch;
        if(j < breakpoint){
            ch++;
        }else{
            ch--;
        }
    }
    //for spaces
    for(int j=0; j<n-i-1; j++){
        cout<<" ";
    }
    cout<<endl;
    }
}


int main(){
    int n;
    cout<<"Enter the number of rows:";
    cin>>n;
    PrintAlphaSymmetryPattern(n);
    return 0;
}