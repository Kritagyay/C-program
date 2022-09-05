/*#include <stdio.h>
#include<math.h>
int factorial(int number)
{
    if (number==1 || number ==0)
 {
        return 1;
 }
    else
    {
        return (number*factorial(number-1));
}
}
int main()
{
    int num;
   printf("Enter the number whose factorial has to be calculated:\n");
    scanf("%d",&num);

    printf ("The factorial of %d is %d\n",num,factorial(num));
    
    
    return 0;
}*/

#include <stdio.h>

int main()
{
    int i, num, sum = 0;

    /* Input a number from user */
    printf("Enter any number to check perfect number: ");
    scanf("%d", &num);

    /* Calculate sum of all proper divisors */
    for(i = 1; i <= num / 2; i++)
    {
        /* If i is a divisor of num */
        if(num%i == 0)
        {
            sum += i;
        }
    }

    /* Check whether the sum of proper divisors is equal to num */
    if(sum == num && num > 0)
    {
        printf("%d is PERFECT NUMBER", num);
    }
    else
    {
        printf("%d is NOT PERFECT NUMBER", num);
    }

    return 0;
}