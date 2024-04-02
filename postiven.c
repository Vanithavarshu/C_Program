#include<stdio.h>
int main()
{
	double n;
	printf("Enter a number");
	scanf("%lf",&n);
	if (n<=0.0)
	{
		if(n==0.0)
			printf("entered 0.");
		else
			printf("Entered negative number.");
	}
	else
		printf("Entered positive number.");
	return 0;
}
