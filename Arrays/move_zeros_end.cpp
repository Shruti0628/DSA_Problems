#include<iostream>
#include<vector>
using namespace std;
vector<int> move_zeros_end(int n, vector<int>a){
    vector<int>temp;
    //Step-1: Traverse the array and push non-zero elements to temp
    for(int i=0; i<n; i++){
        if(a[i]!=0){
            temp.push_back(a[i]);
        }
    }
    //Step 2: Push the elements into the original array
    for(int i=0; i<temp.size(); i++){
        a[i] = temp[i];
    }
    //Step 3: Fill the remaining elements with zeros
    for(int i= temp.size(); i<n; i++){
        a[i] =  0;
    }
    return a;
}


int main(){
    int n;
    cout<<"enter the size of an array:";
    cin>>n;
    vector<int> a(n);
    cout<<"enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>a[i];
    }
    a = move_zeros_end(n, a);
    cout<<"After moving zeros to the end, the array is:"<<endl;
    for(int i=0; i<n; i++){
        cout<<a[i]<<" ";
    }
    return 0;
}