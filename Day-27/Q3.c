//WAP to Create salary management system.
#include<stdio.h>
#define MAX 100
struct Salary
{
    int empId;
    char empName[50];
    float basicSalary;
    float hra;
    float da;
    float deduction;
    float netSalary;
};

struct Salary emp[MAX];
int total = 0;
void addRecord()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[total].empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[total].empName);

    printf("Enter Basic Salary: ");
    scanf("%f", &emp[total].basicSalary);

    printf("Enter HRA: ");
    scanf("%f", &emp[total].hra);

    printf("Enter DA: ");
    scanf("%f", &emp[total].da);

    printf("Enter Deduction: ");
    scanf("%f", &emp[total].deduction);

    emp[total].netSalary = emp[total].basicSalary + emp[total].hra + emp[total].da - emp[total].deduction;
    total++;
    printf("\nSalary record added successfully.\n");
}

void displayRecords()
{
    int i;
    if(total == 0)
    {
        printf("\nNo records available.\n");
        return;
    }
    printf("\n===== Salary Records =====\n");
    for(i = 0; i < total; i++)
    {
        printf("\nEmployee ID   : %d", emp[i].empId);
        printf("\nEmployee Name : %s", emp[i].empName);
        printf("\nBasic Salary  : %.2f", emp[i].basicSalary);
        printf("\nHRA           : %.2f", emp[i].hra);
        printf("\nDA            : %.2f", emp[i].da);
        printf("\nDeduction     : %.2f", emp[i].deduction);
        printf("\nNet Salary    : %.2f\n", emp[i].netSalary);
    }
}

void searchRecord()
{
    int id,i,found = 0;
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);
    for(i = 0; i < total; i++)
    {
        if(emp[i].empId == id)
        {
            printf("\nRecord Found");
            printf("\nEmployee Name : %s", emp[i].empName);
            printf("\nNet Salary    : %.2f\n", emp[i].netSalary);
            found = 1;
            break;
        }
    }
    if(!found)
    {
        printf("\nEmployee record not found.\n");
    }
}

int main()
{
    int choice;
    do
    {
        printf("\n\n===== Salary Management System =====");
        printf("\n1. Add Salary Record");
        printf("\n2. Display All Records");
        printf("\n3. Search Employee Salary");
        printf("\n4. Exit");

        printf("\nEnter Your Choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addRecord();
                break;

            case 2:
                displayRecords();
                break;

            case 3:
                searchRecord();
                break;

            case 4:
                printf("\nExiting Program...\n");
                break;

            default:
                printf("\nInvalid Choice!\n");
        }
    } while(choice != 4);
    return 0;
}