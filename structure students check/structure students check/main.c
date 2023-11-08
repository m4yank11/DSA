//
//  main.c
//  structure students check
//
//  Created by Mayank Raj Gupta on 10/04/23.
//

#include <stdio.h>

typedef struct student{
    int roll_no;
    char name[20];
    char dept[50];
    int year_of_joining;
}student ;

/*void check(student s1,student s2){
    if(s1.dept==s2.dept){
        return "The departments are equal\n";
        
    }
}*/

int main(void){
    student s1,s2;
    printf("Enter the roll no. of student 1:\n ");
    scanf("%d",&s1.roll_no);
    printf("Enter the name of the student 1:\n ");
    scanf("%s",&s1.name);
    printf("Enter the department of the student 1 : \n");
    scanf("%s",&s1.dept);
    
    //check(s1,s2);

}
