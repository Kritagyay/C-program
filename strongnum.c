/*#include<stdio.h>
int main(){
   int n,i;
   int fact,rem;
   printf("\nEnter a number : ");
   scanf("%d",&n);
   printf("\n");
   int sum = 0;
   int temp = n;
   while(n){
      i = 1,fact = 1;
      rem = n % 10;
      while(i <= rem){
         fact = fact * i;
         i++;
      }
      sum = sum + fact;
      n = n / 10;
   }
   if(sum == temp)
      printf("%d is a strong number\n",temp);
   else
      printf("%d is not a strong number\n",temp);
   return 0;
}*/
# include<stdio.h>  
# include<math.h> 
int main (){ 
   float a,b,c,r1,r2,d; 
   printf ("enter the values of a b c"); 
   scanf (" %f %f %f", &a, &b, &c); 
   d= b*b - 4*a*c; 
   if (d>0){ 
      r1 = -b+sqrt (d) / (2*a); 
      r2 = -b-sqrt (d) / (2*a); 
      printf ("The real roots = %f %f", r1, r2); 
   } 
   else if (d == 0){ 
      r1 = -b/(2*a); 
      r2 = -b/(2*a); 
      printf ("roots are equal =%f %f", r1, r2); 
   } 
   else 
      printf("Roots are imaginary"); 
   return 0; 
} 