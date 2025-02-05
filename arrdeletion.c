#include<stdio.h>
int i;
int j=0;

int main(){
  int arr[6],i,j,value;
  for(i=0;i<6;i++){
    scanf("%d",&arr[i]);
}
  printf("Enter position  for deletion: ");
  scanf("%d",&value);
  delete(arr,value);
  for(i=0;i<4;i++){

  printf("%d",arr[i]);
}
return 0;
}
int delete(int*arr,int value){

  for(i=0;i<6;i++){
    if(arr[i]!=value){
    	arr[j]=arr[i];
    	j++;
	}
}
return j;
}
