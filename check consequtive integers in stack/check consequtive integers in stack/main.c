//
//  main.c
//  check consequtive integers in stack
//
//  Created by Mayank Raj Gupta on 02/05/23.
//

#include <stdio.h>
#include <stdlib.h>

int check_consecutive_pairs(int stack[], int n) {
    if (n % 2 == 1) {
        n--;  // ignore the top element if the stack has an odd number of elements
    }
    
    while (n > 0) {
        int num2 = stack[--n];
        int num1 = stack[--n];
        if (abs(num1 - num2) != 1) {
            return 0;  // not consecutive
        }
    }
    
    return 1;  // consecutive
}

int main(void) {
    int stack[] = {4, 5, -2, -3, 11, 10, 5, 6, 20};
    int n = sizeof(stack) / sizeof(stack[0]);
    if (check_consecutive_pairs(stack, n)) {
        printf("Consecutive pairs\n");
    }
    
    else printf("Not consecutive pairs\n");
    return 0;
}
