#include<stdio.h>
void sum(int a,int b )
  {
   int c;  
   c=a+b;
   printf("sum is %d",c);
 }
    int main()
  {
  int a,b;
   printf("enter two numbers");  
  scanf("%d%d",&a,&b); 
   sum(a,b);
   return 0;
}

