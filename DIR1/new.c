#include<stdio.h>

void sum(int a, int b)
{
printf("%d",a+b);
}

void diff(int a, int b)
{
printf("%d",a-b);
}

void pro(int a, int b)
{
printf("%d",a*b);
}

void div(int a, int b)
{
printf("%d",a/b);
}

void main()
{
	int a,b;
	sum(a,b);
	diff(a,b);
	pro(a,b);
	div(a,b);
}
