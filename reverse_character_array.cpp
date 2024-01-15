#include<iostream>
using namespace std;

void reverse(char arr[] , int n){
    int s =0;
    int e=n-1;
    while(s<=e){
        swap(arr[s++] , arr[e--]);
    }
}
int get_length( char arr[]){
    int count =0;
    for(int i=0 ; arr[i] != '\0' ; i++){
        count++;
    }
    return count;
}
int main(){
    char name[10];
    cout << "enter your name" << endl;
    cin >> name;
    cout << name<< endl;
    int n = get_length(name);
    cout << n << endl;
    reverse(name , n);
    cout << name;

}