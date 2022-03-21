#include <stdio.h>
#define S(r) 3.14159*r*r
#define C(r) 2*3.14159*r

void main()
{
	int r=5;
	printf("半径为%d的圆，面积是：%.2f,周长是：%.2f\n",r,S(r),C(r));
}
