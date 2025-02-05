#include<stdio.h>
int main()
{
	//sum of two elements
	int arr[8]={1,2,3,4,5,8,9,10};
	int i=0;
	int j=7;
	int target=8;
	while(i<j){
		if(arr[i]+arr[j]==target){
			printf("the numbers are %d %d ",arr[i],arr[j]);
			break;
			}
		else if(arr[i]+arr[j]>target)
		j--;
		else i++;
		}
	return 0;
}
