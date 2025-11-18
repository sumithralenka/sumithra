#include<stdio.h>
int main()
{
	int arr[6]={6,7,8,9,5,4};
	int* ptr= &arr[3];
	printf("%d",arr);
	printf("%p",ptr);
	return 0;
}
