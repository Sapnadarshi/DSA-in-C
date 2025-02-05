#include <stdio.h>
int main()
{
	int i;
int arr[] = {6, 8, 2, 8, 6, 10, 14, 2, 14}; 
int n = sizeof(arr)/sizeof(arr[0]); 
for (i=0; i<n; i++) 
{ 
int j; 
for (j=0; j<i; j++) 
if (arr[i] == arr[j]) 
break; 
if (i == j) 
printf("%d ",arr[i]); 
}
return 0;
}
