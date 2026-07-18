#include <stdio.h>

void displayMenu()
{
    printf("\n========== MENU ==========\n");
    printf("1. Enter Student Marks\n");
    printf("2. Calculate Grade\n");
    printf("3. Exit\n");
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
    int marks;
    char grade;

    while (1)
    {
        displayMenu();

        printf("\nEnter your choice: ");
        scanf("%d", &choice);

        switch (choice)
        {
        case 1:
            printf("\nEnter Student Marks (0-100): ");
            scanf("%d", &marks);

            if (marks < 0 || marks > 100)
            {
                printf("Invalid Marks!\n");
            }
            else
            {
                printf("Marks Saved Successfully!\n");
            }
            break;

        case 2:
            printf("\nEnter Marks to Calculate Grade: ");
            scanf("%d", &marks);

            if (marks < 0 || marks > 100)
            {
                printf("Invalid Marks!\n");
            }
            else
            {
                grade = calculateGrade(marks);
                printf("\nStudent Grade: %c\n", grade);
            }
            break;

        case 3:
            printf("\nThank you! Program Closed.\n");
            return 0;

        default:
            printf("\nInvalid Choice!\n");
        }
    }

    return 0;
}