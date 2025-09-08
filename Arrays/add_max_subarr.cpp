//Addition of maximum subarray
#include<bits/stdc++.h>
using namespace std;
int max_subarray(int arr[], int n){
    int maxi = INT_MIN;
    //Iterate through the array
    for( int i = 0; i < n; i ++){
        for( int j = i; j < n; j++){
            int sum =  0;
            for( int k = i; k <= j; k++){
                sum += arr[k];
                maxi = max(maxi,sum);
            }
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
    int res = max_subarray(arr,n);
    cout<<"Maximum Subarray Sum is given as:"<<res<<endl;
    return 0;

}