//
//  main.c
//  pascal triangle
//
//  Created by Mayank Raj Gupta on 20/01/23.
//

#include <stdio.h>
int factorial(int n){
    int fact=1;
    for(int i=2;i<=n;i++){
        fact=fact*i;
    }
    return fact;
}

int combination(int n, int r){
    int ncr=(factorial(n))/(factorial(r)*factorial(n-r));
    return ncr;
}

int main(){
    int n;
    printf("Enter the number of rows ");
    scanf("%d",&n);
    int nsp=n-1;
    for(int i=0;i<=n;i++){
        for(int k=0;k<=nsp;k++){
            printf(" ");
            
        }
        nsp=nsp-1;
        for(int j=0;j<=i;j++){
            int icj=combination(i,j);
            printf("%d ",icj);
        }
        printf("\n");
    }
}

