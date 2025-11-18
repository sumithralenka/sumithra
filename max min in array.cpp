#include<stdio.h>
int main()
{
	int i,max,min,size;
	printf("enter size of the array");
	scanf("%d",&size);
	int arr[size];
	printf("enter element in the array");
	for(i=0; i<size; i++)
	{
		if (arr[i]>max)
		{
			max=arr[i];
		}
		if(arr[i]<min)
		{
			min=arr[i];
		}
	}
	printf("maximam element =%d\n",max);
	printf("minimum element =%d",min);
	return 0;
}
