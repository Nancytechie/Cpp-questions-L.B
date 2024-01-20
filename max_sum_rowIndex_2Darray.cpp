#include<iostream>
#include<climits>
using namespace std;

void maxPrint(int arr[][3] , int n,int m){
    int rowIndex = -1;
    int maxi = INT_MIN;
    for(int i =0; i<n; i++){
        int sum =0;
        for(int j =0; j<m; j++){
            sum+= arr[i][j];
        }
        if(sum > maxi){
            maxi = sum;
            rowIndex = i;
        }   
    }
    cout << "Maximum sum is : " << maxi << " at index: " << rowIndex;
}
int main(){
    int arr[3][3];
    cout << "enter the array" << endl;
    for(int i=0; i< 3; i++){
        for(int j =0; j<3; j++){
            cin >> arr[i][j] ;
        }
    }
    for(int i=0; i< 3; i++){
        for(int j =0; j<3; j++){
            cout << arr[i][j] ;
        }
        cout << endl;
    }
    maxPrint(arr , 3, 3);
  
}