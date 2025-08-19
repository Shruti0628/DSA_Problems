// Find the union of the two sorted arrays
#include<iostream>
#include<set>
using namespace std;
set<int>union_arrays(int n, int arr[], int arr1[], int m){
    set<int>res;
    for(int i=0; i<n; i++){
        res.insert(arr[i]);
    }
    for(int j=0; j<m; j++){
        res.insert(arr1[j]);
    }
    for(auto it = res.begin(); it!=res.end(); it++){
        cout<<*it<<" ";
    }
return res;
}
int main(){
    int n,m;
    cout<<"Enter the size of first array:";
    cin>>n;
    cout<<"Enter the size of second array:";
    cin>>m;
    int arr[n], arr1[m];
    cout<<"Enter the elements of first array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    cout<<"Enter the elements of second array:";
    for(int i=0; i<m; i++){
        cin>>arr1[i];
    }
    cout<<"The union of the two arrays is:"<<endl;
    set<int>res1 = union_arrays(n,arr,arr1,m);
    // Step 1: Insert all elements of the first array into the set
    for(int i=0; i<n; i++){
        res1.insert(arr[i]);
    }
    return 0;
}