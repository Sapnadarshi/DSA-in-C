#include<iostream>

using namespace std;

int sum(int n){
	if(n==0){
		return 0;
	}
	if(n==1){
		return 1;
	}
	else {
		return n+sum(n-1);
	}
}

int sum2(int i, int n){
	if(i==0){
		return n;
	}
	else
	return sum2(i-1,n+i);
}

int fact(int x){
	if(x==0||x==1){
		return 1;
	}
	else 
	return x*fact(x-1);
}
int main(){
	int N;
	int M=0;
	int n=5;
	cout<<"Enter Value of N: ";
	cin>>N;
	cout<<sum(N)<<"\n";
	cout<<sum2(n,M)<<"\n";
	cout<<fact(n);

}
