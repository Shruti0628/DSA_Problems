//Maximum Subarray Sum using Kadane's Algorithm
#include<bits/stdc++.h>
using namespace std;
int subarr_sum(int arr[], int n){
    int maxi = INT_MIN;
    int sum = 0;  
    //Iterate through the array
    for( int i = 0; i < n; i++){
        sum += arr[i];
        maxi = max(maxi, sum);
        if(sum < 0){
            sum = 0;
        }
    }
    return maxi;
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
    int res = subarr_sum(arr,n);
    cout<<"Maximum Subarray Sum is given as:"<<res<<endl;
    return 0;
}