//Find the no that appears once, while all others appear twice

#include<bits/stdc++.h>
using namespace std;

//Using brute-force method
int occurence_ones_and_others(int arr[], int n){
    int count;
    for(int i = 0; i < n; i++){
        //Reset count for each elements
        count = 0;
        // Loop to check if arr[i] appears elsewhere in the array (excluding itself) //Put a loop to check if the element is present again and traversing the whole loop, and also flag it for its first occurence.
        for(int j = 0; j < n; j++){
            if(i != j && arr[i] == arr[j]){
                count++;
                break;
        }
    }
    if(count == 0){
        return arr[i];
    }
}
return -1;
}
int main(){
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"enter the elements of an array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Element that appears once while all others appear twice is:";
    int res = occurence_ones_and_others(arr,n);
    cout<<res;
    return 0;
}