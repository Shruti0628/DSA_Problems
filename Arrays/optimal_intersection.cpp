//Optimal Solution for Intersection of Two Arrays
#include<bits/stdc++.h>
using namespace std;
vector<int>intersection_arr(vector<int>&arr, vector<int>&brr){
    vector<int>res;
    int n = arr.size();
    int n1 = brr.size();
    int i=0, j=0;
    while(i<n && j<n1){
        if(arr[i] == brr[j]){
            res.push_back(arr[i]);
            i++;
            j++;
        }
        else if(arr[i]<brr[j]){
            i++;
        }
        else{
            j++;
        }
    }
    return res;
}
int main(){
    int n,m;
    cout<<"Enter the size of the first array:";
    cin>>n;
    cout<<"Enter the size of the second array:";
    cin>>m;
    vector<int>arr(n);
    vector<int>brr(m);
    cout<<"Enter the elements of the first array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements of the second array:";
    for(int j=0; j<m; j++){
        cin>>brr[j];
    }
    vector<int>res = intersection_arr(arr, brr);
    cout<<"The intersection of the two arrays is given as:"<<endl;
    for(int i=0; i<res.size(); i++){
        cout<<res[i]<<" ";
    }
    return 0;
}