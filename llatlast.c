#include<stdio.h>
#include<stdlib.h>

struct Node{
	
	int data;
	struct Node*ptr;
};

void linklist(struct Node *next){
	
	while(next!=NULL){
		
		printf("%d\n",next->data);
		next = next->ptr;
	}

}



struct Node*insertatend(struct Node*head,int data){
	struct Node *insert=(struct Node*)malloc(sizeof(struct Node));
	insert->data=data;
	struct Node*p=head;
	while(p->ptr!=NULL){
		p=p->ptr;
	}
		p->ptr=insert;
		insert->ptr=NULL;
		return head;
}

int main()
	{
	
	struct Node*head;
	struct Node*first;
	struct Node*second;
	struct Node*third;
	struct Node*fourth;
	
	head = (struct Node*)malloc(sizeof(struct Node));
	first = (struct Node*)malloc(sizeof(struct Node));
	second = (struct Node*)malloc(sizeof(struct Node));
	third = (struct Node*)malloc(sizeof(struct Node));
	fourth = (struct Node*)malloc(sizeof(struct Node));
	
	head->data=10;
	head ->ptr=second;
	
	second->data=20;
	second->ptr=third;
	
	third->data=20;
	third->ptr=fourth;
	
	fourth->data=40;
	fourth->ptr=NULL;
	
	head=insertatend(head,15);
	linklist(head);
	
	
	return 0;
	
}

//linklist(head);

