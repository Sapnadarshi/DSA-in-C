#include<stdio.h>

int main(){
  int arr[6],i,j,pos,val;
  for(i=0;i<6;i++){
    
    scanf("%d",&arr[i]);
}
  printf("Enter position  for insertion: ");
  scanf("%d",&pos);
  printf("Enter the value to be inserted: ");
  scanf("%d",&val);
  for(i=6;i>=pos;i--){
    arr[i]=arr[i-1];
    }
  arr[pos-1]=val;
  printf("Final array: ");
  for(i=0;i<7;i++){
  
    printf("%d ", arr[i]);
    }

  
  
return 0;
}
