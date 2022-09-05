#include<stdio.h>
#include<math.h>
int main()
{
    int a,b,c,area,perimeter,circu,acircle;
    printf("Enter the sides of rectangle i.e a and  b\n");
    scanf("%d%d",&a,&b);
    area=a*b;
    printf("Area of rectangle is %d\n",area);
     perimeter=2*(a+b);
     printf("Perimeter of rectangle is %d\n",perimeter);
      printf("Enter the radius of circle ");
      scanf("%d",&c);
        acircle = (3.14*c*c);
       printf("Area of circle is %d \n",acircle);
        circu=2*3.14*c;
       printf("Circumference of circle is %d",circu);
    return 0;
}