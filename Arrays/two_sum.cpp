//Two Sum Problem
#include<bits/stdc++.h>
using namespace std;

//Brute Force Approach
vector<int>two_sum(int arr[], int n, int target){
    vector<int>res;
    //Traverse through the whole array
    for(int i=0; i<n; i++){
        //Check for every element if there exists another element such that their sum is equal to target
        for(int j = i+1; j<n; j++){
            if( arr[i] == arr[j]){
                continue;
            }
            if(arr[i] + arr[j] == target){
                res.push_back(i);
                res.push_back(j);
            }
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
    cout<<"The elements are: "<<arr[res[0]]<< " and " << arr[res[1]]<<endl;
    return 0;
}