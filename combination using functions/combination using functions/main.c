//
//  main.c
//  combination using functions
//
//  Created by Mayank Raj Gupta on 20/01/23.
//

#include <stdio.h>
int factorial(int x){
    int fact=1;
    for(int i=2;i<=x;i++){
        fact=fact*i;
        
    }
    return fact;
}

int main(){
    int n,r;
    printf("Enter the value of n and r :");
    scanf("%d,%d",&n,&r);
    int com=(factorial(n))/(factorial(r)*factorial(n-r));
    printf("%d  ",com);
    return 0;
}
