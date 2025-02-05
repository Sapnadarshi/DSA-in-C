#include<stdio.h>

int fibo(int n){
	if(n==1||n==2)
		return 1;
	else
		return fibo(n-1)+fibo(n-2);
		}
int main(){
	int n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("n-th term of fibonacci series is %d", fibo(n));
	return 0;
}
