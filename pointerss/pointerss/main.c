//
//  main.c
//  pointerss
//
//  Created by Mayank Raj Gupta on 03/03/23.
//

#include <stdio.h>
int main(){
    int a=5;
    int* x=&a;
    printf("%p\n",a);
    printf("%p\n",&x);
    printf("%d\n",*x);
    printf("%p\n",x);
}
