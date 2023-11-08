//
//  main.c
//  insertion in array 1
//
//  Created by Mayank Raj Gupta on 18/04/23.
//

#include <stdio.h>
int main(void){
    int arr[50],size,num,pos;
    printf("Enter the size of the array: ");
    scanf("%d",&size);
    for(int i=0;i<size;i++){
        
        scanf("%d",&arr[i]);
    }
    printf("Enter the number and position of the number u want to insert:\n");
    scanf("%d %d",&num,&pos);
    for(int i=size-1;i>=pos-1;i--){
            arr[i+1]=arr[i];
        }
        arr[pos-1]=num;
        size++;
    
    for(int i=0;i<size;i++){
        printf("%d,",arr[i]);
    }
}
