#include <stdio.h>
#define MAXWORD 1000

int denote(char s[]);

int main(void)
{
char s[MAXWORD];
while(denote(s)>0)
	printf("%s",s);
return 0;
}

int
denote(char s[])
{
int i,c,t;
for(i=0;(c=getchar())!=EOF&&c!='\n';i++)
{
	s[i] = c;
	if(c == '/')
	{
		if ((c = getchar()) == '/')
		{	
			i--;
			while((c=getchar())!='\n')
			;
		}
		else if (c == '*')
		{
			i--;
			while(!((c=getchar())=='*') ||!((c=getchar())=='/'));
		}
		else
			s[++i] = c;
	}
}

if(c=='\n')
	s[i++] = '\n';
s[i] = '\0';
return i;
}
