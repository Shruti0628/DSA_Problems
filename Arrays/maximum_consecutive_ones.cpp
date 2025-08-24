#include<iostream>
using namespace std;
int max_consecutive_ones(int arr[], int n){
    int max_count = 0;
    int count = 0;
    for(int i=0; i<n; i++){
        if(arr[i] == 1){
            count++;
            max_count = max(max_count, count);
        }
        else{
        count = 0;
    }
}
    return max_count;
}
int main(){
    int n;
    cout<<"Enter the array size:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Maximum consecutive ones in the array is:"<<max_consecutive_ones(arr,n);
    return 0;
}