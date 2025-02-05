#include<iostream>

using namespace std;

bool is_palindrome(int i,string &str){
	if(i>=str.size()/2){
		return true;
	}
	else{
		if(str[i]!=str[str.size()-i-1]){
			return false;
		}
	}
	return is_palindrome(i+1,str);
}

int main(){
	string s;
	cin>>s;
	cout<<is_palindrome(0,s);
}
