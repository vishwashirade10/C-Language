#include<stdio.h>
int main(){
    int marks;
    printf("Enter the marks i (0 - 100)\n");
    scanf("%d", &marks);
    if (marks >=0 && marks <=30)
    {
  printf("student fail\n");
    }
    else if(marks > 30 &&  marks<=100) 
    {
      printf("student pass\n");
    }
    else {
      printf("wrong marks\n");
    }
  return 0;  
}