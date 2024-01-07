#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int n){
    for(int i =0; i<n-1 ; i++){
        for(int j =0; j<n-i-1 ; j++){
            if(arr[j] > arr[j+1]){
                swap(arr[j], arr[j+1]);
            }
        }
    }
}
int main(){
    int arr[] = {10, 30, 4, 17, 40};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
    bubble_sort(arr , n);
    cout << endl;
    for(int i =0; i < n; i++){
        cout << arr[i] << " ";
    }
}