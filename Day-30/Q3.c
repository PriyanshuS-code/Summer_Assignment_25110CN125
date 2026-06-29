//WAP to create mini employee management system.
#include<stdio.h>
#include<string.h>

struct Employee
{
    int id;
    char name[50];
    char department[30];
    float salary;
};

struct Employee emp[100];
int count = 0;
// Add Employee
void addEmployee()
{
    printf("\nEnter Employee ID: ");
    scanf("%d", &emp[count].id);

    printf("Enter Employee Name: ");
    scanf(" %[^\n]", emp[count].name);

    printf("Enter Department: ");
    scanf(" %[^\n]", emp[count].department);

    printf("Enter Salary: ");
    scanf("%f", &emp[count].salary);

    count++;
    printf("Employee Added Successfully!\n");
}

// Display Employees
void displayEmployees()
{
    int i;
    if (count == 0)
    {
        printf("\nNo Employee Records Found.\n");
        return;
    }
    printf("\n----- Employee Details -----\n");
    printf("ID\tName\t\tDepartment\tSalary\n");

    for (i = 0; i < count; i++)
    {
        printf("%d\t%s\t\t%s\t\t%.2f\n",
               emp[i].id,
               emp[i].name,
               emp[i].department,
               emp[i].salary);
    }
}
// Search Employee
void searchEmployee()
{
    int id, i;
    printf("\nEnter Employee ID to Search: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            printf("\nEmployee Found!\n");
            printf("ID         : %d\n", emp[i].id);
            printf("Name       : %s\n", emp[i].name);
            printf("Department : %s\n", emp[i].department);
            printf("Salary     : %.2f\n", emp[i].salary);
            return;
        }
    }
    printf("Employee Not Found!\n");
}

// Update Salary
void updateSalary()
{
    int id, i;
    float salary;
    printf("\nEnter Employee ID: ");
    scanf("%d", &id);
    for (i = 0; i < count; i++)
    {
        if (emp[i].id == id)
        {
            printf("Enter New Salary: ");
            scanf("%f", &salary);

            emp[i].salary = salary;
            printf("Salary Updated Successfully!\n");
            return;
        }
    }
    printf("Employee Not Found!\n");
}

int main()
{
    int choice;
    do
    {
        printf("\n===== EMPLOYEE MANAGEMENT SYSTEM =====\n");
        printf("1. Add Employee\n");
        printf("2. Display Employees\n");
        printf("3. Search Employee\n");
        printf("4. Update Salary\n");
        printf("5. Exit\n");

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
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
                updateSalary();
                break;
            case 5:
                printf("Thank You!\n");
                break;
            default:
                printf("Invalid Choice!\n");
        }

    } while (choice != 5);
    return 0;
}