//
//  main.c
//  LLDisplay
//
//  Created by Mayank Raj Gupta on 20/05/23.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node ;
node* first=NULL;

void create(int A[],int n){
    node* t,* last;
    first=(node*)malloc(sizeof(node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++){
        t=(node*)malloc(sizeof(node));
        t->data=A[i];
        t->next=NULL;
        last->next= t;
        last=t;
    }
}

void display(node* p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
}

void Rdisplay(node* p){
    while(p!=NULL){
        Rdisplay(p->next);
        printf("%d ",p->data);
    }
}
int main(void){
    int A[]={3,5,1,3,7,0};
    create(A,6);
    display(first);
    //Rdisplay(first);
    
}
