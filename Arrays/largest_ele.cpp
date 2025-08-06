#include<iostream>
using namespace std;
int largest_ele(int n, int *arr){
    int largest = arr[0];
    for(int i=0; i<n; i++){
    if(largest < arr[i]){
        largest = arr[i];
    }
}
    return largest;
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
    cout<<"Largest element in the array is given as:"<<largest_ele(n, arr);
    return 0;
}