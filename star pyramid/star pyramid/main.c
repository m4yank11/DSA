//  Using mathematical logic
//  main.c
//  star pyramid
//
//  Created by Mayank Raj Gupta on 05/02/23.
//

#include <stdio.h>
int main(){
    int n;
    printf("Enter the number of rows: ");
    scanf("%d",&n);
    int nsp=n-1;  //for spaces
    int nst=1;    //for no of stars
    for(int i=1;i<=n;i++){
        for(int k=1;k<=nsp;k++){
            printf(" ");
        }
        nsp--;
        for(int j=1;j<=nst;j++){
            printf("*");
        }
        nst=nst+2;
        printf("\n");
    }
    
}
