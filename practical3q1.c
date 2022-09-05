#include<stdio.h>
int main()
{
    float cp,sp,profit,loss;
    printf("Enter the value of cost price and selling price \n");
    scanf("%f%f",&cp,&sp);
    if (sp>cp){
        printf("Profit is made\n");
        profit=sp-cp;
        printf("%f",(profit*100)/cp);
    }
    else if (cp>sp)
    {
        printf ("Loss is made\n");
        loss=cp-sp;
        printf ("%f %",(loss*100)/cp);
    }
    else{
        printf("We don't get any loss and profit on selling item\n");
    }
    return 0;
}