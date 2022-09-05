#include<stdio.h>
int main()
{
	int choice;
	float miles,foot,inches,kg,meters,km,inch,cm,pound,i;
	
	int ch;
	printf("Enter 1 if you want to perform conversions:\n");
	printf("Enter 2 if you do not want to perform conversions:\n");
	scanf("%d",&ch);
	switch(ch)
	{
	case 1:printf("Lets perform conversions of units:)\n");
	
	//Lets do conversion of units
	printf("Enter 1 to convert kilometers to miles\n");
	printf("Enter 2 to convert inches to foot\n");
	printf("Enter 3 to convert centimeters to inches\n");
	printf("Enter 4 to convert pound to kilogramms\n");
	printf("Enter 5 to convert inches to meters\n");
	scanf("%d",&choice);
	switch(choice)
	{
		case 1:printf("Enter the given kilometers:");
		scanf("%f",&km);
		 miles=km*0.621371;
		printf("Its conversion in miles is %f",miles);
		break;
		
		case 2:printf("Enter the given inches:");
		scanf("%f",&inch);
	    foot=inch*0.08333;
		printf("Its conversion in foot is %f",foot);
		break;
		
		case 3:printf("Enter the given centimeters:");
		scanf("%f",&cm);
		inches=cm*0.393701;
		printf("Its conversion in inches is %f",inches);
		break;
		
		case 4:printf("Enter the given pound:");
		scanf("%f",&pound);
	    kg=pound*0.453592;
		printf("Its conversion in kilograms is %f",kg);
		break;
		
		case 5:printf("Enter the given inches:");
		scanf("%f",&i);
		meters=i*0.0254;
		printf("Its conversion in meters is %f",meters);
		break;
		
		default:printf("Wrong Choice!!");
		break;
		
	}
	break;
	
	case 2:printf("You choosed not to perform any conversions\n");
	printf("Have a nice day!");
	break;
	
	default:printf("Wrong Choice!!");
	break;
}
	return 0;
	
}