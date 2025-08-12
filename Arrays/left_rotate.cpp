//Left rotate an array by one place

#include<iostream>
using namespace std;
void left_shift(int n, int arr[]){
    int temp = arr[0];
    for(int i=1; i<n; i++){
        arr[i-1] = arr[i];
        if(i == n-1){
            arr[i] = temp;
        }
    }
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
   left_shift(n,arr);
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}