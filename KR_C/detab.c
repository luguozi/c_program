#include <stdio.h>
# if 0
this program is for page 25 liaxni1-20

# endif 
#define TABSTOP 8
#define MAXWORD 1000
int turntabtowhite(char s[],int max);

int main(void)
{
char s[MAXWORD];
while(turntabtowhite(s,MAXWORD)>0)
	printf("%s",s);
return 0;
}

int
turntabtowhite(char s[],int max)
{
int i,j,c;
for(i=0;i<max-1&&((c=getchar())!=EOF)&&c!='\n';i++)
{
	s[i] = c;
	if(c == '\t')
	{
		j = i % TABSTOP;
	while(j<=TABSTOP-1)
		{	
			s[i++] = ' ';
			j++;
		}
		i--;
	}
}
if(c =='\n')
s[i++]=c;
s[i] = '\0';
return i;
}





