#include<stdio.h>

void main()
{
	int age;
	char name[10];
	float salary;
	
	printf("\n******Accepting Employee Details*******");
	
	printf("\nEnter Your Name : ");
	scanf("%s",&name);
	printf("\nEnter Age : ");
	scanf("%d",&age);
	printf("\nEnter Salary : ");
	scanf("%f",&salary);
	
	printf("\n******Display Employee details******");
	
	printf("\nName : %s",name);
	printf("\nAge : %d",age);
	printf("\nSalary : %.2f",salary);
	
	
}