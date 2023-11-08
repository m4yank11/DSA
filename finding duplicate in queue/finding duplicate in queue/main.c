//
//  main.c
//  finding duplicate in queue
//
//  Created by Mayank Raj Gupta on 13/06/23.
//
#include <stdio.h>
#include <stdlib.h>
typedef struct Queue{
    int size;
    int front;
    int rear;
    int *Q;
}Queue;

void create(Queue *q,int size){
    q->size=size;
    q->front=q->rear=-1;
    q->Q=(int *)malloc(q->size*sizeof(int));
}

void enqueue(Queue *q,int x)
{
    if(q->rear==q->size-1)
        printf("Queue is Full");
    else{
        q->rear++;
        q->Q[q->rear]=x;
 }
}

int dequeue(Queue *q){
    int x=-1;
    if(q->front==q->rear)
        printf("Queue is Empty\n");
    else{
        q->front++;
        x=q->Q[q->front];
    }
    return x;
}

void Display(struct Queue q){
    for(int i=q.front+1;i<=q.rear;i++)
        printf("%d ",q.Q[i]);
    printf("\n");
}


int DuplicatePairs(Queue q) {
        int count = 0;
        for (int i = q.front; i <= q.rear; i++) {
            for (int j = i + 1; j <= q.rear; j++) {
                if (q.Q[i] == q.Q[j])
                    count++;
            }
        }
        return count;
}

int findMaxDuplicates(Queue q) {
    int maxDuplicates = 0;
    int i, j;

    for (i = 0; i <= q.rear; i++) {
        int count = 1;
        for (j = i + 1; j <= q.rear; j++) {
            if (q.Q[i] == q.Q[j]) {
                count++;
            }
        }

        if (count > maxDuplicates) {
            maxDuplicates = count;
        }
    }

    return maxDuplicates;
}

int main(void){
    int size,x=-1;
    struct Queue q;
    printf("Enter the size of the queue: \n");
    scanf("%d",&size);
    create(&q,size);
    for(int i=0;i<size;i++){
        printf("Enter the element :\n");
        scanf("%d",&x);
        enqueue(&q, x);
    }
    printf("The maximum number of duplicants are: %d\n",findMaxDuplicates(q));
    printf("The number of duplicants are: %d\n",DuplicatePairs(q));

 
    return 0;
}
