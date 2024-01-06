#include<iostream>
using namespace std;

void selection_sort(int arr[] , int n){
    for(int i=0; i<n-1; i++){
        int min_inx = i;
        for(int j=i+1; j<n; j++){
            if(arr[j] < arr[min_inx]){
                min_inx = j;
            }
            
        }
        swap(arr[min_inx] , arr[i]);
    }
}

int main(){
    int arr[] = { 6,43, 16, 9, 30};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i =0; i<n;i++){
        cout << arr[i] << " ";
    }
    cout << endl;
    selection_sort(arr,n);
    for(int i =0; i<n;i++){
        cout << arr[i] << " ";
    }
}
