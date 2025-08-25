//Longest Subarray with Sum K - Optimal Approach
#include<bits/stdc++.h>
using namespace std;
int longest_subarray(int arr[], int n, int k){
    int len = 0;
    int sum = arr[0];
    int left = 0, right = 0;
    while( right < n){
        // Till we get sum more than k, we reduce it back to the left.
        while( left <= right && sum > k){
            sum -= arr[left];
            left++;
        }
        //Check out for length when sum == k
        if ( sum == k){
            len = max(len, right - left + 1);
        }
        //Keep expanding the window to the right
        right++;
        if(right < n ){
            sum += arr[right];
        }
    }
    return len;
}
int main(){
    int n,k;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array:";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the value of k:";
    cin>>k;
    int res = longest_subarray(arr,n,k);
    cout<<"Lenght of Longest Subarray with Sum K is:"<<res<<endl;
    return 0;
}