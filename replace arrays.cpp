#include<stdio.h>
int main()
{
	int i;
	int arr[]={1,2,3,4,5};
	printf("original array");
	for(i=0; i<5; i++)
	{
		printf("%d",arr[i]);
	}
	int index_to_replace=2;
	int new_value=10;
	arr[index_to_replace]=new_value;
	printf("\nmodified array");
	for(i=0; i<5; i++)
	{
		printf("%d",arr[i]);
	}
	return 0;
}
