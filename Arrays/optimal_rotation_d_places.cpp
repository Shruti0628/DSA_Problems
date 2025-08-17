#include<iostream>
#include<bits/stdc++.h>
using namespace std;
void rotate_d_places(int n, int d, int arr[]){
    reverse(arr, arr+d);
    reverse(arr+d,arr+n);
    reverse(arr,arr+n);
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements in the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter by how many places, we need to rotate:";
    cin>>d;
    rotate_d_places(n, d, arr);
    cout<<"After rotation by D places, the array is:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}