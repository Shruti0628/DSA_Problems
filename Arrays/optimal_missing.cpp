#include<iostream>
using namespace std;
int missing_ele(int arr[], int n){
    int N = n+1;
    int total = N*(N+1)/2;
    int sum = 0;
    for(int i=0;i<n; i++){
        sum+=arr[i];
    }
    int diff = total - sum;
    return abs(diff);
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
    cout<<"Missing element in the array is:" <<missing_ele(arr,n);
    return 0;
}