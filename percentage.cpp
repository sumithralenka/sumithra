#include<stdio.h>
int main()
{
	int percentage;
	printf("enter any percentage");
	scanf("%d",&percentage); 
	if(percentage>=90 && percentage<=100)
	printf("distunction");
	else if(percentage>=80 && percentage<=90)
	printf("first class");
	else if(percentage>=50 && percentage<=80)
	printf("second class");
	else
	printf("failed");
	return 0;
}
