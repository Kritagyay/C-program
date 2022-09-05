#include <stdio.h>
int isPerfect(int num)
{
    int i, sum = 0;

    for (i = 1; i < num; i++) {
        if (num % i == 0)
            sum += i;
    }

    if (sum == num)
        return 1;
    else
        return 0; 
}

int main()
{
    int num;
    printf("Enter an integer number: ");
    scanf("%d", &num);

    if (isPerfect(num))
        printf("%d is a perfect number.", num);
    else
        printf("%d is not a perfect number.", num);

    return 0;
}

/*# include <stdio.h>   

int main()   
{   
 int i, Number, Sum = 0 ;   
  
 printf("\n Please Enter any number \n") ;   
 scanf("%d", &Number) ;   
 
 for(i = 1 ; i < Number ; i++)   
  {   
   if(Number % i == 0)   
     Sum = Sum + i ;   
  }    

 if (Sum == Number)   
    printf("\n %d is a Perfect Number", Number) ;   
 else   
    printf("\n%d is not the Perfect Number", Number) ;   

return 0 ;   
} */