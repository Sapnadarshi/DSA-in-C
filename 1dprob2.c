#include<stdio.h>

int main(){
  int arr[6],i,j,pos,val;
  for(i=0;i<6;i++){
    
    scanf("%d",&arr[i]);
}
  printf("Enter position  for deletion: ");
  scanf("%d",&pos);
  for(i=pos;i<6;i++){
    arr[i]=arr[i+1];
    }
  printf("Final array: ");
  for(i=0;i<5;i++){
  
    printf("%d ", arr[i]);
    }

  
  
return 0;
}
