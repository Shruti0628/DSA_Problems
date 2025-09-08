#include<bits/stdc++.h>
using namespace std;
int max_subarr(int arr[], int n){
    //Better approach to find maximum subarray sum
    int maxi = INT_MIN;
    //Iterate through the array
    for( int i = 0; i < n; i++){
        int sum = 0;
        for(int j = i; j < n; j++){
            sum+=arr[j];
            maxi = max(maxi, sum);
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
    int res = max_subarr(arr,n);
    cout<<"Maximum Subarray Sum is given as:"<<res<<endl;
    return 0;
}