#include <stdio.h>
#include <stdlib.h>

int search(int arr[],int size,int key){
	int i;
	for(i=0;i<size;i++){
		if(arr[i]==key){
			return i;
		}
	}
	return -1;
}
int main(){
	int arr[]={1,2,3,5,6,18,48};
	int size=6;
	int key=4;
	int result=search(arr,size,key);
	if(result==-1){
		printf("Value is not present");
	}
	else{
		printf("Value is present",result);
	}
	
}
