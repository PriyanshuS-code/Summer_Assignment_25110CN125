//WAP to create a student record management system
#include<stdio.h>
#include<string.h>
#define MAX 100

struct Student
{
    int rollNo;
    char name[50];
    float marks;
};
struct Student data[MAX];
int totalStudents = 0;

void addStudent()
{
    printf("\nEnter Roll Number: ");
    scanf("%d",&data[totalStudents].rollNo);

    printf("Enter Name: ");
    scanf(" %[^\n]", data[totalStudents].name);

    printf("Enter Marks: ");
    scanf("%f", &data[totalStudents].marks);

    totalStudents++;
    printf("Student record added successfully.\n");
}
void showStudents()
{
    int i;
    if (totalStudents == 0)
    {
        printf("\nNo records available.\n");
        return;
    }
    printf("\n----- Student Records -----\n");
    for (i=0;i < totalStudents;i++)
    {
        printf("\nRoll No : %d",data[i].rollNo);
        printf("\nName    : %s",data[i].name);
        printf("\nMarks   : %.2f\n",data[i].marks);
    }
}
void searchStudent()
{
    int roll, i, found = 0;
    printf("\nEnter Roll Number to Search: ");
    scanf("%d",&roll);
    for (i=0;i < totalStudents;i++)
    {
        if (data[i].rollNo == roll)
        {
            printf("\nRecord Found");
            printf("\nRoll No : %d", data[i].rollNo);
            printf("\nName    : %s", data[i].name);
            printf("\nMarks   : %.2f\n", data[i].marks);
            found = 1;
            break;
        }
    }
    if (!found)
        printf("Student not found.\n");
}

void updateStudent()
{
    int roll,i;
    printf("\nEnter Roll Number to Update: ");
    scanf("%d",&roll);
    for (i=0;i < totalStudents;i++)
    {
        if (data[i].rollNo == roll)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]", data[i].name);

            printf("Enter New Marks: ");
            scanf("%f", &data[i].marks);

            printf("Record updated successfully.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

void deleteStudent()
{
    int roll,i,j;
    printf("\nEnter Roll Number to Delete: ");
    scanf("%d",&roll);
    for (i=0;i < totalStudents;i++)
    {
        if (data[i].rollNo == roll)
        {
            for (j=i;j < totalStudents - 1;j++)
            {
                data[j] = data[j + 1];
            }
            totalStudents--;
            printf("Record deleted successfully.\n");
            return;
        }
    }
    printf("Student not found.\n");
}

int main()
{
    int choice;
    while (1)
    {
        printf("\n\n===== Student Record Management System =====");
        printf("\n1. Add Student");
        printf("\n2. Display Students");
        printf("\n3. Search Student");
        printf("\n4. Update Student");
        printf("\n5. Delete Student");
        printf("\n6. Exit");

        printf("\nEnter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
            case 1:
                addStudent();
                break;

            case 2:
                showStudents();
                break;

            case 3:
                searchStudent();
                break;

            case 4:
                updateStudent();
                break;

            case 5:
                deleteStudent();
                break;

            case 6:
                printf("Program terminated.\n");
                return 0;

            default:
                printf("Invalid choice. Try again.\n");
        }
    }

    return 0;
}