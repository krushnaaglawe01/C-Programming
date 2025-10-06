#include <stdio.h>
int main() 
{
    int rollno;
    char name[50];
    float sub1, sub2, sub3, total, avg;
    char grade;

    printf("Enter Roll Number: ");
    scanf("%d", &rollno);

    printf("Enter Name: ");
    scanf("%s", name);

    printf("\nEnter Marks of Subject 1: ");
    scanf("%f", &sub1);

    printf("\nEnter Marks of Subject 2: ");
    scanf("%f", &sub2);

    printf("\nEnter Marks of Subject 3: ");
    scanf("%f", &sub3);

    total = sub1 + sub2 + sub3;
    avg = total / 3;

    if (avg<=100 && avg>=90) 
        grade = 'A';
    
    else if (avg<=90 && avg>=80) 
        grade = 'B';
    
    else if (avg<=80 && avg>=70) 
        grade = 'C';
    
    else if (avg<=70 && avg>=60) 
        grade = 'D';
    
    else if (avg<=60 && avg>=50) 
        grade = 'E';
    else   
        grade = 'F';

    printf("\n--------------------------------------------\n");
    printf("                MARK LIST                  \n");
    printf("--------------------------------------------\n");
    printf("Roll No : %d\n", rollno);
    printf("Name    : %s\n", name);
    printf("--------------------------------------------\n");
    printf("Subject Marks\n");
    printf("--------------------------------------------\n");
    printf("Subject 1 %.2f\n", sub1);
    printf("Subject 2 %.2f\n", sub2);
    printf("Subject 3 %.2f\n", sub3);
    printf("--------------------------------------------\n");
    printf("Total Marks : %.2f\n", total);
    printf("Average     : %.2f\n", avg);
    printf("Grade       : %c\n", grade);
    printf("--------------------------------------------\n");

    return 0;
}
