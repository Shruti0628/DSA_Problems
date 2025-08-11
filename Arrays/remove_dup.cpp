#include<iostream>
using namespace std;

int duplicate_elements(int n, int *arr) {
    int count = 1;
    for (int i = 0; i < count; i++) {
        for (int j = i + 1; j < n; ) {
            if (arr[i] == arr[j]) {
                j++; // move forward in inner loop
            } else {
                arr[i + 1] = arr[j];
                count = i + 2; // count is number of unique elements
                break;
            }
        }
    }
    return count;
}

int main() {
    int n;
    cout << "Enter the size of an array: ";
    cin >> n;
    int arr[n];
    cout << "Enter the elements of an array: ";
    for (int i = 0; i < n; i++) {
        cin >> arr[i];
    }

    int new_length = duplicate_elements(n, arr);

    cout << "Array after removing duplicates: ";
    for (int i = 0; i < new_length; i++) {
        cout << arr[i] << " ";
    }
    cout << "\nNew length: " << new_length << endl;

    return 0;
}
