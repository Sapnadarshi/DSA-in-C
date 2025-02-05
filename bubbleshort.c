#include<stdio.h>
main()
{
	//bubble sort
	int arr[5]={5,4,3,2,1};
	int i,j,temp;
	int n=5;
	for(i=0;i<n-1;i++){
		for(j=i+1;j<n-1-i;j++){
			if(arr[i]>arr[j])
			{
				temp=arr[j];
				arr[j]=arr[j+1];
				arr[j+1]=temp;
			}
		}
	}
	printf("\n");
	for(i=0;i<n;i++){
		printf("%d ",arr[i]);
	}
	return 0;
}
