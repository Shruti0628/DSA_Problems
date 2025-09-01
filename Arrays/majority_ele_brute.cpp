#include<bits/stdc++.h>
using namespace std;
int majority_element(int arr[], int n){
    int count;
    for(int i = 0 ; i < n; i++){
        count = 0;
        for( int j = 0 ; j < n; j++){
            if( arr[i] == arr[j]){
                count++;
            }
        }
        if(count > n/2){
            return arr[i];
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array:";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int res = majority_element(arr,n);
    cout<<"Majority Element is:"<<res<<endl;
    return 0;
}