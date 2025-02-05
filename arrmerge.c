#include<stdio.h>

int main(){
  int arr[5],brr[6];
  int i,j;
  for(i=0;i<5;i++){
    scanf("%d ",&arr[i]);
}
	for(i=0;i<6;i++){
    scanf("%d ",&brr[i]);
}
	int crr[11];
	for(i=0;i<11;i++){
		crr[i]=arr[i];
	}
	 for (i=0,j=5;j<11 && i<6;i++,j++) {
        crr[j] = brr[i];
    }
    for (i=0;i<11;i++) {
        printf(" Merged array is %d ", crr[i]);
    }
    return 0;
}
