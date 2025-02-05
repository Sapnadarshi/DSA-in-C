#include<stdio.h>
#include<stdlib.h>

struct CircularQueue{
	int size;
	int f;
	int r;
	int *arr;
};

int Enqueue(struct CircularQueue*q,int value){
	if((q->r+1)%q->size==q->f){
		printf("Queue Full\n");
	}
	else{
		q->r=(q->r+1)%q->size;
		q->arr[q->r]=value;
		printf("Enqueued Element is %d\n",value);
	}
}

int Dequeue(struct CircularQueue*q){
	int value=-1;
	if(q->f==q->r){
		printf("Queue Empty\n");
	}
	else{
		q->f=(q->f+1)%q->size;
		value=q->arr[q->f];
	}
	return value;
}

int main(){
    struct CircularQueue q;
    q.size = 4;
    q.f = q.r = 0;
    q.arr = (int*) malloc(q.size*sizeof(int));

    Enqueue(&q, 1);
    Enqueue(&q, 2);
    Enqueue(&q, 3); 
    printf("Dequeuing element %d\n", Dequeue(&q));
    printf("Dequeuing element %d\n", Dequeue(&q));
    printf("Dequeuing element %d\n", Dequeue(&q)); 
    Enqueue(&q, 4);
    Enqueue(&q, 5);
    Enqueue(&q, 6);
 	printf("Dequeuing element %d\n", Dequeue(&q));
    
	return 0;
}
