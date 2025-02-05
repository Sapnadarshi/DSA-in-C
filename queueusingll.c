#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};

struct node*f=NULL;
struct node*r=NULL;

void linklist(struct node*ptr){
	printf("LinkList is\n");
	while(ptr!=NULL){
		printf("%d\n",ptr->data);
		ptr=ptr->next;
	}
}

void Enqueue(int Value){
	struct node*n=(struct node*)malloc(sizeof(struct node*));
	if(n==NULL){
		printf("Queue is Full\n");
	}
	else{
		n->next=NULL;
		n->data=Value;
		if(f==NULL){
			f=r=n;
		}
		else{
			r->next=n;
			r=n;
		}
	}
}

int Dqueue(){
	struct node*n=f;
	int Value=-1;
	if(f==NULL){
		printf("Queue is Empty\n");
	}
	else{
		f=f->next;
		Value=n->data;
		free(n);
		return Value;
	}
}

int main(){
	Enqueue(10);
	Enqueue(20);
	Enqueue(30);
	Enqueue(40);
	Enqueue(50);
	Enqueue(60);
	
	linklist(f);
	
	printf("Dqueued Element is %d\n", Dqueue());
	printf("Dqueued Element is %d\n", Dqueue());
	printf("Dqueued Element is %d\n", Dqueue());
	printf("Dqueued Element is %d\n", Dqueue());
	printf("Dqueued Element is %d\n", Dqueue());
	
	linklist(f);
	
	return 0;
}
