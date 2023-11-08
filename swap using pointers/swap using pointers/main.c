//
//  main.c
//  swap using pointers
//
//  Created by Mayank Raj Gupta on 03/03/23.
//

#include <stdio.h>
void swap(int* x, int* y){
    int temp= *x;
    *x=*y;
    *y = temp;
    return;
}
int main(){
    int a=2, b=9;
    swap(&a,&b);
    printf("a = %d\n",a);
    printf("b = %d\n",b);
    
    return 0;
}
