//
//  main.c
//  star plus
//
//  Created by Mayank Raj Gupta on 15/01/23.
//

#include <stdio.h>
int main(void){
    int n;
    printf("enter the number of rows ");
    scanf("%d",&n);
    for(int i=1;i<=n;i++){
        for(int j=1;j<=n;j++){
            if(i==3)
                printf("* ");
            else if (j==5)
                printf("* ");
            else
                printf(" ");
            
        }
        printf("\n");
    }
}
