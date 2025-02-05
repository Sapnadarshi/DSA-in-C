#include<stdio.h>

int fact(int n){
	if(n==0)
		return 1;
	else
		return n*fact(n-1);
}
int main(){
	int n;
	printf("enter the value of n: ");
	scanf("%d",&n);
	printf("factorial of n is %d", fact(n));
	return 0;

}
