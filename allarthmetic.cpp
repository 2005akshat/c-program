#include<stdio.h>
#include<conio.h>
int main()
{
	int a,b,c,d,e,f;
	printf("enter the value of a = ");
	scanf("%d",&a);
	printf("enter the value of b = ");
	scanf("%d",&b);
	c=a+b;
	d=a-b;
	e=a/b;
	f=a%b;
	printf("subtract = %d \n",d);
	printf("division = %d",e);
	printf("modulus = %d",f);
	printf("sum = %d",c);
	return 0;
}

