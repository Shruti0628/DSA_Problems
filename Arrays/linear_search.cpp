#include<iostream>
using namespace std;
int linear_search(int n, int arr[],int key){
    for(int i=0; i<n; i++){
        if(arr[i] == key){
            return i;
        }
    }
return -1;
}
int main(){
    int n,key;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the element to be searched for:";
    cin>>key;
    int index = linear_search(n, arr, key);
    if(index != -1){
        cout<<"Element found at index: "<<index<<endl;
    }
    else{
        cout<<"Element not found in the array."<<endl;
    }
    return 0;
}