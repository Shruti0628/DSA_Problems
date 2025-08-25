//Two Sum Problem - Optimal Approach
#include<bits/stdc++.h>
using namespace std;
vector<int>two_sum(int arr[], int n, int target){
    //Sorting the array
    sort(arr, arr+n);
    int left = 0, right = n-1;
    vector<int>res;
    while( left < right){
        int sum = arr[left] + arr[right];
        if( sum == target ){
            res.push_back(left);
            res.push_back(right);
        }
        if( sum < target){
            left++;
        }else{
            right --;
        }
    }
    return res;
}
int main(){
    int n, target;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array:";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the target sum:";
    cin>>target;
    vector<int>res = two_sum(arr,n,target);
    cout<<"Indices of the two numbers such that they add up to target are:"<<res[0]<<" and "<<res[1]<<endl;
    cout<<"The elements are: "<<arr[res[0]] << " and " << arr[res[1]]<<endl;
    return 0;
}