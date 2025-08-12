//Left rotate the array by D places
#include<iostream>
using namespace std;
void rotate_d_places(int n, int arr[], int d){
    int temp[n];
    d = d%n;
    d = n-d;
    for(int i=0; i<d; i++){
        temp[i] = arr[i];
    }
    //Shifting the elements
    for(int i=d; i<n; i++){
        arr[i-d] = arr[i];
    }
    for(int i=0; i<d; i++){
        arr[n-d+i] = temp[i];
    }
}
int main(){
    int n;
    cout<<"Enter the size of an array:";
    cin>>n;
    int arr[n];
    cout<<"Enter the number of elements in the array:";
    for(int i=0; i<n; i++){
        cin>>arr[i];
    }
    int d;
    cout<<"Enter by how many places, we need to rotate:";
    cin>>d;
    rotate_d_places(n,arr,d);
    cout<<"Left rotation by D places is given as:"<<endl;
    for(int i=0; i<n; i++){
        cout<<arr[i]<<" ";
    }
    return 0;
}