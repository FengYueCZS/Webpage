#include <stdio.h>
#define TOMATO 3.7
#define CMD 7.0
#define CELERY 1.3
#define SCE 8.0
#define ONION 2.4
#define ORE 9.0
#define CUKE 6.3
#define WRH 0.5
#define KG(n) n/2.0
void main()
{
	float xm,xh,xjy;
	xm=KG(2)*TOMATO+KG(1)*SCE+KG(1)*ORE;
	xh=KG(3)*CELERY+KG(0.5)*ONION+KG(5)*CUKE;
	xjy=KG(10)*CUKE+KG(20)*WRH;
	printf("小明需要支付%.2f元\n小红需要支付%.2f元\n小甲鱼需要支付%.2f元\n"\
	       ,xm,xh,xjy);	
}
