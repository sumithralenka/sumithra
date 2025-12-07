#include<stdio.h>
int main()
{
	int a[100]={80,60,20,70,10,50};
	int search=80,n=6,i;
	 for(i=0; i<=n; i++)
    {
    	if(search==a[i])
    	{
    		printf("searching element is found at %d",i);
    		return 0;
	
	    }
	}
	printf("element not found");
	return 0;
}
