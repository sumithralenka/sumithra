//DMA Dynamic Memory Allocation
#include<stdio.h>
int main()
{
	int n,*ptr,i,m;
	printf("Enter n value:");
	scanf("%d",&n);
	//ptr=(type*)malloc(size*size of (int))//5*4=20 bytes
	//ptr=(type)calloc(size,size of int))
	ptr=(int*) nmalloc(n*sizeof(int));
	for(i=0;i<n;i++)
	*(ptr+i)=i+10;//2000=10 2004=20 2008=30 2010=40 2012=50
	printf("after malloc/calloc Elements addresses are:\n");
	for(i=0;i<n;i++)
	printf("%d=%d\n",ptr+i,*(ptr+i));//2000=10
	//update
	printf("Enter Updated Array size:");
	scanf("%d",&m);
	//ptr=realloc(ptr,size*sizeof(int))
	ptr=realloc(ptr,m*sizeof(int));
	printf("After realloc elements addresses are:\n");
	if(m>n)
	{
		for(i=n;i<m;i++)
		*(ptr+i)=i+10;
	}
	for(i=0;i<m;i++)
	printf("%d=%d\n",ptr+i,*(ptr+i));
	free(ptr);
	printf("\n after free memory elements are:\n");
	for(i=0;i<m;i++)
	printf("%d=%d\n",ptr+i,*(ptr+i));
	return 0;	
}
