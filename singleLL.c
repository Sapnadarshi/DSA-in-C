#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*next;
};

void traversal(struct node*ptr){
	while(ptr!=NULL){
		printf("%d\t",ptr->data);
		ptr=ptr->next;
	}
}

struct node* insert(struct node* head, int data, int index) {
    struct node* n = (struct node*)malloc(sizeof(struct node));
    n->data = data;
    struct node* p = head;
    if (index == 0) { 
        n->next = head;
        head = n;
    } else {
        int i = 0;
        while (i != index - 1) {
            p = p->next;
            i++;
        }
        n->next = p->next;
        p->next = n;
    }
    
    return head; 
}

int main(){
	struct node*head;
	struct node*first;
	struct node*second;
	struct node*third;
	struct node*fourth;
	
	head = (struct node*)malloc(sizeof(struct node));
	first = (struct node*)malloc(sizeof(struct node));
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
	fourth->next=NULL;
	
	head=insert(head,10,0);
	head=insert(head,100,3);
	
	traversal(head);
	
}
