//
//  main.c
//  sparse matrix using linked list
//
//  Created by Mayank Raj Gupta on 27/08/23.
//

#include <stdio.h>
#include <stdlib.h>


struct node{
    int row;
    int column;
    int value;
    struct node* next;
};

struct node* creation(int r,int c,int v){
    struct node* t=(struct node*)malloc(sizeof(struct node));
    t->row=r;
    t->column=c;
    t->value=v;
    t->next=NULL;
    return t;
}


struct node* add(struct node* q,int r,int c,int v){
    if(q==NULL){
        q=creation(r, c, v);
        return q;
    }
    struct node* t=q;
    while (t->row<r && t->next!=NULL) {
        t=t->next;
    }
    while (t->column<r && t->next!=NULL) {
        t=t->next;
    }

        struct node* temp=creation(r, c, v);
    t->next=temp;
    return q;
}

void display(struct node* q){
    printf("row \t column \t value \t\n");
    while (q!=NULL) {
        printf("%d \t %d \t %d\n",q->row,q->column,q->value);
        q=q->next;
    }
}

void transpose(struct node *q){
    while(q!=NULL){
        int temp;
        temp=q->row;
        q->row=q->column;
        q->column=temp;
        q=q->next;
    }
}

int main(void) {
    int n;
    printf("Enter number of non zero elements: ");
    scanf("%d",&n);
    struct node* head=NULL;
    for (int i=0; i<n; i++) {
        int r,c,v;
        printf("Enter row no.,col no.,value: ");
        scanf("%d %d %d",&r,&c,&v);
        head=add(head, r, c, v);
    }
    display(head);
    transpose(head);
    display(head);
    return 0;
}

