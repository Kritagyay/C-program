#include <stdio.h>

int main()
{
    int N=0, L=0, B=0, H=0, i=0;
    printf("Enter the value of N case.\n");
    scanf("%d",&N);
    for (i = 0; i < N; i++)
    {
        printf("Enter the value of Length, Breadth and height respectively.\n");
        scanf("%d %d %d",&L,&B,&H);
        if (H<41)
        {
            printf("The volume is %d\n",L*B*H);
        }
        else if (H>41)
        {
            printf("Please enter vallied height.");
        }
    }
    
    return 0;
}