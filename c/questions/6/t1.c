#include <stdio.h>
#include <math.h>
#define KG(n) n/25000

void main()
{
	int i=1,n=1;
	unsigned long long sum=0.0;
	for(;i<=64;i++)
	{
		sum+=n;
		n=pow(2,i);
		//printf("sum=%llu\t",sum);
	}
	printf("舍罕王要兑现他的许诺共要%llu粒麦子赏赐他的宰相\n舍罕王应该给予达依尔%llu公斤麦子\n",sum,KG(sum));
}
