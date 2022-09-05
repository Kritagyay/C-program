#include<stdio.h>
#include <math.h>
int main()
{
    float wcf,t,v;
    printf("Enter the value of temerature and wind velocity :\n");
    scanf("%f%f",&t,&v);

    wcf=35.74+(0.6215*t)+((0.4725*t-(35.75)))*pow (v,0.16);
    printf("The value of wind chill factor is \n %f",wcf);
    return 0;
}