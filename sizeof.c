#include<stdio.h>
int main()
{
	int a;
	float b;
	char c;
	double d;
	long double e;
	printf("size of int: %zu bytes\n",sizeof(a));
	printf("size of float: %zu bytes\n",sizeof(b));
	printf("size of char: %zu bytes\n",sizeof(c));
	printf("size of double: %zu bytes\n",sizeof(d));
	printf("size of long double: %zu bytes\n",sizeof(e));
}

