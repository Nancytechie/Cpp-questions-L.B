#include<iostream>
using namespace std;

void reverse(string& str , int i , int j){
    if(i>j){
        return;
    }
    swap(str[i] , str[j]);
    i++;
    j--;
    reverse(str , i , j);
}
string reverse_string(string str){
    reverse(str , 0 , str.length()-1);
    return str;
}

/* using one pointer
void reverse(string& str , int i){
	int n =str.length();
	if(i>n-i-1){
		return;
	}
	swap(str[i] , str[n-i-1]);
	i++;
	
	reverse(str , i);

}
string reverseString(string str)
{
	reverse(str , 0 );
	return str;

}
*/