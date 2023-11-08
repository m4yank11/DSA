//
//  main.c
//  maximum element in a ll
//
//  Created by Mayank Raj Gupta on 20/05/23.
//


#include <stdio.h>
#include <stdlib.h>
#include <limits.h>
typedef struct node{
    int data;
    struct node* next;
}node;

node* first=NULL;

void create(int A[],int n){
    node* t,*last;
    first=(node*)malloc(sizeof(node));
    first->data=A[0];
    first->next=NULL;
    last=first;
    
    for(int i=1;i<n;i++){
        t=(node*)malloc(sizeof(node));
        t->data=A[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
    
}

int max(node* p){
    int m=INT_MIN;
    int smax=INT_MIN;
    while(p){
        if(p->data>m){
            smax=m;
            m=p->data;
        }
        p=p->next;
    }
    return m;
}
void insert(int pos,int value){
    node* t,*p,* newnode=NULL;
    if(pos==0){
        t=newnode;
        t->data=value;
        t->next=first;
        first=t;
    }
    else if(pos>0){
        p=first;
        for(int i=0;i<pos-1 && p->data<value;i++){
            p=p->next;
        }
        if(p!=NULL){
            t=newnode;
            t->data=value;
            t->next=p->next;
            p->next=t;
        }
    }
}

void display(node* p){
    while(p){
        printf("%d ",p->data);
        p=p->next;
    }
}
int main(void){
    int A[]={3,5,7,10,12};
    create(A,5);
    printf("The maximum value is %d.\n",max(first));
    insert(3,9);
    display(first);
}
