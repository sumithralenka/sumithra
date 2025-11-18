#include<stdio.h>
int main()
{
	int arr[5]={10,20,30,40,50};
	int i=0,j=arr[i],tem;
	for(i=0; i<5; i++)
	{
	for(j=arr[i]; j<5; j--)
	{
		if(arr[i]>arr[j])
		{
			tem=arr[i];
			arr[i]=arr[j];
			arr[j]=tem;
		}
	}
}
	printf("%d %d %d",i,j,tem);
	return 0;
}
