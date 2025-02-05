#include<stdio.h>

int main(){
	int arr[5]={1,2,3,5,4};
	int max=arr[0];
	int min=arr[0];
	int i;
	
	for(i=0;i<5;i++){
		if(max<arr[i]){
			max=arr[i];
		}
}
	printf("max is %d\n", max);
	
	for(i=0;i<5;i++){
		if(min>arr[i]){
			min=arr[i];
		}
}
	printf("min is %d\n", min);
return 0;
}

