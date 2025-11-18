#include<stdio.h>
int main()
{
	int arr[5]={30,20,10,89,67};
	 int large=arr[0],i;
	for(i=1; i<5; i++)
	{
		if(arr[i]>large)
		large=arr[i];
	}
	printf("largest is%d\t",large);
}
