#include <stdio.h>
#define TABSTOP 8
#define MAXWORD 1000
int turnwhitetotab(char s[],int max);
int main(void)
{
char s[MAXWORD];
while(turnwhitetotab(s,MAXWORD)>0)//if eqal 0 ,then is '\0'
	printf("%s",s);
return 0;
}

int 
turnwhitetotab(char s[],int max)
{
int i,c;
i=0;
for(i=0;((c=getchar())!=EOF)&&c!='\n'&&i<max-1;i++)
{
	s[i] = c;
	if(c==' '&&(i%TABSTOP==7))
	{
		while(s[i--]==' ');//智慧进行到本轮最多8个位的检查
		i++;//note:很容易多减了1次，因为最后一次还是减了
		s[++i] = '\t';	
	}
}

if(c == '\n')
	s[i++] = '\n';
s[i] = '\0';
return i;
}
