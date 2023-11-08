//
//  main.c
//  Max and min in matrix
//
//  Created by Mayank Raj Gupta on 08/04/23.
//

#include <stdio.h>

int main(){
    int arr[10][10],r,c;
    printf("Enter the number of rows and columns: \n");
    scanf("%d %d",&r,&c);
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            scanf("%d",&arr[i][j]);
        }
    }
    int max=arr[0][0],min=arr[0][0];
    for(int i=0;i<r;i++){
        for(int j=0;j<c;j++){
            if(arr[i][j]>max)
                max=arr[i][j];
            if(arr[i][j]<min)
                min=arr[i][j];
        }
    }
    printf("the maximum element in matrix is %d\n",max);
    printf("the minimum element in matrix is %d\n",min);
    
    
}
