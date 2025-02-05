#include<stdio.h>
#include<stdlib.h>
 
typedef struct node{
  int data;
  struct node *next;
}node;
 
node *head = NULL;
 
 
node *create_node(int value){
  node *new_node = (node *)malloc(sizeof(node));
  new_node->data = value;
  new_node->next = NULL;
  return new_node;
}
 
void push(int value, int position){
	int i;
  node *new_node = create_node(value);
 
  if(position == 1){
    new_node->next = head;
    head = new_node;
    return;
  }
 
  node *prev_node = head;
  for(i = 1; i < position - 1; i++){
    if(prev_node == NULL){
      printf("Invalid position\n");
      return;
    }
    prev_node = prev_node->next;
  }
 
  new_node->next = prev_node->next;
  prev_node->next = new_node;
}
 
void show(){
  node *temp = head;
  while(temp != NULL){
    printf("%d\t ", temp->data);
    temp = temp->next;
  }
  printf("NULL\n");
}
 
int main(){
  int value, position;
  printf("Enter the value and position to insert: ");
  scanf("%d %d", &value, &position);
  push(value, position);
  printf("The linked list is: ");
  show();
  main();
  return 0;
}
