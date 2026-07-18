#include <stdio.h>
#include <string.h>

void displayMenu()
{
    printf("\n=================================\n");
    printf("      STUDENT MANAGEMENT SYSTEM\n");
    printf("=================================\n");
    printf("1. Enter Student Information\n");
    printf("2. Show Student Result\n");
    printf("3. Exit\n");
    printf("=================================\n");
}

char calculateGrade(int marks)
{
    if (marks >= 80)
        return 'A';
    else if (marks >= 70)
        return 'B';
    else if (marks >= 60)
        return 'C';
    else if (marks >= 50)
        return 'D';
    else
        return 'F';
}

int main()
{
    int choice;
    int marks = -1;
    int studentID;
    char grade;
    char name[50];

    while (1)
    {
        displayMenu();

        printf("Enter Your Choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:

            printf("\nEnter Student Name: ");
            scanf(" %[^\n]", name);

            printf("Enter Student ID: ");
            scanf("%d", &studentID);

            printf("Enter Marks (0-100): ");
            scanf("%d", &marks);

            if (marks < 0 || marks > 100)
            {
                printf("\nInvalid Marks!\n");
                marks = -1;
            }
            else
            {
                printf("\nStudent Information Saved Successfully!\n");
            }

            break;

        case 2:

            if (marks == -1)
            {
                printf("\nNo Student Information Found!\n");
            }
            else
            {
                grade = calculateGrade(marks);

                printf("\n========== RESULT ==========\n");
                printf("Student Name : %s\n", name);
                printf("Student ID   : %d\n", studentID);
                printf("Marks        : %d\n", marks);
                printf("Percentage   : %d%%\n", marks);
                printf("Grade        : %c\n", grade);

                if (marks >= 50)
                    printf("Status       : PASS\n");
                else
                    printf("Status       : FAIL\n");

                printf("============================\n");
            }

            break;

        case 3:

            printf("\nThank You for Using the System!\n");
            return 0;

        default:

            printf("\nInvalid Choice! Please Try Again.\n");
        }
    }

    return 0;
}