/* ****
   ****
   ****
   ****
   */

#include<iostream>
using namespace std;
void printPattern(int n){
    for(int i=0; i<4; i++){
        for(int j=0; j<4; j++){
            cout<<"*";
        }
        cout<<endl;
    }
}
    int main(){
        int n;
        cout<<"Enter the number of rows: ";
        cin>>n;
        printPattern(n);
        return 0;
    }
