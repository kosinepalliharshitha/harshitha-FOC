#include<stdio.h>
int main()
{
	int a,b;
	void swap(int*a,int*b);
	printf("enter the two numbers:");
	scanf("%d%d",&a,&b);
	printf("\n values before swapping is a=%d,");
	swap(&a,&b);
	printf("\n values after swapping is a=%d,b=%d,a,b");
	return 0;
}
void swap(int*a,int*b)
{
	*a=*a+*b;
	*b=*a-*b;
	*a=*a-*b;
}
