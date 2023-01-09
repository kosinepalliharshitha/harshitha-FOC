#include<stdio.h>
#include<conio.h>
int main()
{
	int sum = 0, n;
			int a = 0;
	int b = 1;
			printf("\n Enter the nth value: ");
		scanf("%d", &n);
			printf("\n Fibonacci series: ");
		while(sum <= n)
{
			printf("%d ", sum);
		a = b; 
		b = sum;
			sum = a + b;  
}
	return 0;
}

