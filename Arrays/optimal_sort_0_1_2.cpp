#include<bits/stdc++.h>
using namespace std;
vector<int>optimal_sort(int arr[], int n){
    int low = 0, mid = 0, high = n - 1;
    while(mid <= high){
        if(arr[mid] == 0){
            swap(arr[low], arr[mid]);
            low++;
            mid++;
        }
        else if(arr[mid] == 1){
            mid++;
        }
        else{
            swap(arr[mid], arr[high]);
            high--;
        }
    }
    return vector<int>(arr, arr + n); 
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array (only 0s, 1s, and 2s):";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    vector<int>res = optimal_sort(arr, n);
    cout<<"Sorted array is given as:";
    for(int i = 0; i < n; i++){
        cout << res[i] << " ";
    }
    return 0;
}