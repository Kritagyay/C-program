#include<stdio.h>
#include  <math.h>
int main()
{
    float x,y,p,q,r,d;
    printf("The co ordinates of centre of circle is:\n");
    scanf("%f%f",&x,&y);
    printf("The radius of circle is:\n");
    scanf("%f",&r);
    printf("Now enter the value of points \n");
    scanf("%f%f",&p,&q);
    d=sqrt(pow(x-p,2)+pow(y-q,2));
    if (d>r){
        printf("The point lies outside  the circle  \n");
    }
    else if (d<r){
          printf("The point lies inside  the circle  \n");
    }
    else{
          printf("The point lies on  the circle  \n");
    }
    return 0;
}