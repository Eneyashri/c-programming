#include <stdio.h>

// Define structure
struct student
{
    int roll;
    char name[50];
    int marks;
};

int main()
{
    struct student s;

    // Input
    scanf("%d %s %d", &s.roll, s.name, &s.marks);

    // Output
    printf("Roll: %d\n", s.roll);
    printf("Name: %s\n", s.name);
    printf("Marks: %d\n", s.marks);

    if (s.marks >= 40)
        printf("Result: Pass");
    else
        printf("Result: Fail");

    return 0;
}