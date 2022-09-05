#include<stdio.h>
int main(){
    int a,b,x;
    float s;
    printf("Enter the Values of a,b,x...");
    scanf("%d%d%d",&a,&b,&x);
    s=(a*x+b)/(a*x-b);
    printf("The Resultant Value is : %f",s);
    return 0;
}