#include<stdio.h>
#include<stdlib.h>

struct node{
	
	int data;
	struct node*next;
};

void linklist(struct node *head){
	struct node* ptr=head;
	do{
		printf("the element is %d\n", ptr->data);
		ptr=ptr->next;
	}while(ptr!=head);
}
		
struct node*insert_at_first(struct node*head, int data){
	struct node*ptr=(struct node*)malloc(sizeof(struct node));
	ptr->data=data;
	struct node*p=head->next;
	while(p->next!=head){
		p=p->next;
	}
	p->next=ptr;
	ptr->next=head;
	head=ptr;
	return head;
	}

struct node*delete_first(struct node* head){
    struct node*ptr=head;
    while(ptr->next!= head){
        ptr=ptr->next;
    }
	struct node*p= head;
    ptr->next=head->next;
    head= head->next;
    free(p);
    return head;
      
}

//eleting the element at a given index from the linked list
struct node * delete_By_Index(struct node * head, int index){
    struct node *p = head;
    struct node *q = head->next;
    int i;
    for (i = 0; i < index-1; i++)
    {p = p->next;
    q = q->next;
    }
    p->next = q->next;
    free(q);
    return head;
}

int main()
	{
	
	struct node*head;
	struct node*first;
	struct node*second;
	struct node*third;
	struct node*fourth;
	
	head = (struct node*)malloc(sizeof(struct node));
	//first = (struct node*)malloc(sizeof(struct node));
	second = (struct node*)malloc(sizeof(struct node));
	third = (struct node*)malloc(sizeof(struct node));
	fourth = (struct node*)malloc(sizeof(struct node));
	
	head->data=10;
	head ->next=second;
	
	second->data=20;
	second->next=third;
	
	third->data=20;
	third->next=fourth;
	
	fourth->data=40;
	fourth->next=head;
	
	linklist(head);
	printf("new linklist after insertion\n");
	head=insert_at_first(head,50);
	linklist(head);
	printf("after deleting the first node\n");
	head=delete_first(head);
	linklist(head);
	printf("after deleting the node\n");
	head=delete_By_Index(head,2);
	linklist(head);
	return 0;
}
