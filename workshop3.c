#include<stdio.h>

int main()
{
    int sub1, sub2, sub3, sub4, sub5, aggregate_marks;
    float percentage_marks;
    printf("Enter the marks of sub1: ");
    printf("\nEnter the marks of sub2: ");
    printf("\nEnter the marks of sub3: ");
    printf("\nEnter the marks of sub4: ");
    printf("\nEnter the marks of sub5: ");
    scanf("%d%d%d%d%d",&sub1, &sub2, &sub3, &sub4, &sub5);
    aggregate_marks = sub1+sub2+sub3+sub4+sub5;
    printf("Aggregate marks is: %d",aggregate_marks);
    percentage_marks = (aggregate_marks/500)*100;
    printf("\nPercentage marks is: %f\n",percentage_marks);
    return 0;
}