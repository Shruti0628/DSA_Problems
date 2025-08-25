//Longest Subarray with Sum K
#include<bits/stdc++.h>
using namespace std;
int longest_subarray(int arr[], int n, int k){
    int len = 0;
    for(int i = 0; i < n; i++){
        for(int j = i; j < n; j++){
            int sum = 0;
            for(int k = i; k <= j; k++){
                sum+=arr[k];
            }
            if(sum == k){
                len = max(len, j - i + 1);
            }
        }
    }
    return len;
}

int main(){
    int n,k;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter  the elements of an array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k:";
    cin>>k;
    int res = longest_subarray(arr,n,k);
    cout<<"Length of longest subarray with sum k is:"<<res<<endl;
    return 0;
}