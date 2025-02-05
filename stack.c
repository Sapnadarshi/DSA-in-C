#include <stdio.h>
#include <stdlib.h>


void push(int stack[],int *top){
if(*top==5){
printf("Overflowed\n");
}
else {
*top=*top+1;
printf("Enter value for position %d: ", *top);
scanf("%d",&stack[*top]);

}
}

void pop(int stack[], int *top){
if(*top==-1){
printf("Underflowed.\n");
}
else{
printf("\nPopped element: %d\n",stack[*top]);
*top=*top-1;

}
}
void show(int stack[], int *top){
int i;
for(i=0;i<=*top;i++){
printf("%d\n",stack[i]);
}
}

//main
void main(){
	
	int stack[5],top=-1;
	push(stack,&top);	
	push(stack,&top);
	push(stack,&top);
	push(stack,&top);
	push(stack,&top);

	pop(stack,&top);

	show(stack,&top);
}


