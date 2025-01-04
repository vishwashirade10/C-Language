
// if_else Program
#include <stdio.h>
int main()
{
    int marks;
    printf("Enter the marks :");
    scanf("%d",&marks);
   
    if (marks >= 91 && marks <= 100){
        printf("Grade A+\n");
    }

    else if (marks >= 81 && marks <= 90){
        printf("Grade B\n");
    }
    else if (marks >= 71 && marks <= 80)
    {
        printf("Grade c\n");
    }
    else if (marks >= 61 && marks <= 70)
    {
        printf("Grade d\n");
    }
    else if (marks >= 51 && marks <= 60)
    {
        printf("Grade E+\n");
    }
    else if (marks >= 41 && marks <= 50)
    {
        printf("Grade E\n");
    }
    else if (marks >= 36 && marks <= 40)
    {
        printf("Grade E\n");
    }
    else
    {
        printf("fail \n");
    }

    return 0;
}
