#include<iostream>
#include<vector>
using namespace std;
vector<int> move_zeros_end(int n, int arr[]){
    int j,i;
    //Take the value of first zero th element in the array and store it in a var.
    for(i=0; i<n; i++){
        if(arr[i] == 0){
            j = i;
            break;
        }
    }
    //Iterate and swap the first zero with the next non-zero element and make the values of non-zero integers forward.
    while(j<n && i<n){
    for(i=j+1; i<n; i++){
        if(arr[i] != 0){
            swap(arr[i],arr[j]);
            j++;
        }
    }
}
    //Print the array after moving zeros to the end.
    cout<<"After moving zeros to the end, the array is:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
}
return vector<int>(arr, arr + n);
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    move_zeros_end(n,arr);
    return 0;
}
