#include<iostream>
using namespace std;

void insertion_sort(int arr[] , int n){
    for (int i = 1; i < n-1 ; i++)
    {
        int temp = arr[i];
        int j = i-1;
        for(; j>=0 ; j--){
            if(arr[j] > temp){
                arr[j+1] = arr[j];
            }
            else{
                break;
            }
        }
        arr[j+1] = temp;
    }
    
}
int main(){
    int arr[] = {10 , 4 , 6, 19, 50};
    int n = sizeof(arr)/sizeof(arr[0]);
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
    insertion_sort(arr , n);
    cout << endl;
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " ";
    }
}