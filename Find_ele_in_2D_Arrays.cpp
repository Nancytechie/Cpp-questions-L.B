//  2-D arrays
#include<iostream>
using namespace std;

bool isPresent(int arr[][4] , int target , int n  , int m){
    for(int i=0 ;i < n; i++){
        for(int j =0 ; j< m ; j++){
            if( arr[i][j] == target){
                return true;
            }
        }
    }
    return false;

}

int main(){
    int arr[3][4];
    
    // input row wise
    cout << "Enter array value" << endl;
    for(int i=0; i<3; i++){
        for(int j=0; j<4 ; j++){
            cin>> arr[i][j];
        }
    }
   
    for(int i=0; i<3; i++){
        for(int j=0; j<4 ; j++){
            cout <<  arr[i][j] << " " ;
        }
        cout << endl;
    }
    

    int ans = isPresent(arr , 1 , 3 , 4);
    if(ans){
        cout << "Eureka! " <<endl;
    }
    else{
        cout << "Better Luck next time " << endl;
    }

    return 0;

}
