#include<bits/stdc++.h>
using namespace std;
void res(int arr[], int n){
    int count0 = 0, count1 = 0, count2 = 0;
    //Iterate through loop
    for(int i=0; i<n; i++){
        if(arr[i] == 0){
            count0++;
        }
        else if(arr[i] == 1){
            count1++;
        }
        else{
            count2++;
        }
    }
    int index = 0;
    //Now fill the array with 0s, 1s and 2s and modify the original array
    for(int i=0; i<count0; i++){
        arr[index++] = 0;
    }
    for(int i=0; i<count1; i++){
        arr[index++] = 1;
    }
    for(int i=0; i<count2; i++){
        arr[index++] = 2;
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array (only 0s, 1s and 2s):";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    res(arr,n);
    cout<<"Sorted array is:";
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}