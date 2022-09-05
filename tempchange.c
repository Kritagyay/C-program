#include<stdio.h>
int main()
{
    float Fahrenheit, Celsius; 
    printf("Enter the value of temperature in fahernheit i.e. : \n");
    scanf("%f",&Fahrenheit);
          Celsius = ((Fahrenheit-32)*5)/9;  
                   printf("\n\n Temperature in Celsius is : %f",Celsius);  
      
    return 0;
}