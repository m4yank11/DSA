//
//  main.c
//  pattern delta
//
//  Created by Mayank Raj Gupta on 23/12/22.
//

#include <stdio.h>

int main(void)
{
    int i, j, rows;

    /* Input rows to print from user */
    printf("Enter number of rows : ");
    scanf("%d", &rows);

    for(i=1; i<=rows; i++)
    {
        /* Print trailing spaces */
        for(j=i; j<rows; j++)
        {
            printf(" ");
        }

        /* Print hollow pyramid */
        for(j=1; j<=(2*i-1); j++)
        {
            /*
             * Print star for last row (i==rows),
             * first column(j==1) and for
             * last column (j==(2*i-1)).
             */
            if(i==rows || j==1 || j==(2*i-1))
            {
                printf("*");
            }
            else
            {
                printf(" ");
            }
        }

        /* Move to next line */
        printf("\n");
    }

    return 0;
}
