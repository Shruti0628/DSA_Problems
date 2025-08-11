#include<iostream>
using namespace std;
bool sorted_array(int n, int *arr){
    for(int i=1; i<n; i++){
        if(arr[i] < arr[i-1]){
            return false;
        }
    }
    return true;
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements in an array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    if(sorted_array(n,arr)){
        cout<<"Array is sorted.";
    }
    else{
        cout<<"Array is not sorted.";
    }
    return 0;
}