#include <stdio.h>

#define MAX_SIZE 100

int queue[MAX_SIZE];
int front = -1;
int rear = -1;
int i;

void enqueue(int item){
	if(rear==MAX_SIZE-1){
		printf("Queue Is full\n");
		return;
	}
	if(front==-1){
		front=0;
	}
	rear++;
	queue[rear]=item;
	printf("%d Enqueued Successfully\n",item);
	
}

void dequeue(){
	if(front==-1 || front>rear){
		printf("Queue is empty\n");
		return;
	}
	int item=queue[front];
	front++;
	printf("%d Dequeued Successfully\n",item);
}

void display(){
	if (front == -1 || front > rear) {
        printf("Queue is empty.\n");
        return;
    }
	for( i=front;i<=rear;i++){
		printf("%d\n",queue[i]);
	}
	printf("\n");
}


int main() {
    enqueue(20);
    enqueue(30);
    enqueue(10);
    display();
    dequeue();
    display();
    enqueue(40);
    display();
    return 0;
}
