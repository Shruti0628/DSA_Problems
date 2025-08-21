#include<bits/stdc++.h>
using namespace std;

void find_missing_ele(vector<int>& arr, int n){
    for(int i=1; i<=n; i++){
        bool found = false;
        for(int j=0; j<arr.size(); j++){
            if(arr[j] == i){  // check if i exists in array
                found = true;
                break;
            }
        }
        if(!found){           // if i is not found, it is missing
            cout << i << " ";
            return;          // exit after finding the missing element
        }
    }
}

int main(){
    int n;
    cout<<"Enter the maximum number n: ";
    cin>>n;
    vector<int> arr(n-1);   // since one element is missing
    cout<<"Enter the elements of the array: ";
    for(int i=0; i<n-1; i++){
        cin>>arr[i];
    }

    cout<<"The missing element in the array is: ";
    find_missing_ele(arr, n);
    return 0;
}
