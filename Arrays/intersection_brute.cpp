//Insertion of two sorted arrays (Brute Force Approach)
#include<bits/stdc++.h>
using namespace std;
vector<int>intersection_arr(vector<int>&arr, vector<int>&brr){
    vector<int>res;
    int n = brr.size();
    vector<int>visited(n);
    //Fill the entired visited array with 0
    for(int i=0; i<n; i++){
        visited[i] = 0;
    }
    //Check for each element of the first array in the second array for intersection, if found, mark index visted with 1 and push it into the result
    for(int i=0; i<arr.size(); i++){
        for(int j=0; j<brr.size(); j++){
            if(arr[i] == brr[j] && visited[j] == 0){
                res.push_back(arr[i]);
                visited[j] = 1;
                break;
            }
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