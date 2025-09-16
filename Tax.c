#include<stdio.h>
int main(){
	float tax=0;
	int sal=0;
	float After =0;
	float txp= 0;
	printf("Enter your Monthly Salary :");
	scanf("%i",&sal);
	printf("Enter the Tax rate :");
	scanf("%f",&tax);
	After= sal*(tax/100);
	txp= sal - After;
	printf("Salary after tax :%f\n",After);
	printf("Tax paid=%f\n",txp);
	
}