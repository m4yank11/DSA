//
//  main.c
//  polynomial_multiplication
//
//  Created by Mayank Raj Gupta on 11/08/23.
//

#include <stdio.h>
#include <stdlib.h>

typedef struct node{
    int coeff;
    int exp;
    struct node* next;
}Node;

void insertTerm(Node** poly, int coeff, int exp) {
    // Create a new node to represent the new term
    Node* newTerm = (Node*)malloc(sizeof(Node));
    newTerm->coeff = coeff;
    newTerm->exp = exp;
    newTerm->next = NULL;

    // Check if the polynomial is empty
    if (*poly == NULL) {
        // If the polynomial is empty, make the new term the first term in the polynomial
        *poly = newTerm;
    } else {
        // If the polynomial is not empty, find the last term in the polynomial
        Node* temp = *poly;
        while (temp->next != NULL) {
            temp = temp->next;
        }
        // Append the new term to the end of the polynomial
        temp->next = newTerm;
    }
}

Node* multiplyPolynomials(Node* poly1, Node* poly2) {
    // Initialize the result polynomial as empty
    Node* result = NULL;
    if (poly1 == NULL || poly2 == NULL) {
        return result;
    }

    Node* head1 = poly1;
    while (head1 != NULL) {
        Node* head2 = poly2;
        while (head2 != NULL) {
            int coeff = head1->coeff * head2->coeff;
            int exp = head1->exp + head2->exp;
            insertTerm(&result, coeff, exp);
            head2 = head2->next;
        }
        head1 = head1->next;
    }

    return result;
}

/*Node* reduction(Node* result){
    while(result->exp!=0){
        int a=result->coeff;
    }
    
    return result;
}*/

void printPolynomial(Node* head) {
    // Initialize a flag to keep track of the first term
    int firstTerm = 1;
    while (head != NULL) {
        if (head->coeff != 0) {
            // Print a plus sign if it's not the first term and the coefficient is positive
            if (!firstTerm && head->coeff > 0) {
                printf(" + ");
            }
            // If the exponent of the term is 0, print only the coefficient
            if (head->exp == 0) {
                printf("%d", head->coeff);
            }
            else {
                // Print coefficient and exponent if exponent is non-zero
                printf("%dx^%d", head->coeff, head->exp);
            }
            // Mark that the first term has been printed
            firstTerm = 0;
        }
        // Move to the next term in the linked list
        head = head->next;
    }
    // Print a newline after printing the polynomial
    printf("\n");
}

int main(void){
    Node* Poly1=NULL;
    Node* Poly2=NULL;
    
    int degree1, degree2;
    
    printf("Enter the degree of the first polynomial: ");
    scanf("%d",&degree1);
    
    for(int i=degree1;i>=0;i--){
        int coeff,exp;
        printf("Enter the coefficient: ");
        scanf("%d",&coeff);
        printf("Enter the exponent: ");
        scanf("%d",&exp);
        
        insertTerm(&Poly1, coeff, exp);
    }
    
    printf("Enter the degree of the second polynomial: ");
    scanf("%d",&degree2);
    
    for(int i=degree2;i>=0;i--){
        int coeff,exp;
        printf("Enter the coefficient: ");
        scanf("%d",&coeff);
        printf("Enter the exponent: ");
        scanf("%d",&exp);
        
        insertTerm(&Poly2, coeff, exp);
    }
    
    Node* Result= multiplyPolynomials(Poly1, Poly2);
    printPolynomial(Result);
    
    return 0;
}
