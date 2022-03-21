#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define MKDIR "mkdir "
int main()
{

	int i,n;
	char chs[255]={0};
	char num[255]={0};
	printf("请输入要创建多少个数字文件夹：");
	scanf("%d",&n);
	for(i=1;i<=n;i++)
	{
		strcat(chs,MKDIR);
		sprintf(num,"%d",i);
		strcat(chs,num);	
		system(chs);	
		memset(chs,0,strlen(chs));
	}
	return 0;
}
