//
//  main.c
//  markslessthan35
//
//  Created by Mayank Raj Gupta on 05/02/23.
//

#include <stdio.h>
int main(){
    int marks[10];
    for(int i=0;i<10;i++){
        printf("Enter the marks of student %d: ",i+1);
        scanf("%d",&marks[i]);
    }
    for(int j=0;j<10;j++){
        if(marks[j]<35)
            printf("%d\n",j+1);
    }
}
