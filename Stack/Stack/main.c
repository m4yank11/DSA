//
//  main.c
//  Stack
//
//  Created by Mayank Raj Gupta on 04/06/23.
//

#include <stdio.h>
#include <stdlib.h>
typedef struct Stack{
    int size;
    int top;
    int* S;
} Stack;

void create(Stack* st){
    printf("Enter the size :");
    scanf("%d",&st->size);
    st->top=-1;
    st->S=(int*)malloc(st->size*sizeof(int));
}

void display(Stack st){
    //stack should be displayed from the top
    for(int i=st.top;i>=0;i--){
        printf("%d ",st.S[i]);
    }
    printf("\n");
}

void push(Stack* st, int x){
    if(st->top==st->size-1)
        printf("Stack overflow ");
    else{
        st->top++;
        st->S[st->top]=x;
    }
}

int pop(Stack* st){
    int x=-1;
    if(st->top==-1){
        printf("Stack underflow ");
    }
    else{
        x=st->S[st->top];
        st->top--;
    }
    return x;
}

int peek(Stack st,int pos){
    int x=-1;
    if(st.top-pos+1<0)
        printf("Invalid position \n");
    else{
        x=st.S[st.top-pos+1];
    }
    return x;
}

int isEmpty(Stack st){
    if(st.top==-1)
        return 1;
    else
        return 0;
}

int isFull(Stack st){
    if(st.top==st.size-1)
        return 1;
    else
        return 0;
}

int StackTop(Stack st){
    int x=-1;
    if(st.top==-1)
        printf("Stack empty\n ");
    else
        printf("%d\n",st.S[st.top]);
    return x;
}

int main(void){
    Stack st;
    create(&st);
    push(&st, 10);
    push(&st, 20);
    push(&st, 30);
    push(&st, 40);
    push(&st, 50);
    printf("\n");
    printf("Popped value: %d\n", pop(&st));
    display(st);
    isEmpty(st);
    isFull(st);
    StackTop(st);
}
