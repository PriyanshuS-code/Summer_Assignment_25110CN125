//WAP to Create marksheet generation system.
#include<stdio.h>
int main()
{
    char studentName[50];
    int rollNo;
    float sub1,sub2,sub3,sub4,sub5;
    float total,percentage;
    char grade;
    printf("===== Marksheet Generation System =====\n");

    printf("Enter Student Name: ");
    scanf(" %[^\n]", studentName);

    printf("Enter Roll Number: ");
    scanf("%d", &rollNo);

    printf("Enter Marks in Subject 1: ");
    scanf("%f", &sub1);

    printf("Enter Marks in Subject 2: ");
    scanf("%f", &sub2);

    printf("Enter Marks in Subject 3: ");
    scanf("%f", &sub3);

    printf("Enter Marks in Subject 4: ");
    scanf("%f", &sub4);

    printf("Enter Marks in Subject 5: ");
    scanf("%f", &sub5);

    total = sub1 + sub2 + sub3 + sub4 + sub5;
    percentage = total / 5;

    if (percentage >= 90)
        grade = 'A';
    else if (percentage >= 80)
        grade = 'B';
    else if (percentage >= 70)
        grade = 'C';
    else if (percentage >= 60)
        grade = 'D';
    else
        grade = 'F';

    printf("\n\n========== MARKSHEET ==========\n");
    printf("Student Name : %s\n", studentName);
    printf("Roll Number  : %d\n", rollNo);

    printf("\nMarks Obtained:\n");
    printf("Subject 1 : %.2f\n", sub1);
    printf("Subject 2 : %.2f\n", sub2);
    printf("Subject 3 : %.2f\n", sub3);
    printf("Subject 4 : %.2f\n", sub4);
    printf("Subject 5 : %.2f\n", sub5);

    printf("\nTotal Marks : %.2f / 500\n", total);
    printf("Percentage  : %.2f%%\n", percentage);
    printf("Grade       : %c\n", grade);

    if (grade == 'F')
        printf("Result      : Fail\n");
    else
        printf("Result      : Pass\n");
    return 0;
}