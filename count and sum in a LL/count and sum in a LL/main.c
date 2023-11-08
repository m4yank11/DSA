//
//  main.c
//  count and sum in a LL
//
//  Created by Mayank Raj Gupta on 20/05/23.
//

#include <stdio.h>
#include <stdlib.h>
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

int count(node* p){
    int count=0;
    while(p!=0){
        count++;
        p=p->next;
    }
    return count;
}

int sum(node* p){
    int sum=0;
    while(p){
        sum+=p->data;
        p=p->next;
    }
    return sum;
}

//now making a recursive function for sum

int rsum(node*p){
    int sum=0;
    if(p==0)
        return 0;
    else
        return rsum(p->next)+p->data;
}

int main(void){
    int A[]={3,5,7,10,12};
    create(A,5);
    printf("The length is %d.\n",count(first));
    printf("The sum of the linked list is %d. \n",sum(first));
    printf("The sum of the linked list is %d. \n",rsum(first));
    return 0;
}
