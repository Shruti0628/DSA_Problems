//Union of two sets with an optimal approach
#include<bits/stdc++.h>
using namespace std;
vector<int>optimal_union(vector<int>&arr, vector<int>&arr1){
    vector<int>res;
    int s1 = arr.size();
    int s2 = arr1.size();
    int i=0, j=0;
    while(i<s1 && j<s2){
        if(arr[i]<arr1[j]){
            if(res.empty() || res.back() != arr[i]){
                res.push_back(arr[i]);
            }
            i++;
        }
        else if(arr[i] > arr1[j]){
            if(res.empty() || res.back() != arr1[j]){
                res.push_back(arr1[j]);
            }
            j++;
        }
        else{
            if(res.empty() || res.back() != arr[i]){
                res.push_back(arr[i]);
            }
            i++;
            j++;
        }
    }
    while(i<s1){
        if(res.empty() || res.back()!= arr[i]){
            res.push_back(arr[i]);
        }
        i++;
    }
    while(j<s2){
        if(res.empty() || res.back()!=arr1[j]){
            res.push_back(arr1[j]);
        }
        j++;
    }
    return res;
}
int main(){
    int n;
    int n1;
    cout<<"Enter the size of the first array:";
    cin>>n;
    cout<<"Enter the size of the second array:";
    cin>>n1;
    vector<int> arr(n);
    vector<int> arr1(n1);
    cout<<"Enter the elements of the first array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements of the second array:";
    for(int i=0; i<n1; i++){
        cin>>arr1[i];
    }
    vector<int>res = optimal_union(arr, arr1);
    cout<<"Union of the two arrays are:"<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}