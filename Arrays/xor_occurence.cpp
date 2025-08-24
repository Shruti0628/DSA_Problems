#include<bits/stdc++.h>
using namespace std;
//Find the no that appears once, while all others appear twice
int xor_occurence(int arr[], int n){
    int res = 0;
    for(int i=0; i<n; i++){
        res = res^arr[i];
    }
    return res;
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Element that appears once while all others appear twice is:";
    int res = xor_occurence(arr,n);
    cout<<res;
    return 0;
}
