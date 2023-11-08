//
//  main.c
//  prime number
//
//  Created by Mayank Raj Gupta on 08/12/22.
//

#include <stdio.h>

int main() {
    int n;
    printf("Enter a number: ");
    scanf("%d", &n);

    if (n <= 1) {
        printf("The number is not prime.\n");
        return 0;
    }

    for (int i = 2; i < n; i++) {
        if (n % i == 0) {
            printf("The number is not prime.\n");
            return 0;
        }
    }

    printf("The number is prime.\n");
    return 0;
}

