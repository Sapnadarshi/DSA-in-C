#include<iostream>

using namespace std;

void print_name(int n){
	if(n==1){
	return ;
}
	else
	cout<<n<<"\n";
	print_name(n-1);
}

int main(){
	int n;
	cin>>n;
	print_name(n);
}
