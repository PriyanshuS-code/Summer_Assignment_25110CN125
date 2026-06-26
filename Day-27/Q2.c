//WAP to create employee management system
#include<stdio.h>
#include<string.h>
#define MAX_EMP 100

struct Employee
{
    int empId;
    char empName[50];
    char department[30];
    float salary;
};

struct Employee emp[MAX_EMP];
int count = 0;

void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d",&emp[count].empId);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]",emp[count].empName);

    printf("Enter Department: ");
    scanf(" %[^\n]",emp[count].department);

    printf("Enter Salary: ");
    scanf("%f",&emp[count].salary);

    count++;
    printf("\nEmployee added successfully.\n");
}

void displayEmployees()
{
    int i;
    if(count == 0)
    {
        printf("\nNo employee records found.\n");
        return;
    }
    printf("\n----- Employee Records -----\n");
    for(i = 0; i < count; i++)
    {
        printf("\nEmployee ID : %d", emp[i].empId);
        printf("\nName        : %s", emp[i].empName);
        printf("\nDepartment  : %s", emp[i].department);
        printf("\nSalary      : %.2f\n", emp[i].salary);
    }
}
void searchEmployee()
{
    int id,i,found = 0;
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);
    for(i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            printf("\nEmployee Found");
            printf("\nID         : %d", emp[i].empId);
            printf("\nName       : %s", emp[i].empName);
            printf("\nDepartment : %s", emp[i].department);
            printf("\nSalary     : %.2f\n", emp[i].salary);
            found = 1;
            break;
        }
    }
    if(!found)
        printf("\nEmployee not found.\n");
}

void updateEmployee()
{
    int id,i;
    printf("\nEnter Employee ID to Update: ");
    scanf("%d",&id);
    for(i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            printf("Enter New Name: ");
            scanf(" %[^\n]",emp[i].empName);

            printf("Enter New Department: ");
            scanf(" %[^\n]",emp[i].department);

            printf("Enter New Salary: ");
            scanf("%f",&emp[i].salary);

            printf("\nEmployee record updated successfully.\n");
            return;
        }
    }
    printf("\nEmployee not found.\n");
}

void deleteEmployee()
{
    int id,i,j;
    printf("\nEnter Employee ID to Delete: ");
    scanf("%d",&id);
    for(i = 0; i < count; i++)
    {
        if(emp[i].empId == id)
        {
            for(j = i; j < count - 1; j++)
            {
                emp[j] = emp[j + 1];
            }
            count--;
            printf("\nEmployee record deleted successfully.\n");
            return;
        }
    }
    printf("\nEmployee not found.\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n\n====== Employee Management System ======");
        printf("\n1. Add Employee");
        printf("\n2. Display Employees");
        printf("\n3. Search Employee");
        printf("\n4. Update Employee");
        printf("\n5. Delete Employee");
        printf("\n6. Exit");

        printf("\n\nEnter your choice: ");
        scanf("%d", &choice);
        switch(choice)
        {
            case 1:
                addEmployee();
                break;

            case 2:
                displayEmployees();
                break;

            case 3:
                searchEmployee();
                break;

            case 4:
                updateEmployee();
                break;

            case 5:
                deleteEmployee();
                break;

            case 6:
                printf("\nThank you for using the system.\n");
                break;

            default:
                printf("\nInvalid choice! Please try again.\n");
        }

    }
    while(choice != 6);
    
    return 0;
}