#include <stdio.h>

void main() {
    int n;
    char id[20], name[50];
    float gpa;
    printf("-------------------------------\n");
    printf("     Program Study Result\n");
    printf("-------------------------------\n");
    printf("Enter number of students: ");
    scanf("%d", &n);

    for (int i = 0; i < n; i++) {
        printf("\n-------------------------------\n");
        printf("Student No.%d\n", i + 1);

        printf("Enter student ID: ");
        scanf("%s", id);

        printf("Enter student name: ");
        scanf(" %s]", name);

        printf("Enter GPA: ");
        scanf("%f", &gpa);

        if (gpa < 2.00)
            printf("Result: NOT PASS\n");
        else
            printf("Result: PASS\n");

        printf("-------------------------------\n");
    }

}
