#include<stdio.h>

int main(){
	int arr[5]={1,2,3,5,4};
	int max=arr[0];
	int smax=arr[0];
	int i;
	
	for(i=0;i<5;i++){
		if(max<arr[i]){
			max=arr[i];
		}
}
for(i=0;i<5;i++){
	if(arr[i!=max&&smax<arr[i]]){
		smax=arr[i];
	}
}
printf("second largest element is %d", smax);
return 0;
}
