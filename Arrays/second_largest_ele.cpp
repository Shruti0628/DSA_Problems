#include<iostream>
using namespace std;
int second_largest(int n, int *arr){
     int largest = arr[0];
     int second_largest = -1;
     for(int i=0; i<n; i++){
        if(arr[i]>largest && second_largest < largest){
            second_largest = largest;
            largest = arr[i];
        }
     }
     return second_largest;
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
    cout<<"Second largest element is given as:"<<second_largest(n, arr);
    return 0;
}