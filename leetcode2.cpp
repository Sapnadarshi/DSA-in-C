#include<stdio.h>

int i;
int j;

int swap(int a,int b){
	a=a+b;
	b=a-b;
	a=a-b;
}

int reverse(int arr[]){
	for(i=4;i<7;i++){
		for(j=7;j>i;j--){
			swap(arr[j],arr[i]);
		}
	}
}


int main(){
	int arr[7]={1,2,3,4,5,6,7};
	for(i=0;i<7;i++){
		printf("%d",arr[i]);
	}
	reverse(arr);
	for(i=0;i<7;i++){
		printf("%d",arr[i]);	
	}
}
