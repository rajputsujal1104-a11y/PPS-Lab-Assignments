#include <stdio.h>

struct Student
{
    int roll;
    char name[50];
    int m1, m2, m3;
    int total;
    float percentage;
};

int main()
{
    struct Student s[50];
    int n, i;

    printf("Enter the number of students: ");
    scanf("%d", &n);

    for(i = 0; i < n; i++)
    {
        printf("\nEnter roll number: ");
        scanf("%d", &s[i].roll);

        printf("Enter name: ");
        scanf("%s", s[i].name);

        printf("Enter marks of 3 subjects: ");
        scanf("%d %d %d", &s[i].m1, &s[i].m2, &s[i].m3);

        s[i].total = s[i].m1 + s[i].m2 + s[i].m3;

        s[i].percentage = (s[i].total / 300.0) * 100;
    }

    printf("\nRoll No\tName\tSubject1\tSubject2\tSubject3\tTotal\tPercentage");

    for(i = 0; i < n; i++)
    {
        printf("\n%d\t%s\t%d\t\t%d\t\t%d\t\t%d\t%.2f",
        s[i].roll, s[i].name, s[i].m1, s[i].m2,
        s[i].m3, s[i].total, s[i].percentage);
    }

    return 0;
}