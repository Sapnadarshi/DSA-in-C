#include<stdio.h>
#include<stdlib.h>

struct node{
	int data;
	struct node*left;
	struct node*right; 
};

struct node*createNode(int data){
	struct node*n;
	n=(struct node*)malloc(sizeof(struct node));
	n->data=data;
	n->left=NULL;
	n->right=NULL;
	return n;
}

struct node*search(struct node*root,int key){
	if(root==NULL){
		return NULL;
	}
	if(root->data ==key){
		return root;
	}
	else if(root->data>key){
		return search(root->left,key);
	}
	else{
		return search(root->right,key);
	}
}

int main()
{
	struct node*p=createNode(60);
	struct node*p1=createNode(50);
	struct node*p2=createNode(70);
	struct node*p3=createNode(40);
	struct node*p4=createNode(55);
	struct node*p5=createNode(60);
	struct node*p6=createNode(75);
	
	p->left=p1;
	p->right=p2;
	p1->left=p3;
	p1->right=p4;
	p2->left=p5;
	p2->right=p6;
	
	struct node*n=search(p,40);
	if(n!=NULL){
		printf("Fouund %d",n->data);
	}
	else{
	printf("The Element is not present");
	}
	return 0;
}
