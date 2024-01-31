#include<iostream>
using namespace std;

// power using recursion

int power( int a , int b){
    if(b ==0){
        return 1;
    }
    if(b == 1){
        return a;
    }
    // Recursive call
    int ans = power(a , b/2);
    if(b%2 == 0){
        return ans*ans;
    }
    else{
        return a * ans * ans;
    }

}

int main(){
    cout << power(2 , 10);
}