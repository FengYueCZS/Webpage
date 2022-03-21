#include <stdio.h>
#define PAI 3.14

void main()
{
	float r,c,s;
	r=5;
	c=2*PAI*r;
	s=PAI*r*r;
	printf("半径为%.0f的圆，周长是%.2f,面积是%.2f\n",r,c,s);
}
