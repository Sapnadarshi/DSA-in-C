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

void inorder(struct node*root){
	if(root!=NULL){
		inorder(root->left);
		printf("%d\t",root->data);
		inorder(root->right);
	}
}

//function to find leftmost leaf node in tree
struct node*inorderpredecessor(struct node*root){
	root=root->left;
	while(root->right!=NULL){
		root=root->right;
	}
	return root;
}

struct node*delete(struct node*root,int key){
	struct node*ipre;
	if(root==NULL){
			return NULL;
		}
		else if(root->left==NULL&&root->right==NULL){
			free(root);
			return NULL;
		}
		if(key<root->data){
			root->left=delete(root->left,key);
		}
		else if(key>root->data){
			root->right=delete(root->right,key);
		}
		else{
			ipre=inorderpredecessor(root);
			root->data=ipre->data;
			root->left=delete(root->left,ipre->data);
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
    
    inorder(p);
    printf("\n");
	delete(p,2);
	inorder(p);
	return 0;
}
