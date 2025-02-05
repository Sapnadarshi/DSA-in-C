#include <stdio.h>

int binarySearch(int array[], int x, int low, int high) {		//iterative
  while (low <= high) {
    int mid = low + (high - low) / 2;

    if (array[mid] == x)
      return mid;

    if (array[mid] < x)
      low = mid + 1;

    else
      high = mid - 1;
  }

  return -1;
}

int binary_search(int arr[],int x,int low,int high){			//recursive
	
	if(low<=high){
	int mid=low+(high-low)/2;
	
		if(arr[mid]==x){
		return mid;
		}
		if(arr[mid]<x){
			binary_search(arr,x,mid+1,high);
		}
		else
		binary_search(arr,x,low,mid-1);
		}
	}


int main(void) {
  int array[] = {3, 4, 5, 6, 7, 8, 9};
  int n = sizeof(array) / sizeof(array[0]);
  int x = 8;
  //int result = binarySearch(array, x, 0, n - 1);
  int res=binary_search(array,x,0,n-1);
  if (res==-1)
    printf("Not found");
  else
    printf("Element is found at index %d",res);
  return 0;
}
