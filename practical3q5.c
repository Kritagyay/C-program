#include<stdio.h>  
  
int main()  
{  
    int hardness, ts;  
    float carbon;  
  
    printf("Enter values of hardness, tensile Strength and Carbon Content in Steel\n");  
    scanf("%d %d %f", &hardness, &ts, &carbon);  
  
    if(hardness > 50 && carbon < 0.7 && ts > 5600)  
    {  
        printf("Steel Grade is 10\n");  
    }  
    else if(hardness > 50 && carbon < 0.7)  
    {  
        printf("Steel Grade is 9\n");  
    }  
    else if(carbon < 0.7 && ts > 5600)  
    {  
        printf("Steel Grade is 8\n");  
    }  
    else if(hardness > 50 && ts > 5600)  
    {  
        printf("Steel Grade is 7\n");  
    }  
    else if(hardness > 50 || carbon < 0.7 || ts > 5600)  
    {  
        printf("Steel Grade is 6\n");  
    }  
    else if(hardness < 50 && carbon > 0.7 && ts < 5600)  
    {  
        printf("Steel Grade is 5\n");  
    }  
    else {
        printf("None of the above condition is satisfied \n");
    }
  
    return 0;  
} 