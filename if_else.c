 #include <stdio.h>
int main()
{
    int age = 19;
    printf("Enter your age :");
    scanf("%d", &age);
    if (age > 18)
    {
        printf("adult \n");
    }
    else
    {
        printf(" Not adult \n");
    }
    return 0;
} 