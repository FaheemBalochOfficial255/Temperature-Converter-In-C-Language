#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main()
{
	int from=0;
	int to=0;
	float temperature=0.0;
	float result=0.0;

	printf("***TEMPERATURE CONVERTER***\n");
	printf("1. Fahrenheit\t");
	printf("2. Celsius\t");
	printf("3. Kelvin\t\n");
	
	printf("\n***Convert From***\n");
	printf("Choose Only One Option\n");
	printf("\n1. Fahrenheit");
	printf("\n2. Celsius");
	printf("\n3. Kelvin");
	printf("\nOption = ");
	scanf("%d",&from);
	
	printf("\n***Convert To***\n");
	printf("Choose Only One Option\n");
	printf("\n1. Fahrenheit");
	printf("\n2. Celsius");
	printf("\n3. Kelvin");
	printf("\nOption = ");
	scanf("%d",&to);
	
	printf("\nTemperature = ");
	scanf("%f",&temperature);
	
	if(from==1 && to==1)
	{
		printf("\nConverting %.2f Fahrenheit Results in %.2f Fahrenheit",temperature,temperature);
	}
	if(from==1 && to==2)
	{
		float result=(temperature-32)*5/9;
		printf("\nConverting %.2f Fahrenheit Results in %.2f Celsius",temperature,result);
	}
	if(from==1 && to==3)
	{
		float result=(temperature-32)*5/9+273.15;
		printf("\nConverting %.2f Fahrenheit Results in %.2f Kelvin",temperature,result);
	}
	if(from==2 && to==1)
	{
		float result=(temperature*9/5)+32;
		printf("\nConverting %.2f Celsius Results in %.2f Fahrenheit",temperature,result);
	}
	if(from==2 && to==2)
	{
		printf("\nConverting %.2f Celsius Results in %.2f Celsius",temperature,temperature);
	}
	if(from==2 && to==3)
	{
		float result=temperature+273.15;
		printf("\nConverting %.2f Celsius Results in %.2f Kelvin",temperature,result);
	}
	if(from==3 && to==1)
	{
		float result=(temperature-273.15)*9/5+32;
		printf("\nConverting %.2f Kelvin Results in %.2f Fahrenheit",temperature,result);
	}
	if(from==3 && to==2)
	{
		float result=temperature-273.15;
		printf("\nConverting %.2f Kelvin Results in %.2f Celsius",temperature,result);
	}
	if(from==3 && to==3)
	{
		printf("\nConverting %.2f Kelvin Results in %.2f Kelvin",temperature,temperature);
	}
	return 0;
}
