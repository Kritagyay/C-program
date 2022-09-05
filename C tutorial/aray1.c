#include <stdio.h>

int main()
{
    int a[10], b[10], c[10], n, i;

    printf("Enter the number of elements:\t");
    scanf("%d", &n);

    printf("Enter %d elements for array 1:\n", n);

    for (i = 0; i < n; i++)
        scanf("%d", &a[i]);
{
    printf("Enter %d elements for array 2:\n", n);
}
    for (i = 0; i < n; i++)
        scanf("%d", &b[i]);

    for (i = 0; i < n; i++)
        c[i] = a[i] + b[i];

    printf("Sum of two array elements are:\n");

    for (i = 0; i < n; i++)
        printf("%d\n", c[i]);
return 0;
}