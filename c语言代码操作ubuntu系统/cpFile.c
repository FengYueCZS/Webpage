#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define CP "cp "

void main()
{
	int i=6;
	//cp bianyi i/bianyi
	char fileName[255]={0};
	char num[10]={0};
	char chs[255]={0};
	printf("请输入需要拷贝的文件名：");
	scanf("%s",fileName);
	for(;i<=40;i++)
	{
		memset(num,0,strlen(num));
		memset(chs,0,strlen(chs));
		strcat(chs,CP);
		strcat(chs,fileName);
		sprintf(num," %d/",i);
		strcat(chs,num);
		strcat(chs,fileName);
		system(chs);
	}	
	//printf("chs=%s",chs);	
}
