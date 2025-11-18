#include<stdio.h>
int main()
{
	int a=2,b=5,c;
	c=a+b;
	printf("%d",c);
	int arr[c]={3,4,5,6,7};
	int value=4;
	int* ptr= &value;
	printf("%d\n",arr);
	printf("%p",ptr);
		int age;
	printf("enter any number");
	scanf("%d",&age);
	if(age>=18)
	printf("eligible for vote");
	else
	printf("not eligible for vote");
	return 0;
}
