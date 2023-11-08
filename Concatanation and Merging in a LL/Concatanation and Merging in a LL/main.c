//
//  main.c
//  Concatanation and Merging in a LL
//
//  Created by Mayank Raj Gupta on 23/05/23.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int data;
    struct node* next;
}node;

node* first=NULL;
node* second=NULL;
node* third=NULL;

void create1(int A[],int n){
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

void create2(int B[],int n){
    node* t,*last;
    second=(node*)malloc(sizeof(node));
    second->data=B[0];
    second->next=NULL;
    last=second;
    
    for(int i=1;i<n;i++){
        t=(node*)malloc(sizeof(node));
        t->data=B[i];
        t->next=NULL;
        last->next=t;
        last=t;
        
    }
    
}

void Concat(node*p,node*q){
    third=p;
    while(p->next!=NULL){
        p=p->next;
    }
    p->next=q;
}

/*void Merge(node*p, node*q){
    node* last;
    if(p->data < q->data){
        third=last=p;
        p=p->next;
        last->next=NULL;
    }
    else{
        third=last=q;
        q=q->next;
        last->next=NULL;
    }
    
    while(p && q){
        if(p->data < q->data){
            last->next=p;
            last=p;
            p=p->next;
            last->next=NULL;
            
        }
        if(q->data < p->data){
            last->next=q;
            last=q;
            q=q->next;
            last->next=NULL;
        }
    }
    
    if(p)
        last->next=p;
    if(q)
        last->next=q;
    
}*/
void Merge(node *p,node *q)
{
 node *last;
 if(p->data < q->data)
 {
 third=last=p;
 p=p->next;
 third->next=NULL;
 }
 else
 {
 third=last=q;
 q=q->next;
 third->next=NULL;
 }
 while(p && q)
 {
 if(p->data < q->data)
 {
 last->next=p;
 last=p;
 p=p->next;
 last->next=NULL;

 }
 else
 {
 last->next=q;
 last=q;
 q=q->next;
 last->next=NULL;

 }
 }
 if(p)last->next=p;
 if(q)last->next=q;

}
void Display(node* p){
    while(p!=NULL){
        printf("%d ",p->data);
        p=p->next;
    }
    
}
int main(void){
    int A[]={10,20,30,40,50};
    int B[]={5,15,25,35,45};
    create1(A, 5);
    create2(B, 5);
    printf("The first linked list is: ");
    Display(first);
    printf("\n");
    printf("The second linked list is: ");
    Display(second);
    printf("\n");
    Concat(first, second);
    printf("The concatanated list is: ");
    Display(third);
    printf("\n");
    
    Merge(first, second);
    printf("The merged list is:\n");
    Display(third);
    
}
