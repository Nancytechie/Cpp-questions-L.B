#include<iostream>
using namespace std;

void bubble_sort(int arr[] , int n){
    if(n ==0 || n==1){
        return;
    }
    for(int i=0; i<n-1 ; i++){
        if(arr[i] > arr[i+1] ){
            swap(arr[i] , arr[i+1]);
        }
    } 
    bubble_sort(arr , n-1);

}
int main(){
    int arr[] = {4 , 26 , 12, 5};
    int n = sizeof(arr)/sizeof(arr[0]);
    bubble_sort(arr , n);
    for(int i=0 ; i<n ; i++){
        cout << arr[i] << " " ;
    }
}