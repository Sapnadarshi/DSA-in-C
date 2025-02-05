#include<stdio.h>
#include<stdlib.h>

struct Node{
	int data;
	struct Node * next;
};

struct node* top = NULL;

void linklist(struct Node *ptr){
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
			ptr=ptr->next;
	}
}

int isEmpty(struct Node*top){
	if(top==NULL){
		printf("Underflow\n");
		return 1;
	}
	else{
		return 0;
	}
}

int isFull(struct Node*top){
	struct Node*n=(struct Node*)malloc(sizeof(struct Node));
	if(n==NULL){
		return 1;
	}
	else{
		return 0;
	}
}

struct Node *push(struct Node*top,int x){
	if(isFull(top)){
		printf("stack overflow\n");
	}
	else{
	struct Node *n=(struct Node*)malloc(sizeof(struct Node));
	n->next=top;
	n->data=x;
	top=n;
	return top;
	}
}
struct Node *pop(struct Node**bottom){
	if(isEmpty(*bottom)){
		printf("Stack Underflowed\n");
	}
	else{
	struct Node*n=*bottom;
	(*bottom)=(*bottom)->next;
	int x=n->data;
	free(n);
	return x;
	}
}
int main()
{
		top=push(top,10);
		top=push(top,20);
		linklist(top);
		int element=pop(top);
		linlklist(top);
		return 0;
}



