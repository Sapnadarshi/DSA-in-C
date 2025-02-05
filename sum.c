#include<stdio.h>

int sum(int n){
	if(n<10)
		return n;
	else
		return ((n%10)+sum(n/10));
		}
int main(){
	int n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("sum of elements of n is %d", sum(n));
	return 0;

}
