#include <stdio.h>
struct student
{
    char name[50];
    int roll;
    float marks;
} s[10];

int main()
{
    int i,n;

    printf("Enter information of students:\n");
    printf("Enter number of students : ");
    scanf("%d",&n);

    // storing information
    for(i=1; i<=n; i++)
    {
        s[i].roll = i;

        printf("\nFor roll number%d,\n",s[i].roll);

        printf("Enter name: ");
        scanf("%s",s[i].name);

        printf("Enter marks: ");
        scanf("%f",&s[i].marks);

        printf("\n");
    }

    printf("Displaying Information:\n\n");
    // displaying information
    for(i=1; i<=n; ++i)
    {
        printf("\nRoll number: %d\n",i);
        printf("Name: ");
        puts(s[i].name);
        printf("Marks: %.1f",s[i].marks);
        printf("\n");
    }
    return 0;
}