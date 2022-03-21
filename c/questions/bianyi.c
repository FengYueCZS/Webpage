#include <stdlib.h>
#include <string.h>
#include <stdio.h>
#include <stdbool.h>

int main()
{
	int i,n;
	char c;
	char chs[255]={0};
	char ch[255]={0};
	char input[255]={0};
	bool b=false;
	printf("请输入要编译的名字：");
	/*
	for(i=0;i<sizeof(chs);i++)
	{
		scanf("%c",&chs[i]);
		if(chs[i]=='\n')
		{
			break;
		}
	}
	chs[i]='\0';
	printf("\n\n\n");
	*/
	//scanf("%d",&i);
	/*
	for(i=0;i<sizeof(input);i++)
	{
		scanf("%c",&input[i]);
		if(input[i]=='\n')
		{
			input[i]='\0';
			break;
		}
	}
	*/
	scanf("%s",input);
	getchar();//吃掉这里多打的回车
loop:
	printf("是否需要加-lm进行编译(y/n)\n");
	c=getchar();
	if(c=='y')
	{
		b=true;
	}
	else if(c=='n')
	{
		b=false;
	}
	else
	{
		printf("请输入y/n\n");
goto loop;					
	}
	if(input[0]>=48&&input[0]<=57)
	{
		n=atoi(input);
		switch(n)
        	{
                	case 1:
				strcat(chs,"One.c");
				break;
			case 2:
				strcat(chs,"Tow.c");
				break;
			case 3:
				strcat(chs,"Three.c");
				break;
			case 4:
				strcat(chs,"Four.c");
				break;
			case 5:
				strcat(chs,"Five.c");
				break;
			case 6:
				strcat(chs,"Six.c");
				break;
			case 7:
				strcat(chs,"Seven.c");
				break;
			case 8:
				strcat(chs,"Eight.c");
				break;
			case 9:
				strcat(chs,"Nine.c");
				break;
			case 10:
				strcat(chs,"Ten.c");
				break;
			case 11:
				strcat(chs,"Eleven.c");
				break;
			case 12:
				strcat(chs,"Twelve.c");
				break;
			case 13:
				strcat(chs,"Thirteen.c");
				break;
			case 14:
				strcat(chs,"Fourteen.c");
				break;
			case 15:
				strcat(chs,"Fifteen.c");
				break;
			case 16:
				strcat(chs,"Sixteen.c");
				break;
			case 17:
				strcat(chs,"Seventeen.c");
				break;
			case 18:
				strcat(chs,"Eignteen.c");
				break;
			case 19:
				strcat(chs,"Nineteen.c");
				break;
			case 20:
				strcat(chs,"Twenty.c");
				break;
			default:
				strcat(chs,"bianyi.c");
				break;
        	}
	}
	else
	{
		strcat(chs,input);
		/*
		for(i=0;i<sizeof(chs);i++)
		{
			printf("%c",chs[i]);
			if(chs[i]=='\0')
			{
				break;
			}
		}
		return 0;
		*/
	}
	printf("\n\n\n");
	//char ch[255];
	//strncpy(ch,chs,i-2);
	//ch[i-2]='\0';
	//printf("gcc %s -o %s && ./%s",chs,ch,ch);
	//char c[]={"gcc "+chs+" -o "+ch+" && ./"+ch};

	int len=strlen(chs);
	//printf("%d\n",len);
	//return 0;
	strcat(ch,"gcc ");
	strcat(ch,chs);
	if(b)
	{
		strcat(ch," -lm ");
	}
	strcat(ch," -o ");
	strncat(ch,chs,len-2);
	strcat(ch," && ./");
	strncat(ch,chs,len-2);
	
	//printf("i = %d \n ch = %s\n",i,ch);

	system(ch);

	return 0;
}
