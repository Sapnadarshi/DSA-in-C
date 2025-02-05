#include<iostream>

using namespace std;

int i;
int j;
int main(){
	string str="assa";
	int i=0;
	int j=str.length()-1;
	while(i<=j){
		if(str[i]!=str[j]){
			cout<<str<<"\t"<<"is Not a Palindrome"<<endl;
			return 0;
		}
		
		else{
			i++;
			j--;
			
		}
	}
	cout<<str<<" is a Palindrome"<<endl;
}




