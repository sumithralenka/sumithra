
#include<stdio.h>
int main()
{
  int operator;
  double num1,num2;
  printf("enter any operator(/,*,-,+)");
  scanf("%d",&operator);
  printf("enter any numbers\n");
  scanf("%lf %lf",&num1,&num2);
  switch(operator)
  {
  	case'+':
  	printf("%lf+%lf=%lf",num1,num2,num1+num2);
  	break;
	case'-':
	printf("%lf-%lf=%lf",num1,num2,num1-num2);
	break;
	case'*':
	printf("%lf*%lf=%lf",num1,num2,num1*num2);
	break;
	case'/':
	if(num2!=0)	
	printf("%lf/%lf=%lf",num1,num2,num1/num2);
	else
	printf("error:division by zero");
	break;  	
  }
  return 0;
}
