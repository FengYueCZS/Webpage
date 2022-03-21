#include <stdio.h>
#include <math.h>

void main()
{
	long sum=0;
	int i=1;
	for(;i<6;i++)
	{
		sum+=pow(i,i+1);
	}
	printf("sum=%ld\n",sum);
}
