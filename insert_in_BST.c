#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*left;
	struct node*right;
};

struct node*createNode(int data){
	struct node*n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;	
}

struct node*insert(struct node*root,int key){
	struct node*prev=NULL;
	while(root!=NULL){
		prev=root;
		if(key==root->data){
			printf("Can't insert, duplicate Element");
			return;
		}
		else if(key<root->data){
			root=root->left;
		}
		else{
			root=root->right;
		}
	}
	struct node*new=createNode(key);
		if(key<prev->data){
			prev->left=new;
		}
		else{
			prev->right=new;
		}
	
}

int main(){
	
	struct node *p = createNode(6);
    struct node *p1 = createNode(4);
    struct node *p2 = createNode(7);
    struct node *p3 = createNode(2);
    struct node *p4 = createNode(5);
	
	p->left = p1;
    p->right = p2;
    p1->left = p3;
    p1->right = p4;

	insert(p,1);
	printf("%d", p->left->left->left->data);
	return 0;
}
