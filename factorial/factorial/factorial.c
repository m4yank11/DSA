//
//  main.c
//  factorial
//
//  Created by Mayank Raj Gupta on 10/12/22.
//

#include <stdio.h>
int main()
{
    int a,fact=1;
    printf("Enter the number: ");
    scanf("%d",&a);
    while (a>1 && a!=0) {
        fact=fact*a;
        a=a-1;
        
    }
    printf("The factorial of the number is :%d",fact);
}

