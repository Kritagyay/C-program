#include <stdio.h>

void addSub(int *a1, int *b1)
{
    int temp;
    temp = *a1;
    *a1 = *a1 + *b1;
    *b1 = temp - *b1;

    return;
}

int main()
{
    //variable declaration
    int a = 8, b = 6;
    //print to user
    printf("Before running the function, the value of a = %d and value of b = %d\n", a, b);
    //function call for change the values
    addSub(&a, &b);
    //after using function print to user
    printf("After running the function, the value of a = %d and value of b = %d\n", a, b);

    return 0;
}