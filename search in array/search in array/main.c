//
//  main.c
//  search in array
//
//  Created by Mayank Raj Gupta on 17/03/23.
//

#include <stdio.h>
int main(void) {
    int P[4];
    int count=0;
    for(int i=0;i<4;i++){
        scanf("%d",&P[i]);
        
    }
    for(int j=0;j<4;j++){
        if(P[j]>=10)
        count+=1;
    }
    printf("%d\n",count);
    return 0;
}

