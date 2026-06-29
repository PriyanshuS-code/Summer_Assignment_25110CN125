//WAP to create student record system using array and string
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
#include<ctype.h>

#define MAX_STUDENTS 100
#define NAME_LEN 50
#define COURSE_LEN 30
// Structure to store student details
typedef struct
{
    int rollNo;
    char name[NAME_LEN];
    char course[COURSE_LEN];
    float marks;
} Student;

Student students[MAX_STUDENTS];
int studentCount = 0;

// Function to trim newline from fgets input
void trimNewline(char *str)
{
    size_t len = strlen(str);
    if (len > 0 && str[len - 1] == '\n')
    {
        str[len - 1] = '\0';
    }
}
// Function to add a student
void addStudent()
{
    if (studentCount >= MAX_STUDENTS)
    {
        printf("Error: Maximum student limit reached.\n");
        return;
    }
    Student s;
    printf("Enter Roll Number: ");
    if (scanf("%d", &s.rollNo) != 1)
    {
        printf("Invalid input. Roll number must be an integer.\n");
        while (getchar() != '\n');
        return;
    }
    while (getchar() != '\n');
    printf("Enter Name: ");
    fgets(s.name, NAME_LEN, stdin);
    trimNewline(s.name);
    printf("Enter Course: ");
    fgets(s.course, COURSE_LEN, stdin);
    trimNewline(s.course);
    printf("Enter Marks: ");
    if (scanf("%f", &s.marks) != 1)
    {
        printf("Invalid input. Marks must be a number.\n");
        while (getchar() != '\n');
        return;
    }

    students[studentCount++] = s;
    printf("Student added successfully!\n");
}

// Function to display all students
void displayStudents()
{
    if (studentCount == 0)
    {
        printf("No student records found.\n");
        return;
    }
    printf("\n%-10s %-20s %-15s %-10s\n", "Roll No", "Name", "Course", "Marks");
    printf("-------------------------------------------------------------\n");
    for (int i = 0; i < studentCount; i++)
    {
        printf("%-10d %-20s %-15s %-10.2f\n",
               students[i].rollNo,
               students[i].name,
               students[i].course,
               students[i].marks);
    }
}
// Function to search student by roll number
void searchStudent()
{
    int roll;
    printf("Enter Roll Number to search: ");
    if (scanf("%d", &roll) != 1)
    {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }

    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].rollNo == roll)
        {
            printf("Record Found:\n");
            printf("Roll No: %d\nName: %s\nCourse: %s\nMarks: %.2f\n",
                   students[i].rollNo,
                   students[i].name,
                   students[i].course,
                   students[i].marks);
            return;
        }
    }
    printf("Student with Roll No %d not found.\n", roll);
}
// Function to delete student by roll number
void deleteStudent()
{
    int roll;
    printf("Enter Roll Number to delete: ");
    if (scanf("%d", &roll) != 1)
    {
        printf("Invalid input.\n");
        while (getchar() != '\n');
        return;
    }
    for (int i = 0; i < studentCount; i++)
    {
        if (students[i].rollNo == roll)
        {
            for (int j = i; j < studentCount - 1; j++)
            {
                students[j] = students[j + 1];
            }
            studentCount--;
            printf("Student deleted successfully.\n");
            return;
        }
    }
    printf("Student with Roll No %d not found.\n", roll);
}
// Main menu
int main()
{
    int choice;
    while (1)
    {
        printf("\n===== Student Record Management System =====\n");
        printf("1. Add Student\n");
        printf("2. Display All Students\n");
        printf("3. Search Student by Roll No\n");
        printf("4. Delete Student by Roll No\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");

        if (scanf("%d", &choice) != 1)
        {
            printf("Invalid choice. Please enter a number.\n");
            while (getchar() != '\n');
            continue;
        }
        while (getchar() != '\n'); // clear buffer

        switch (choice)
        {
            case 1: addStudent(); break;
            case 2: displayStudents(); break;
            case 3: searchStudent(); break;
            case 4: deleteStudent(); break;
            case 5: printf("Exiting program...\n"); exit(0);
            default: printf("Invalid choice. Try again.\n");
        }
    }
    return 0;
}
