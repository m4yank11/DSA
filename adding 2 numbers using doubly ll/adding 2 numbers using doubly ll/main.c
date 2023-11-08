//
//  main.c
//  adding 2 numbers using doubly ll
//
//  Created by Mayank Raj Gupta on 07/09/23.
//

#include <stdio.h>
#include <stdlib.h>

struct Node {
    int data;
    struct Node* next;
    struct Node* prev;
};

// Function to create a node
struct Node* newNode(int num) {
    struct Node* temp = malloc(sizeof(struct Node));
    temp->data = num;
    temp->next = NULL;
    temp->prev = NULL;
    return temp;
}

// Function to reverse a number
long reverse(long num) {
    long reversed = 0;
    while (num != 0) {
        reversed = reversed * 10 + num % 10;
        num = num / 10;
    }
    return reversed;
}

// Function to reverse an integer
int rev(int num) {
    int rev = 0;
    while (num != 0) {
        rev = rev * 10 + num % 10;
        num = num / 10;
    }
    return rev;
}


// Function to insert at the end of a doubly linked list
struct Node* insert(struct Node* head, int data) {
    struct Node* temp = newNode(data);
    if (head == NULL) {
        return temp;
    }
    else {
        temp->data = data;
        temp->next = head;
        temp->prev = NULL;
        head = temp;
        return head;
    }
}

// Function to add two numbers represented as doubly linked lists
struct Node* Add(struct Node* head1, struct Node* head2) {
    struct Node* result = NULL;
    int carry = 0;

    while (head1 != NULL || head2 != NULL || carry) {
        int sum = carry;
        if (head1 != NULL) {
            sum += head1->data;
            head1 = head1->next;
        }
        if (head2 != NULL) {
            sum += head2->data;
            head2 = head2->next;
        }

        carry = sum / 10000; // Calculate carry
        sum %= 10000;       // Store 4 digits in each node

        result = insert(result, sum);
    }

    return result;
}

// Function to print the doubly linked list
void display(struct Node* head) {
    struct Node* p = head;
    while (p != NULL) {
        printf("%04d -> ", p->data);
        p = p->next;
    }
    printf("NULL\n");
}

// Function to print the result in correct order
void print(struct Node* head){
    struct Node* p = head;
    while (p){
        int x;
        x = p->data;
        printf("%04d",rev(x));
        p=p->next;
    }
    printf("\n");
}


int main(void) {
    long x1 = 681325468132;
    long x2 = 215469824513;
    long rev_x1=reverse(x1);
    long rev_x2=reverse(x2);
    
    struct Node* head1 = NULL;
    struct Node* head2 = NULL;
    
    // Create doubly linked lists for the two reversed numbers
    while (rev_x1 > 0) {
        head1 = insert(head1, rev_x1 % 10000);
        rev_x1 /= 10000;
    }
    
    while (rev_x2 > 0) {
        head2 = insert(head2, rev_x2 % 10000);
        rev_x2 /= 10000;
    }
    
    printf("Number 1: ");
    display(head1);
    printf("Number 2: ");
    display(head2);
    
    struct Node* sum = Add(head1, head2);
    
    printf("Sum: ");
    struct Node* head3 = sum;
    print(head3);
    
    return 0;
}
