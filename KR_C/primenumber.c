#include <stdio.h>
#define UPPER 100
int main(void)
{
int i,j;
for(i = 2;i <= UPPER;i++)
	for(j = 2;j <= i;j++)
		{
		if(i%j == 0 && j!=i)
			break;
		if(j == i)
			printf("\n%d",i);	
		}
return 0;
}
