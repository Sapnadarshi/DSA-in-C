#include<stdio.h>

int main(){
	int arr[5];
	int i;
	int j;
	
	for(i=0;i<5;i++){
		scanf("%d", &arr[i]);
	}
	for(i=0;i<5;i++){
		printf("%d ", arr[i]);
	}
	for(i=0;i<5;i++){
		for(j=i+1;j<5;j++){
			if(arr[i]==arr[j]){
			printf("duplicate number is %d\n", arr[i]);
			printf("index of duplicate number is %d\n", i+1);
			}
		}
	}
	
	return 0;
}
