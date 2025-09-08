#include<iostream>
using namespace std;
int optimal_majority_ele(int arr[], int n){
    int element;
    int count = 0;
    //Iterate through the array
    for(int i = 0; i < n; i++){
        if( count == 0 ){
            count++;
            element = arr[i];
        }else if(arr[i] == element){
            count++;
        }else{
            count--;
        }
    }
    int count1 = 0;
    for(int i = 0; i < n; i++){
        if(arr[i] == element){
            count1++;
        }
        if(count1 > (n / 2)){
            return element;
        }
    }
    return -1;
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the elements of an array:";
    for(int i = 0; i < n; i++){
        cin>>arr[i];
    }
    int res = optimal_majority_ele(arr,n);
    cout<<"Majority Element is : "<<res<<endl;
    return 0;
}