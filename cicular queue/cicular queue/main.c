//
//  main.c
//  cicular queue
//
//  Created by Mayank Raj Gupta on 18/06/23.
//

#include <stdio.h>
#include <stdlib.h>
typedef struct queue{
    int size;
    int front;
    int rear;
    int* Q;
}queue;

void create(queue* q,int size){
    q->size=size;
    q->front=q->rear=0;
    q->Q=(int*)malloc(q->size*sizeof(int));
}

void enqueue(queue* q,int x){
    if((q->rear+1)%q->size==q->front)
        printf("Queue is full\n");
    else{
        q->rear=(q->rear+1)%q->size;
        q->Q[q->rear]=x;
    }
}

int dequeue(queue * q){
    int x=-1;
    if(q->rear==q->front)
        printf("Queue is empty\n");
    else{
        q->front=(q->front+1)%q->size;
        x=q->Q[q->front];
    }
    return x;
}

void display(queue q){
    int i=q.front+1;
    do{
        printf("%d ",q.Q[i]);
        i=(i+1)%q.size;
    }while(i!=(q.rear+1)%q.size);
    printf("\n");
}

int main(void){
    queue Q;
    create(&Q,7);
    enqueue(&Q, 1);
    enqueue(&Q, 3);
    enqueue(&Q, 9);
    enqueue(&Q, 12);
    enqueue(&Q, 7);
    dequeue(&Q);
    dequeue(&Q);
    enqueue(&Q, 2);
    enqueue(&Q, 15);
    enqueue(&Q, 20);
    display(Q);
    //printf("%d\n",dequeue(&Q));
}
