//
//  main.c
//  max in a row
//
//  Created by Mayank Raj Gupta on 08/04/23.
//

#include <stdio.h>
int main(){
    int arr[10][10],r,c;
    printf("Enter the number of rows and columns: ");
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;c++){
            scanf("%d",&arr[i][j]);
        }
    }
    for(int i=0;i<r;i++){
        //int max=0;
        for(int j=0;j<c;j++){
            //max+=arr[i][j];
            printf("%d",arr[i][j]);
        }
        printf("\n");
    }
}
