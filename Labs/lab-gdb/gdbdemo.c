#include <stdio.h>

void fun();

int main()
{
	int x;
	char c[30];

	printf("Enter a number: ");
	scanf("%d",&x);

	fun();
	
	return 0;
}

void fun()
{
	int a = 5;
	int b = 0;

	int c;
	
	if(b!=0){
		c = a / b;
		printf("Result is %d\n", c);
	}
	else{
		printf("Cannot perform a/b, b is 0");
	}
}
