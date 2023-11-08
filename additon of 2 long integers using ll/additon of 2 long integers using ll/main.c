//
//  main.c
//  additon of 2 long integers using ll
//
//  Created by Mayank Raj Gupta on 04/09/23.
//



#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
};

// Function to reverse the number
long reverse(long num) {
    long reverseno = 0;
    while (num != 0) {
        reverseno = reverseno * 10 + num % 10;
        num = num / 10;
    }
    return reverseno;
}

// Function to create a node
struct Node* newNode(int num) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = num;
    temp->next = NULL;
    return temp;
}

// Function to insert in a linked list
void insert(struct Node** head, int data) {
    struct Node* temp = newNode(data);
    temp->next = *head;
    *head = temp;
}

// Function for creating the linked list
struct Node* create(long num) {
    struct Node* head = NULL;
    long number = reverse(num);
    while (number != 0) {
        insert(&head, number % 10000);
        number = number / 10000;
    }
    return head;
}

//Function to add two numbers
struct Node* Add(struct Node* head1, struct Node* head2){
    struct Node* ptr1=head1;
    struct Node* ptr2=head2;
    struct Node* head3=NULL;
    int sum=0,carry=0;
    
    while(ptr1||ptr2){
        sum=0;
        if(ptr1){
            sum+= ptr1->data;
        }
        if(ptr2){
            sum+= ptr2->data;
        }
        sum += carry;
        carry = sum/10000;
        sum = sum%10000;
        insert(&head3, sum);
        if(ptr1){
            ptr1= ptr1->next;
        }
        if(ptr2){
            ptr2= ptr2->next;
        }
        
    }
    if(carry){
        insert(&head3,carry);
    }
    return head3;
}

// Function to print the linked list
void display(struct Node* head) {
    struct Node* p = head;
    while (p) {
        printf("%d ", p->data);
        p = p->next;
    }
    printf("\n");
}


// Function to print the result as a long integer
void displayAsLongInt(struct Node* head) {
    struct Node* p = head;
    while (p) {
        // Extract and print digits within each node in reverse order
        int data = p->data;
        for (int i = 0; i < 4; i++) {
            int digit = data % 10;
            printf("%d", digit);
            data /= 10;
        }
        p = p->next;
    }
    printf("\n");
}


int main(void) {
    long x1 = 68132345;
    struct Node* head1 = create(x1);
    long x2 = 12440071;
    struct Node* head2 = create(x2);
    struct Node* head3 = NULL;
    head3= Add(head1, head2);
    displayAsLongInt(head3);
    
    
    
    return 0;
}
