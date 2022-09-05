#include <stdio.h>
int isPalindrome(int num)
{
    int n = num;
    int rev = 0;
    while (n)
    {
        int r = n % 10;
        rev = rev * 10 + r;
        n = n / 10;
    }
    return (num == rev);
}
 
int main()
{ int n;
  printf ("Enter the number\n");
 scanf ("%d",&n);
    if (isPalindrome(n)) {
        printf("Palindrome");
    }
    else {
        printf("Not Palindrome");
    }
 
    return 0;
}


 /* #include <stdio.h>

void main(){
    int num,r,sum=0,t;

    printf("Input a number: ");
    scanf("%d",&num);

    for(t=num;num!=0;num=num/10){
         r=num % 10;
         sum=sum*10+r;
    }
    if(t==sum)
         printf("%d is a palindrome number.\n",t);
    else
         printf("%d is not a palindrome number.\n",t);

} */