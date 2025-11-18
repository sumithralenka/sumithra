#include<stdio.h>
int main()
{
	int marks;
	printf("enter any number");
	scanf("%d",&marks);
	if(marks>=70 && marks<=100)
	printf("A GRADE");
	else if(marks>=30 && marks<=70)
	printf("B GRADE");
	else 
	printf("C GRADE");
	return 0;
}
