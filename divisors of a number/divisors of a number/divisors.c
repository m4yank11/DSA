//
//  main.c
//  divisors of a number
//
//  Created by Mayank Raj Gupta on 02/12/22.
//

#include <stdio.h>
int main()
{
    printf("Enter the number\n");
    int n;
    scanf("%d",&n);
    for (int i=1;i<=n;i++)
        if(n % i ==0)
            printf("The divisors are:%d\n",i);
    
}

